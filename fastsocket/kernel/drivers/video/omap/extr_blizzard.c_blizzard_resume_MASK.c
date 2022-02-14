
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int zoom_on; int update_mode_before_suspend; TYPE_1__* fbdev; int (* power_up ) (int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
 u32 VAR_5;

 if (VAR_4.power_up != ((void*)0))
  VAR_4.power_up(VAR_4.fbdev->dev);

 VAR_5 = FUNC_0(VAR_3);

 VAR_5 &= ~0x03;
 FUNC_6(VAR_3, VAR_5);

 FUNC_3();
 VAR_5 = FUNC_0(VAR_2);
 VAR_5 &= ~0x03;

 VAR_5 |= 0x1;
 FUNC_6(VAR_2, VAR_5);

 while (!(FUNC_0(VAR_1) & (1 << 7)))
  FUNC_7(1);

 FUNC_1();

 FUNC_2();


 FUNC_6(VAR_0, 0x01);


 FUNC_4(VAR_4.update_mode_before_suspend);


 VAR_4.zoom_on = 1;
 FUNC_9();
 FUNC_5();
}
