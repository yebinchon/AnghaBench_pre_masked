
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* uarb ;



__attribute__((used)) static int
FUNC_0(uarb VAR_0, int VAR_1, uarb VAR_2, int VAR_3)

{
   if (VAR_1 < VAR_3)
      return -1;

   if (VAR_1 > VAR_3)
      return 1;

   while (VAR_1-- > 0)
      if (VAR_0[VAR_1] < VAR_2[VAR_1])
         return -1;

      else if (VAR_0[VAR_1] > VAR_2[VAR_1])
         return 1;

   return 0;
}
