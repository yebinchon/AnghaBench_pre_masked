
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_1 = FUNC_1(VAR_0, "TAOS ");
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1, '\r');
 if (!VAR_2)
  return ((void*)0);
 *VAR_2 = '\0';

 return VAR_1;
}
