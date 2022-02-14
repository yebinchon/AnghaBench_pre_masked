
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * SMEM; } ;
struct TYPE_3__ {int* OREG; int * IREG; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(void) {
   int VAR_2;

   for(VAR_2 = 0;VAR_2 < 4;VAR_2++)
      VAR_0->SMEM[VAR_2] = VAR_1->IREG[VAR_2];

   VAR_1->OREG[31] = 0x17;
}
