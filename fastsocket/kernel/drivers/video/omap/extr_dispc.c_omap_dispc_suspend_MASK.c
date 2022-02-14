
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ update_mode; TYPE_1__* fbdev; int frame_done; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 if (VAR_1.update_mode == VAR_0) {
  FUNC_2(&VAR_1.frame_done);
  FUNC_4(0);
  if (!FUNC_5(&VAR_1.frame_done,
    FUNC_3(500))) {
   FUNC_0(VAR_1.fbdev->dev,
    "timeout waiting for FRAME DONE\n");
  }
  FUNC_1(0);
 }
}
