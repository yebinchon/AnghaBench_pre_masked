
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;

void FUNC_1(char *VAR_0, char VAR_1)
{
   char *VAR_2 = ((void*)0);
   char *VAR_3 = ((void*)0);

   if (FUNC_0(VAR_0))
      return;

   VAR_2 = VAR_0;
   VAR_3 = VAR_0;

   while (*VAR_2 != '\0')
   {
      *VAR_3 = *VAR_2++;
      VAR_3 += (*VAR_3 != VAR_1) ? 1 : 0;
   }

   *VAR_3 = '\0';
}
