
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int value_str ;
typedef int tmp2 ;
typedef int name ;
typedef scalar_t__ UINT ;
typedef int POLICY ;
typedef int PACK ;
typedef int CT ;
typedef int CONSOLE ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*,int,char*,scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (char*) ;

void FUNC_16(CONSOLE *VAR_0, POLICY *VAR_1, bool VAR_2)
{
 UINT VAR_3;
 CT *VAR_4;
 PACK *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_4();
 FUNC_3(VAR_4, FUNC_15("CMD_PolicyList_Column_1"), 0);
 FUNC_3(VAR_4, FUNC_15("CMD_PolicyList_Column_2"), 0);
 FUNC_3(VAR_4, FUNC_15("CMD_PolicyList_Column_3"), 0);

 VAR_5 = FUNC_9();
 FUNC_10(VAR_5, VAR_1);


 for (VAR_3 = 0; VAR_3 < FUNC_14();VAR_3++)
 {
  char VAR_6[64];
  wchar_t *VAR_7;

  if (VAR_2 == 0 || FUNC_13(VAR_3))
  {
   wchar_t VAR_8[256];
   UINT VAR_9;
   char VAR_10[256];

   FUNC_5(VAR_10, sizeof(VAR_10), "policy:%s", FUNC_12(VAR_3));
   VAR_9 = FUNC_11(VAR_5, VAR_10);

   VAR_7 = FUNC_0(FUNC_12(VAR_3));

   FUNC_6(VAR_8, sizeof(VAR_8),
    VAR_3, VAR_9);

   FUNC_5(VAR_6, sizeof(VAR_6), "POL_%u", VAR_3);
   FUNC_2(VAR_4, VAR_7, FUNC_15(VAR_6), VAR_8);

   FUNC_7(VAR_7);
  }
 }

 FUNC_8(VAR_5);

 FUNC_1(VAR_4, VAR_0);
}
