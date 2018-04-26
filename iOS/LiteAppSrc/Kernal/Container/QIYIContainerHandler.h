//
//  QIYIContainerHandler.h
//  QIYIMiniProgram
//
//  Created by Breakerror on 2018/2/28.
//  Copyright © 2018年 Breakerror. All rights reserved.
//

#import "QIYIInct.h"

@protocol QIYIContainerHandler<NSObject>
-(void) startNewPage:(NSString*)name withArguments:(NSDictionary*)arguments;
@end
