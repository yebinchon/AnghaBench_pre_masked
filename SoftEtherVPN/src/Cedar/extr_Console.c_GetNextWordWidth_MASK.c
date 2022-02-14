
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t UINT ;


 int FUNC_0 (scalar_t__) ;

UINT FUNC_1(wchar_t *VAR_0)
{
 UINT VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = 0;

 for (VAR_1 = 0;;VAR_1++)
 {
  wchar_t VAR_3 = VAR_0[VAR_1];

  if (VAR_3 == 0)
  {
   break;
  }

  if (FUNC_0(VAR_3) == 0)
  {
   break;
  }

  VAR_2++;
 }

 return VAR_2;
}
