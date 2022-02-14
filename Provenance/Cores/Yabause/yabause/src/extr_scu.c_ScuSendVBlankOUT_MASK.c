
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ timer0; int T1MD; scalar_t__ T0C; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int,int) ;

void FUNC_2(void) {
   FUNC_1(0x41, 0xE, 0x0002, 0x0002);
   VAR_0->timer0 = 0;
   if (VAR_0->T1MD & 0x1)
   {
      if (VAR_0->timer0 == VAR_0->T0C)
         FUNC_0();
   }
}
