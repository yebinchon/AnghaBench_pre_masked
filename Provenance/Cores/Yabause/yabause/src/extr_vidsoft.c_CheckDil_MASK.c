
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FBCR; } ;
typedef TYPE_1__ Vdp1 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, Vdp1 * VAR_2)
{
   int VAR_3 = (VAR_2->FBCR >> 2) & 1;

   if (VAR_0 == 2)
   {
      if (VAR_3)
      {
         if ((VAR_1 & 1) == 0)
            return 1;
      }
      else
      {
         if ((VAR_1 & 1))
            return 1;
      }
   }

   return 0;
}
