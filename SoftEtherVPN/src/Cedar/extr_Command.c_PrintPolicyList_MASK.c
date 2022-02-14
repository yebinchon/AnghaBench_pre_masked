
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


typedef char wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int policy_name ;
typedef int name2 ;
typedef int name1 ;
typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int (* Write ) (TYPE_1__*,char*) ;} ;
struct TYPE_21__ {int DefaultValue; } ;
typedef int CT ;
typedef TYPE_1__ CONSOLE ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*,int,char*,scalar_t__) ;
 int FUNC_6 (char*,int,scalar_t__,int ) ;
 int FUNC_7 (char*) ;
 TYPE_19__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_1 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (char*,int,int ) ;
 int FUNC_15 (char*,int,char*,char*) ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (TYPE_1__*,char*) ;
 int FUNC_18 (TYPE_1__*,char*) ;
 int FUNC_19 (TYPE_1__*,char*) ;
 int FUNC_20 (TYPE_1__*,char*) ;
 int FUNC_21 (TYPE_1__*,char*) ;
 int FUNC_22 (TYPE_1__*,char*) ;
 int FUNC_23 (TYPE_1__*,char*) ;
 int FUNC_24 (TYPE_1__*,char*) ;
 int FUNC_25 (TYPE_1__*,char*) ;
 int FUNC_26 (TYPE_1__*,char*) ;
 int FUNC_27 (TYPE_1__*,char*) ;
 int FUNC_28 (TYPE_1__*,char*) ;
 int FUNC_29 (TYPE_1__*,char*) ;
 int FUNC_30 (TYPE_1__*,char*) ;
 int FUNC_31 (TYPE_1__*,char*) ;
 int FUNC_32 (TYPE_1__*,char*) ;

void FUNC_33(CONSOLE *VAR_2, char *VAR_3)
{
 UINT VAR_4;

 if (VAR_2 == ((void*)0))
 {
  return;
 }
 if (FUNC_10(VAR_3))
 {
  VAR_3 = ((void*)0);
 }

 if (VAR_3 != ((void*)0))
 {
  VAR_4 = FUNC_13(VAR_3);
  if (VAR_4 == VAR_0)
  {

   VAR_2->Write(VAR_2, FUNC_16("CMD_PolicyList_Invalid_Name"));
  }
  else
  {
   wchar_t VAR_5[VAR_1];
   wchar_t VAR_6[VAR_1];
   char VAR_7[64], VAR_8[64];
   wchar_t *VAR_9, *VAR_10;
   wchar_t VAR_11[VAR_1];

   FUNC_5(VAR_7, sizeof(VAR_7), "POL_%u", VAR_4);
   FUNC_5(VAR_8, sizeof(VAR_8), "POL_EX_%u", VAR_4);

   VAR_9 = FUNC_16(VAR_7);
   VAR_10 = FUNC_16(VAR_8);

   FUNC_14(VAR_11, sizeof(VAR_11), FUNC_11(VAR_4));


   VAR_2->Write(VAR_2, FUNC_16("CMD_PolicyList_Help_1"));
   FUNC_15(VAR_6, sizeof(VAR_6), L" %s", VAR_11);
   VAR_2->Write(VAR_2, VAR_6);
   VAR_2->Write(VAR_2, L"");


   VAR_2->Write(VAR_2, FUNC_16("CMD_PolicyList_Help_2"));
   FUNC_15(VAR_6, sizeof(VAR_6), L" %s", VAR_9);
   VAR_2->Write(VAR_2, VAR_6);
   VAR_2->Write(VAR_2, L"");


   FUNC_9(VAR_5, sizeof(VAR_5), VAR_4);
   VAR_2->Write(VAR_2, FUNC_16("CMD_PolicyList_Help_3"));
   FUNC_15(VAR_6, sizeof(VAR_6), L" %s", VAR_5);
   VAR_2->Write(VAR_2, VAR_6);
   VAR_2->Write(VAR_2, L"");


   FUNC_6(VAR_5, sizeof(VAR_5), VAR_4, FUNC_8(VAR_4)->DefaultValue);
   VAR_2->Write(VAR_2, FUNC_16("CMD_PolicyList_Help_4"));
   FUNC_15(VAR_6, sizeof(VAR_6), L" %s", VAR_5);
   VAR_2->Write(VAR_2, VAR_6);
   VAR_2->Write(VAR_2, L"");


   VAR_2->Write(VAR_2, FUNC_16("CMD_PolicyList_Help_5"));
   VAR_2->Write(VAR_2, VAR_10);
   VAR_2->Write(VAR_2, L"");
  }
 }
 else
 {
  UINT VAR_12;
  CT *VAR_13 = FUNC_4();
  FUNC_3(VAR_13, FUNC_16("CMD_PolicyList_Column_1"), 0);
  FUNC_3(VAR_13, FUNC_16("CMD_PolicyList_Column_2"), 0);


  for (VAR_12 = 0; VAR_12 < FUNC_12();VAR_12++)
  {
   char VAR_14[64];
   wchar_t *VAR_15;

   VAR_15 = FUNC_0(FUNC_11(VAR_12));

   FUNC_5(VAR_14, sizeof(VAR_14), "POL_%u", VAR_12);
   FUNC_2(VAR_13, VAR_15, FUNC_16(VAR_14));

   FUNC_7(VAR_15);
  }

  FUNC_1(VAR_13, VAR_2);
 }
}
