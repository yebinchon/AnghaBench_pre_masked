
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t UINT ;



UINT FUNC_0(wchar_t *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = 0;
 while (1)
 {
  if (VAR_0[VAR_1] == 0)
  {
   break;
  }
  VAR_1++;
 }

 return VAR_1;
}
