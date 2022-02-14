
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int tmp ;
typedef int filename ;
typedef int * HWND ;


 int FUNC_0 (char*,int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,char*,char*,int) ;
 scalar_t__ FUNC_2 (int *,char*,int*) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,int,char*,char*,char*,char*) ;

bool FUNC_5(HWND VAR_8, wchar_t *VAR_9)
{
 wchar_t VAR_10[2048];
 bool VAR_11 = 1;
 wchar_t *VAR_12 = FUNC_3(VAR_1+VAR_7);
 wchar_t *VAR_13 = FUNC_3(VAR_2+VAR_7);

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_2(VAR_8, VAR_9, &VAR_11))
 {
  if (VAR_11 == 0)
  {

   return 1;
  }
  else
  {
   wchar_t VAR_14[VAR_3];

   FUNC_0(VAR_14, sizeof(VAR_14), VAR_9);


   FUNC_4(VAR_10, sizeof(VAR_10) / 2, VAR_12,
    VAR_14, VAR_14, VAR_14);

   if (FUNC_1(VAR_8, VAR_10, VAR_13,
    VAR_6 | VAR_4 | VAR_5) == VAR_0)
   {
    return 1;
   }

   return 0;
  }
 }
 else
 {

  return 0;
 }
}
