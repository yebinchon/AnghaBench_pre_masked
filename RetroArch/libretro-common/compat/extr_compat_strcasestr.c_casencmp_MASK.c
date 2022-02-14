
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
   size_t VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      int VAR_4 = FUNC_0(VAR_0[VAR_3]);
      int VAR_5 = FUNC_0(VAR_1[VAR_3]);
      if (VAR_4 != VAR_5)
         return VAR_4 - VAR_5;
   }

   return 0;
}
