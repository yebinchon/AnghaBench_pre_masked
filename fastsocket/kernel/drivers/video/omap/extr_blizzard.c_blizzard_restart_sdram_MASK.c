
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void)
{
 unsigned long VAR_4;

 FUNC_1(VAR_0, 0);
 FUNC_6(50);
 FUNC_1(VAR_0, 1);
 VAR_4 = VAR_3 + FUNC_3(200);
 while (!(FUNC_0(VAR_1) & 0x01)) {
  if (FUNC_5(VAR_3, VAR_4)) {
   FUNC_2(VAR_2.fbdev->dev,
     "s1d1374x: SDRAM not ready\n");
   break;
  }
  FUNC_4(1);
 }
}
