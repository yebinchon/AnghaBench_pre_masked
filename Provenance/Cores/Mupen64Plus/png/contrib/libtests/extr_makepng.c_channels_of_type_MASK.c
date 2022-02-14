
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int
FUNC_0(int VAR_3)
{
   if (VAR_3 & VAR_2)
      return 1;

   else
   {
      int VAR_4 = 1;

      if (VAR_3 & VAR_1)
         VAR_4 = 3;

      if (VAR_3 & VAR_0)
         return VAR_4 + 1;

      else
         return VAR_4;
   }
}
