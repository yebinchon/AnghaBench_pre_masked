
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int *) ;} ;
struct TYPE_15__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_14__ {int Rpc; } ;
struct TYPE_13__ {int StrValue; scalar_t__ IntValue; } ;
typedef TYPE_1__ RPC_TEST ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int *,int,int *,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;

UINT FUNC_12(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8;

 PARAM VAR_9[] =
 {

  {"[id]", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"ARG", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_9, sizeof(VAR_9) / sizeof(VAR_9[0]));
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_8 = FUNC_2(VAR_6, "[id]");

 if (1)
 {
  RPC_TEST VAR_10;
  UINT VAR_11;

  VAR_2->Write(VAR_2, FUNC_9("CMD_Debug_Msg1"));

  FUNC_8(&VAR_10, sizeof(VAR_10));

  VAR_10.IntValue = VAR_8;
  FUNC_6(VAR_10.StrValue, sizeof(VAR_10.StrValue), FUNC_3(VAR_6, "ARG"));

  VAR_11 = FUNC_5(VAR_7->Rpc, &VAR_10);

  if (VAR_11 != VAR_1)
  {

   FUNC_0(VAR_2, VAR_11);
   FUNC_1(VAR_6);
   return VAR_11;
  }
  else
  {
   wchar_t VAR_12[sizeof(VAR_10.StrValue)];

   FUNC_7(VAR_12, sizeof(VAR_12), FUNC_9("CMD_Debug_Msg2"), VAR_10.StrValue);
   VAR_2->Write(VAR_2, VAR_12);
  }
 }

 FUNC_1(VAR_6);

 return 0;
}
