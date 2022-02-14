
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char) ;

char *
FUNC_4 (const char *VAR_0)
{
 char *VAR_1, *VAR_2;

 if (VAR_0 == (const char *) ((void*)0))
  return (char *) ((void*)0);

 VAR_1 = FUNC_3 (VAR_0, '/');
 if (VAR_1 == (const char *) ((void*)0))
  return FUNC_2 (".");

 while (VAR_1 > VAR_0 && *VAR_1 == '/')
  VAR_1--;
 VAR_2 = FUNC_0 (VAR_0, VAR_1 - VAR_0 + 1);
 if (VAR_2[0] == 0) {
  FUNC_1 (VAR_2);
  return FUNC_2 ("/");
 } else
  return VAR_2;
}
