
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* fbdev; int (* power_down ) (int ) ;int update_mode; int update_mode_before_suspend; scalar_t__ last_color_mode; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(void)
{
 u32 VAR_5;
 unsigned long VAR_6;

 if (VAR_3.last_color_mode) {
  FUNC_11();
  FUNC_4();
 }
 VAR_3.update_mode_before_suspend = VAR_3.update_mode;

 FUNC_2(VAR_2);

 FUNC_1();

 FUNC_3();

 VAR_5 = FUNC_0(VAR_1);

 VAR_5 |= 0x03;
 FUNC_5(VAR_1, VAR_5);

 VAR_6 = VAR_4 + FUNC_7(100);
 while (!(FUNC_0(VAR_0) & (1 << 1))) {
  if (FUNC_10(VAR_4, VAR_6)) {
   FUNC_6(VAR_3.fbdev->dev,
    "s1d1374x: sleep timeout, stopping PLL manually\n");
   VAR_5 = FUNC_0(VAR_0);
   VAR_5 &= ~0x03;

   VAR_5 |= 0x2;
   FUNC_5(VAR_0, VAR_5);
   break;
  }
  FUNC_8(1);
 }

 if (VAR_3.power_down != ((void*)0))
  VAR_3.power_down(VAR_3.fbdev->dev);
}
