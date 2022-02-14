
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SPCTL; int WCTLD; int WCTLC; int WCTLB; int WCTLA; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

int FUNC_1()
{

   if ((VAR_0->SPCTL & (1 << 4)) == 0)
      return 1;


   if (FUNC_0(VAR_0->WCTLA) ||
      FUNC_0(VAR_0->WCTLB) ||
      FUNC_0(VAR_0->WCTLC) ||
      FUNC_0(VAR_0->WCTLD))
   {

      return 0;
   }

   return 1;
}
