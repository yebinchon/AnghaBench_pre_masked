
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*) ;
 size_t FUNC_3 (char const*) ;

void FUNC_4(char **VAR_0, const char *VAR_1)
{
   size_t VAR_2;
   char *VAR_3 = *VAR_0;

   if (!VAR_3)
   {
      VAR_3 = FUNC_2(VAR_1);
      *VAR_0 = VAR_3;
      return;
   }

   if (!VAR_1)
      return;

   VAR_2 = FUNC_3(VAR_3);
   VAR_3 = (char*)FUNC_0(VAR_3, VAR_2 + FUNC_3(VAR_1) + 1);

   if (!VAR_3)
      return;

   *VAR_0 = VAR_3;
   FUNC_1(VAR_3 + VAR_2, VAR_1);
}
