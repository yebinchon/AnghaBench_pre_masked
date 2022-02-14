
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int RAMCTL; } ;
typedef TYPE_1__ Vdp2 ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(Vdp2* VAR_0)
{
   if (((VAR_0->RAMCTL >> 8) & 3) == 3)
   {


      if (FUNC_0(VAR_0, 1))
         return 1;
   }

   return 0;
}
