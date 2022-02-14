
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;


 int FUNC_0 (struct subchannel*) ;
 struct subchannel* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ccw_device *VAR_0,
        enum dev_event VAR_1)
{
 struct subchannel *VAR_2;

 VAR_2 = FUNC_1(VAR_0->dev.parent);




 FUNC_0(VAR_2);
}
