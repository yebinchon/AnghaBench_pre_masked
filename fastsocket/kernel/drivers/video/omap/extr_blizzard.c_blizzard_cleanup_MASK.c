
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* fbdev; int (* power_down ) (int ) ;TYPE_2__* int_ctrl; TYPE_1__* extif; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int (* cleanup ) () ;} ;
struct TYPE_5__ {int (* cleanup ) () ;} ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_0(VAR_0);
 VAR_1.extif->cleanup();
 VAR_1.int_ctrl->cleanup();
 if (VAR_1.power_down != ((void*)0))
  VAR_1.power_down(VAR_1.fbdev->dev);
}
