
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, size_t VAR_1, const char **VAR_2, char VAR_3)
{
   const char *VAR_4 = *VAR_2;
   size_t VAR_5 = 0;
   char VAR_6;


   while (VAR_4[0] && FUNC_1((int)(VAR_4[0])))
      VAR_4++;

   while ((VAR_6 = *VAR_4) != '\0' &&
          VAR_6 != VAR_3 &&
          (FUNC_0((int)VAR_6) || (VAR_6 == '_') || (VAR_6 == '*')) &&
          VAR_5 != VAR_1-1)
   {
      VAR_0[VAR_5++] = VAR_6;
      VAR_4++;
   }


   if (VAR_6 == '\0' || VAR_6 == VAR_3)
   {
      if (VAR_6) VAR_4++;

      VAR_0[VAR_5] = '\0';
      *VAR_2 = VAR_4;
      return 1;
   }
   else
   {

      return 0;
   }
}
