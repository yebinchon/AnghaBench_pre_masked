
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; int (* handler ) (struct ccw_device*,int ,int ) ;TYPE_1__ dev; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_4__ {int intparm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*,int ,int ) ;
 struct subchannel* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ccw_device *VAR_1, enum dev_event VAR_2)
{
 struct subchannel *VAR_3;

 VAR_3 = FUNC_4(VAR_1->dev.parent);
 FUNC_2(VAR_1, 0);

 FUNC_1(VAR_1, 0);

 if (VAR_1->handler)
  VAR_1->handler(VAR_1, VAR_1->private->intparm,
         FUNC_0(-VAR_0));
}
