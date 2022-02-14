
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int const FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(double VAR_0, int VAR_1, int VAR_2)
{






   const unsigned int VAR_3 = (1U << VAR_1) -1;




   if (VAR_0 <= 0)
      VAR_0 = 0;

   else if (VAR_0 >= 1)
      VAR_0 = 1;

   VAR_0 *= VAR_3;
   if (VAR_2) VAR_0 += .5;
   return FUNC_0(VAR_0)/VAR_3;
}
