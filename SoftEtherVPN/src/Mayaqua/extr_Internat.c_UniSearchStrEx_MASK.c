
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;

UINT FUNC_8(wchar_t *VAR_1, wchar_t *VAR_2, UINT VAR_3, bool VAR_4)
{
 UINT VAR_5, VAR_6;
 UINT VAR_7;
 wchar_t *VAR_8, *VAR_9;
 bool VAR_10;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }


 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5 <= VAR_3)
 {

  return VAR_0;
 }


 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6 == 0)
 {

  return VAR_0;
 }

 if (VAR_5 < VAR_6)
 {
  return VAR_0;
 }

 if (VAR_5 == VAR_6)
 {
  if (VAR_4)
  {
   if (FUNC_2(VAR_1, VAR_2) == 0)
   {
    return 0;
   }
   else
   {
    return VAR_0;
   }
  }
  else
  {
   if (FUNC_3(VAR_1, VAR_2) == 0)
   {
    return 0;
   }
   else
   {
    return VAR_0;
   }
  }
 }

 if (VAR_4)
 {
  VAR_8 = VAR_1;
  VAR_9 = VAR_2;
 }
 else
 {
  VAR_8 = FUNC_1((VAR_5 + 1) * sizeof(wchar_t));
  FUNC_4(VAR_8, (VAR_5 + 1) * sizeof(wchar_t), VAR_1);
  VAR_9 = FUNC_1((VAR_6 + 1) * sizeof(wchar_t));
  FUNC_4(VAR_9, (VAR_6 + 1) * sizeof(wchar_t), VAR_2);
  FUNC_6(VAR_8);
  FUNC_6(VAR_9);
 }


 VAR_10 = 0;
 for (VAR_7 = VAR_3;VAR_7 < (VAR_5 - VAR_6 + 1);VAR_7++)
 {

  if (!FUNC_7(&VAR_8[VAR_7], VAR_9, VAR_6))
  {

   VAR_10 = 1;
   break;
  }
 }

 if (VAR_4 == 0)
 {

  FUNC_0(VAR_9);
  FUNC_0(VAR_8);
 }

 if (VAR_10 == 0)
 {
  return VAR_0;
 }
 return VAR_7;
}
