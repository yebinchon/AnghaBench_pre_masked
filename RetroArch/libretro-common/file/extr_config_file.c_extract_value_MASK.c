
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,char**) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, bool VAR_1)
{
   char *VAR_2 = ((void*)0);
   char *VAR_3 = ((void*)0);

   if (VAR_1)
   {
      while (FUNC_0((int)*VAR_0))
         VAR_0++;



      if (*VAR_0 != '=')
         return ((void*)0);

      VAR_0++;
   }

   while (FUNC_0((int)*VAR_0))
      VAR_0++;


   if (*VAR_0 == '"')
   {
      VAR_0++;
      if (*VAR_0 == '"')
         return ((void*)0);
      VAR_3 = FUNC_2(VAR_0, "\"", &VAR_2);
   }

   else if (*VAR_0 != '\0')
      VAR_3 = FUNC_2(VAR_0, " \n\t\f\r\v", &VAR_2);

   if (VAR_3 && *VAR_3)
      return FUNC_1(VAR_3);
   return ((void*)0);
}
