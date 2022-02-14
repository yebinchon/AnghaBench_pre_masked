
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Vdp1Reset ) () ;} ;
struct TYPE_3__ {int MODR; scalar_t__ PTMR; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(void) {
   VAR_1->PTMR = 0;
   VAR_1->MODR = 0x1000;
   VAR_0->Vdp1Reset();
}
