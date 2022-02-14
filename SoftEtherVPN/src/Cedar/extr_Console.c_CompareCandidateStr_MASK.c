
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 char *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(char **)VAR_0;
 VAR_3 = *(char **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2[0] == '[' && VAR_3[0] != '[')
 {
  return -1;
 }
 else if (VAR_3[0] == '[' && VAR_2[0] != '[')
 {
  return 1;
 }

 return FUNC_0(VAR_2, VAR_3);
}
