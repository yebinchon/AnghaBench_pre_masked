
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;
struct TYPE_4__ {int update_mode; TYPE_1__* fbdev; int frame_done; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(enum omapfb_update_mode VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 != VAR_1.update_mode) {
  switch (VAR_2) {
  case 130:
  case 129:
   FUNC_1(1);
   FUNC_4(1);
   VAR_1.update_mode = VAR_2;
   break;
  case 128:
   FUNC_2(&VAR_1.frame_done);
   FUNC_4(0);
   if (!FUNC_5(&VAR_1.frame_done,
     FUNC_3(500))) {
    FUNC_0(VAR_1.fbdev->dev,
      "timeout waiting for FRAME DONE\n");
   }
   VAR_1.update_mode = VAR_2;
   FUNC_1(0);
   break;
  default:
   VAR_3 = -VAR_0;
  }
 }

 return VAR_3;
}
