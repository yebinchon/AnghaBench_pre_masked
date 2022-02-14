
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;

int
FUNC_2(int VAR_1, char **VAR_2)
{
   int VAR_3;
   int VAR_4 = 0;

   for (VAR_3=1; VAR_3<VAR_1; ++VAR_3)
   {
      if (FUNC_1(VAR_2[VAR_3], "-q") == 0)
         VAR_0 = 0;

      else if (FUNC_0(VAR_2[VAR_3]))
         VAR_4 = 1;
   }


   return VAR_4 == 0;
}
