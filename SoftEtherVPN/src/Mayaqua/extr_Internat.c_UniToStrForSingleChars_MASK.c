
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t UINT ;


 size_t FUNC_0 (int*) ;

void FUNC_1(char *VAR_0, UINT VAR_1, wchar_t *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_0(VAR_2) + 1;VAR_3++)
 {
  wchar_t VAR_4 = VAR_2[VAR_3];
  char VAR_5;

  if (VAR_4 == 0)
  {
   VAR_5 = 0;
  }
  else if (VAR_4 <= 0xff)
  {
   VAR_5 = (char)VAR_4;
  }
  else
  {
   VAR_5 = ' ';
  }

  VAR_0[VAR_3] = VAR_5;
 }
}
