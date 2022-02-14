
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char**,int ) ;

int FUNC_1(char **VAR_0, int *VAR_1, int *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(*VAR_0, &VAR_3, 0);
 if ((*VAR_3 != '\0') || (VAR_3 == *VAR_0))
  return -1;

 *VAR_0 = VAR_3;
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_4;
 return VAR_4;
}
