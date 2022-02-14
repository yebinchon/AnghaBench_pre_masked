
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, bool VAR_1)
{
   char *VAR_2 = FUNC_0(VAR_0);

   if (VAR_2 == ((void*)0))
      return VAR_1;

   if (VAR_2[0] == 't' || VAR_2[0] == 'T' || VAR_2[0] == '1')
      return 1;

   return 0;
}
