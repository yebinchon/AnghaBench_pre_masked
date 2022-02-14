
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef scalar_t__ UINT ;
typedef int LIST ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 char* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,char*) ;

bool FUNC_10(wchar_t *VAR_1)
{
 LIST *VAR_2;
 wchar_t VAR_3[VAR_0];
 wchar_t VAR_4[VAR_0];
 UINT VAR_5;
 bool VAR_6 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_6(((void*)0));

 FUNC_9(VAR_3, sizeof(VAR_3), VAR_1);
 while (1)
 {
  wchar_t *VAR_7 = FUNC_1(VAR_3);

  FUNC_0(VAR_2, VAR_7);

  FUNC_2(VAR_4, sizeof(VAR_4), VAR_3);

  if (FUNC_8(VAR_4, VAR_3) == 0)
  {
   break;
  }

  FUNC_9(VAR_3, sizeof(VAR_3), VAR_4);
 }

 for (VAR_5 = 0;VAR_5 < FUNC_4(VAR_2);VAR_5++)
 {
  UINT VAR_8 = FUNC_4(VAR_2) - VAR_5 - 1;
  wchar_t *VAR_9 = FUNC_3(VAR_2, VAR_8);

  if (FUNC_8(VAR_9, L"\\") != 0 && FUNC_8(VAR_9, L"/") != 0)
  {
   VAR_6 = FUNC_5(VAR_9);
  }
 }

 FUNC_7(VAR_2);

 return VAR_6;
}
