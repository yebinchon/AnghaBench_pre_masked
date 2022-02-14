
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; int (* handler ) (struct ccw_device*,int ,int ) ;} ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_2__ {int iretry; int intparm; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (struct ccw_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ccw_device *VAR_5, enum dev_event VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_5, 0);
 VAR_5->private->iretry = 255;
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 == -VAR_2) {
  FUNC_2(VAR_5, 3*VAR_4);
  VAR_5->private->state = VAR_1;
  return;
 }
 if (VAR_7)
  FUNC_3(VAR_5, VAR_0);
 else if (VAR_5->handler)
  VAR_5->handler(VAR_5, VAR_5->private->intparm,
         FUNC_0(-VAR_3));
}
