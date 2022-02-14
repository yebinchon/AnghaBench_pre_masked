
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RAMCTL; } ;
typedef TYPE_1__ Vdp2 ;



int FUNC_0(Vdp2* VAR_0, int VAR_1)
{
   if (((VAR_0->RAMCTL >> 0) & 3) == VAR_1)
      return 0;
   if (((VAR_0->RAMCTL >> 2) & 3) == VAR_1)
      return 0;
   if (((VAR_0->RAMCTL >> 4) & 3) == VAR_1)
      return 0;
   if (((VAR_0->RAMCTL >> 6) & 3) == VAR_1)
      return 0;

   return 1;
}
