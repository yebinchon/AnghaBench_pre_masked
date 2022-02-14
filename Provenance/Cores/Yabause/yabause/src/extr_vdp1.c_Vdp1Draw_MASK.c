
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* Vdp1DrawEnd ) () ;int (* Vdp1DrawStart ) () ;} ;
struct TYPE_5__ {int disptoggle; } ;
struct TYPE_4__ {int addr; int EDSR; int COPR; } ;


 int FUNC_0 () ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void)
{
   if (!VAR_1.disptoggle)
   {
      FUNC_1();
      return;
   }

   VAR_2->addr = 0;




   VAR_2->EDSR >>= 1;

   VAR_2->COPR = 0;

   VAR_0->Vdp1DrawStart();


   VAR_2->EDSR |= 2;
   VAR_2->COPR = VAR_2->addr >> 3;
   FUNC_0();
   VAR_0->Vdp1DrawEnd();
}
