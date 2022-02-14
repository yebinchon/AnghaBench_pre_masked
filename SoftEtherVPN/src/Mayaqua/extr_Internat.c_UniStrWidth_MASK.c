
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t UINT ;


 size_t FUNC_0 (int*) ;

UINT FUNC_1(wchar_t *VAR_0)
{
 UINT VAR_1, VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = 0;
 VAR_2 = FUNC_0(VAR_0);
 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  if (VAR_0[VAR_1] <= 255)
  {
   VAR_3++;
  }
  else
  {
   VAR_3 += 2;
  }
 }
 return VAR_3;
}
