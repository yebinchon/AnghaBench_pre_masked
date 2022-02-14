
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
   char *VAR_3;
   FUNC_0(VAR_0, VAR_1, VAR_2 - 1);
   VAR_0[VAR_2 - 1] = '\0';

   VAR_3 = FUNC_1(VAR_0, '/');
   if (!VAR_3)
      VAR_3 = FUNC_1(VAR_0, '\\');

   if (VAR_3)
      *VAR_3 = '\0';
   else
      VAR_0[0] = '\0';
}
