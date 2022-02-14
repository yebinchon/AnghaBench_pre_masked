
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned long VAR_3 = VAR_2 + FUNC_2(30);

 while (FUNC_0(VAR_0) & (1 << 4)) {
  if (FUNC_4(VAR_2, VAR_3)) {
   if (FUNC_3())
    FUNC_1(VAR_1.fbdev->dev,
     "s1d1374x: YYC not ready\n");
   break;
  }
 }
}
