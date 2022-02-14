
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(const char **VAR_0, size_t VAR_1)
{
   bool VAR_2 = 0;
   unsigned VAR_3;

   if (!VAR_0 || !*VAR_0 || !**VAR_0)
      return 0;

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if ((*VAR_0)[VAR_3] == ' ' || (*VAR_0)[VAR_3] == '\t')
         continue;

      *VAR_0 += VAR_3;
      VAR_2 = 1;
      break;
   }

   if (VAR_2)
      return 1;

   return 0;
}
