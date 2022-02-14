
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_device {TYPE_2__* private; } ;
struct TYPE_3__ {int recog_done; } ;
struct TYPE_4__ {int state; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ccw_device*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ccw_device *VAR_5)
{
 if (VAR_4 == 0) {
  VAR_5->private->flags.recog_done = 1;
  return;
 }
 switch (VAR_5->private->state) {
 case 130:

 case 129:
  VAR_5->private->flags.recog_done = 1;

  FUNC_1(VAR_5, VAR_1);
  if (FUNC_0(&VAR_2))
   FUNC_2(&VAR_3);
  break;
 case 128:




  FUNC_1(VAR_5, VAR_0);
  break;
 }
}
