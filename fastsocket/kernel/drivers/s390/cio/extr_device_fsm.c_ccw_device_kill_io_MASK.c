
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; int (* handler ) (struct ccw_device*,int ,int ) ;} ;
struct TYPE_2__ {int iretry; int intparm; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*,int) ;
 int FUNC_4 (struct ccw_device*,int ,int ) ;

void FUNC_5(struct ccw_device *VAR_4)
{
 int VAR_5;

 VAR_4->private->iretry = 255;
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == -VAR_1) {
  FUNC_3(VAR_4, 3*VAR_3);
  VAR_4->private->state = VAR_0;
  return;
 }

 FUNC_2(VAR_4, 0);
 if (VAR_4->handler)
  VAR_4->handler(VAR_4, VAR_4->private->intparm,
         FUNC_0(-VAR_2));
}
