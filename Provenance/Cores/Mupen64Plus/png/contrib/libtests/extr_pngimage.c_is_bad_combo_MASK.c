
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int**) ;
 int** VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
   unsigned int VAR_2;

   for (VAR_2=0; VAR_2<FUNC_0(VAR_0); ++VAR_2)
   {
      int VAR_3 = VAR_0[VAR_2][0];

      if ((VAR_3 & VAR_1) == VAR_3 &&
         (VAR_1 & VAR_0[VAR_2][1]) == 0)
         return 1;
   }

   return 0;
}
