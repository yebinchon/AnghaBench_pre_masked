
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, char **VAR_1)
{
  int VAR_2 = FUNC_1(VAR_0);
  char *VAR_3 = *VAR_1;

  if (FUNC_2(VAR_0, VAR_3, VAR_2) != 0)
    return 0;
  VAR_3 = FUNC_0(VAR_3 + VAR_2);
  if (*VAR_3 != '=')
    return 0;

  *VAR_1 = FUNC_0(VAR_3 + 1);
  return 1;
}
