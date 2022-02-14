
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
struct TYPE_23__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef int UINT ;
struct TYPE_25__ {int (* Write ) (TYPE_3__*,char*) ;} ;
struct TYPE_24__ {int NumTokens; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,char**,char**) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 char* FUNC_3 (char,int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,char*,TYPE_2__*,int) ;
 TYPE_1__* FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,char*,char*,...) ;
 int FUNC_8 (TYPE_1__*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (TYPE_3__*,char*) ;
 int FUNC_13 (TYPE_3__*,char*) ;
 int FUNC_14 (TYPE_3__*,char*) ;
 int FUNC_15 (TYPE_3__*,char*) ;
 int FUNC_16 (TYPE_3__*,char*) ;
 int FUNC_17 (TYPE_3__*,char*) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 int FUNC_19 (TYPE_3__*,char*) ;
 int FUNC_20 (TYPE_3__*,char*) ;
 int FUNC_21 (TYPE_3__*,char*) ;

void FUNC_22(CONSOLE *VAR_1, char *VAR_2, TOKEN_LIST *VAR_3)
{
 wchar_t VAR_4[VAR_0];
 wchar_t *VAR_5;
 UINT VAR_6;
 wchar_t *VAR_7, *VAR_8, *VAR_9;
 UNI_TOKEN_LIST *VAR_10;
 UINT VAR_11;
 UINT VAR_12;
 char *VAR_13;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_11 = FUNC_2(VAR_1) - 2;

 VAR_6 = sizeof(wchar_t) * (VAR_11 + 32);
 VAR_5 = FUNC_4(VAR_6);

 FUNC_1(VAR_2, &VAR_7, &VAR_8, &VAR_9);

 VAR_13 = FUNC_3(' ', 2);


 FUNC_7(VAR_4, sizeof(VAR_4), FUNC_9("CMD_HELP_TITLE"), VAR_2);
 VAR_1->Write(VAR_1, VAR_4);
 VAR_1->Write(VAR_1, L"");


 VAR_1->Write(VAR_1, FUNC_9("CMD_HELP_DESCRIPTION"));
 VAR_10 = FUNC_6(VAR_7, VAR_11 - 2);
 for (VAR_12 = 0;VAR_12 < VAR_10->NumTokens;VAR_12++)
 {
  FUNC_7(VAR_5, VAR_6, L"%S%s", VAR_13, VAR_10->Token[VAR_12]);
  VAR_1->Write(VAR_1, VAR_5);
 }
 FUNC_8(VAR_10);
 VAR_1->Write(VAR_1, L"");


 VAR_1->Write(VAR_1, FUNC_9("CMD_HELP_HELP"));
 VAR_10 = FUNC_6(VAR_9, VAR_11 - 2);
 for (VAR_12 = 0;VAR_12 < VAR_10->NumTokens;VAR_12++)
 {
  FUNC_7(VAR_5, VAR_6, L"%S%s", VAR_13, VAR_10->Token[VAR_12]);
  VAR_1->Write(VAR_1, VAR_5);
 }
 FUNC_8(VAR_10);
 VAR_1->Write(VAR_1, L"");


 VAR_1->Write(VAR_1, FUNC_9("CMD_HELP_USAGE"));
 VAR_10 = FUNC_6(VAR_8, VAR_11 - 2);
 for (VAR_12 = 0;VAR_12 < VAR_10->NumTokens;VAR_12++)
 {
  FUNC_7(VAR_5, VAR_6, L"%S%s", VAR_13, VAR_10->Token[VAR_12]);
  VAR_1->Write(VAR_1, VAR_5);
 }
 FUNC_8(VAR_10);


 if (VAR_3->NumTokens >= 1)
 {
  VAR_1->Write(VAR_1, L"");
  VAR_1->Write(VAR_1, FUNC_9("CMD_HELP_ARGS"));
  FUNC_5(VAR_1, VAR_2, VAR_3, 2);
 }

 FUNC_0(VAR_13);

 FUNC_0(VAR_5);
}
