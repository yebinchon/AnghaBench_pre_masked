
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_0, const char *VAR_1)
{
   if (!VAR_0 || !*VAR_0 || !VAR_1 || !*VAR_1)
      return -1;
   return FUNC_2(VAR_0, VAR_1) == 0 ? 0 : -1;

}
