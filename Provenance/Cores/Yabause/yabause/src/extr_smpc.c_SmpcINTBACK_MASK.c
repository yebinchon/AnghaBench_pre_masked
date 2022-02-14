
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int intback; int intbackIreg0; int firstPeri; } ;
struct TYPE_3__ {int SF; int* IREG; int SR; int* OREG; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(void) {
   VAR_1->SF = 1;

   if (VAR_0->intback) {
      FUNC_1();
      FUNC_0();
      return;
   }



   if ((VAR_0->intbackIreg0 = (VAR_1->IREG[0] & 1))) {

      VAR_0->firstPeri = 1;
      VAR_0->intback = (VAR_1->IREG[1] & 0x8) >> 3;
      FUNC_2();
      VAR_1->SR = 0x4F | (VAR_0->intback << 5);
      FUNC_0();
      return;
   }
   if (VAR_1->IREG[1] & 0x8) {
      VAR_0->firstPeri = 1;
      VAR_0->intback = 1;
      VAR_1->SR = 0x40;
      FUNC_1();
      VAR_1->OREG[31] = 0x10;
      FUNC_0();
      return;
   }
}
