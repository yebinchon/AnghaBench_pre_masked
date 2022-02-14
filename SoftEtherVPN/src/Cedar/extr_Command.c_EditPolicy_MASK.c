
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int pack_name ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {int (* Write ) (TYPE_4__*,int *) ;} ;
struct TYPE_13__ {TYPE_1__** values; } ;
struct TYPE_12__ {int TypeInt; int AllowZero; scalar_t__ MinValue; scalar_t__ MaxValue; } ;
struct TYPE_11__ {int IntValue; } ;
typedef TYPE_2__ POLICY_ITEM ;
typedef int POLICY ;
typedef int PACK ;
typedef TYPE_3__ ELEMENT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,char*,int ) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int *,int,int ,char*,...) ;
 int VAR_2 ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_4__*,int *) ;
 int FUNC_17 (TYPE_4__*,int *) ;
 int FUNC_18 (TYPE_4__*,int *) ;

bool FUNC_19(CONSOLE *VAR_3, POLICY *VAR_4, char *VAR_5, char *VAR_6, bool VAR_7)
{
 PACK *VAR_8;
 ELEMENT *VAR_9;
 POLICY_ITEM *VAR_10;
 UINT VAR_11;
 wchar_t VAR_12[VAR_1];
 wchar_t VAR_13[VAR_1];
 char VAR_14[128];

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }

 VAR_8 = FUNC_6();

 FUNC_7(VAR_8, VAR_4);

 FUNC_0(VAR_14, sizeof(VAR_14), "policy:%s", FUNC_8(FUNC_10(VAR_5)));

 if ((VAR_9 = FUNC_2(VAR_8, VAR_14, VAR_2)) == ((void*)0) || (VAR_11 = FUNC_10(VAR_5)) == VAR_0)
 {
  FUNC_13(VAR_12, sizeof(VAR_12), FUNC_15("CMD_CascadePolicySet_Invalid_Name"), VAR_5);
  VAR_3->Write(VAR_3, VAR_12);
  FUNC_1(VAR_8);
  return 0;
 }

 if (VAR_7 && (FUNC_9(VAR_11) == 0))
 {
  FUNC_13(VAR_12, sizeof(VAR_12), FUNC_15("CMD_CascadePolicySet_Invalid_Name_For_Cascade"), VAR_5);
  VAR_3->Write(VAR_3, VAR_12);
  FUNC_1(VAR_8);
  return 0;
 }

 VAR_10 = FUNC_3(VAR_11);

 if (VAR_10->TypeInt == 0)
 {

  VAR_9->values[0]->IntValue = (
   FUNC_11(VAR_6, "y") || FUNC_11(VAR_6, "t") ||
   FUNC_12(VAR_6) != 0) ? 1 : 0;
 }
 else
 {
  UINT VAR_15 = FUNC_12(VAR_6);
  bool VAR_16 = 1;


  FUNC_4(VAR_12, sizeof(VAR_12), VAR_11);

  if (VAR_10->AllowZero == 0)
  {
   if (VAR_15 == 0)
   {
    VAR_16 = 0;
   }
  }

  if (VAR_15 != 0 && (VAR_15 < VAR_10->MinValue || VAR_15 > VAR_10->MaxValue))
  {
   VAR_16 = 0;
  }

  if (VAR_16 == 0)
  {
   FUNC_13(VAR_13, sizeof(VAR_13), FUNC_15("CMD_CascadePolicySet_Invalid_Range"), FUNC_8(VAR_11), VAR_12);
   VAR_3->Write(VAR_3, VAR_13);
   FUNC_1(VAR_8);
   return 0;
  }

  VAR_9->values[0]->IntValue = VAR_15;
 }

 FUNC_14(VAR_4, sizeof(POLICY));

 FUNC_5(VAR_4, VAR_8);

 FUNC_1(VAR_8);

 return 1;
}
