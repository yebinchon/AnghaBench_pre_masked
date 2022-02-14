
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ USHORT ;
typedef size_t UINT ;


 scalar_t__* FUNC_0 (size_t) ;

wchar_t *FUNC_1(USHORT *VAR_0)
{
 wchar_t *VAR_1;
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = 0;
 while (1)
 {
  if (VAR_0[VAR_2] == 0)
  {
   break;
  }
  VAR_2++;
 }

 VAR_1 = FUNC_0((VAR_2 + 1) * sizeof(wchar_t));
 for (VAR_3 = 0;VAR_3 < VAR_2 + 1;VAR_3++)
 {
  VAR_1[VAR_3] = (wchar_t)VAR_0[VAR_3];
 }

 return VAR_1;
}
