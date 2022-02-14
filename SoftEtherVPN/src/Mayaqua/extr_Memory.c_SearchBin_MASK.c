
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int UCHAR ;


 scalar_t__ FUNC_0 (int *,void*,scalar_t__) ;
 scalar_t__ VAR_0 ;

UINT FUNC_1(void *VAR_1, UINT VAR_2, UINT VAR_3, void *VAR_4, UINT VAR_5)
{
 UINT VAR_6;

 if (VAR_1 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0 || VAR_3 == 0 ||
  (VAR_2 >= VAR_3) || (VAR_2 + VAR_5 > VAR_3))
 {
  return VAR_0;
 }

 for (VAR_6 = VAR_2;VAR_6 < (VAR_3 - VAR_5 + 1);VAR_6++)
 {
  UCHAR *VAR_7 = ((UCHAR *)VAR_1) + VAR_6;

  if (FUNC_0(VAR_7, VAR_4, VAR_5) == 0)
  {
   return VAR_6;
  }
 }

 return VAR_0;
}
