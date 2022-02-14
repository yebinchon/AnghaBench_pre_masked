
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 char FUNC_0 (char) ;

int FUNC_1(char *VAR_0, char *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
 {
  return 0;
 }
 if (VAR_0 == ((void*)0))
 {
  return 1;
 }
 if (VAR_1 == ((void*)0))
 {
  return -1;
 }


 VAR_2 = 0;
 while (1)
 {
  char VAR_3, VAR_4;
  VAR_3 = FUNC_0(VAR_0[VAR_2]);
  VAR_4 = FUNC_0(VAR_1[VAR_2]);
  if (VAR_3 > VAR_4)
  {
   return 1;
  }
  else if (VAR_3 < VAR_4)
  {
   return -1;
  }
  if (VAR_0[VAR_2] == 0 || VAR_1[VAR_2] == 0)
  {
   return 0;
  }
  VAR_2++;
 }
}
