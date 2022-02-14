
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_21__ {void* DisableQoS; void* HalfConnection; void* ConnectionDisconnectSpan; void* AdditionalConnectionInterval; void* MaxConnection; int AccountName; } ;
struct TYPE_20__ {char* member_0; int member_1; int member_2; } ;
struct TYPE_19__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_18__ {char* member_0; TYPE_5__* member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int Rpc; int * HubName; } ;
struct TYPE_16__ {TYPE_7__* ClientOption; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ CMD_EVAL_MIN_MAX ;
typedef int CLIENT_OPTION ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,char*) ;
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 TYPE_7__* FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_4__*,int ) ;

UINT FUNC_15(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_CREATE_LINK VAR_12;
 CMD_EVAL_MIN_MAX VAR_13 =
 {
  "CMD_CascadeDetailSet_Eval_MaxTcp", 1, 32
 };
 CMD_EVAL_MIN_MAX VAR_14 =
 {
  "CMD_CascadeDetailSet_Eval_Interval", 1, 4294967295UL
 };

 PARAM VAR_15[] =
 {

  {"[name]", VAR_2, FUNC_13("CMD_CascadeCreate_Prompt_Name"), *VAR_1, ((void*)0)},
  {"MAXTCP", VAR_2, FUNC_13("CMD_CascadeDetailSet_Prompt_MaxTcp"), *VAR_0, &VAR_13},
  {"INTERVAL", VAR_2, FUNC_13("CMD_CascadeDetailSet_Prompt_Interval"), *VAR_0, &VAR_14},
  {"TTL", VAR_2, FUNC_13("CMD_CascadeDetailSet_Prompt_TTL"), ((void*)0), ((void*)0)},
  {"HALF", VAR_2, FUNC_13("CMD_CascadeDetailSet_Prompt_HALF"), ((void*)0), ((void*)0)},
  {"NOQOS", VAR_2, FUNC_13("CMD_AccountDetailSet_Prompt_NOQOS"), ((void*)0), ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_13("CMD_Hub_Not_Selected"));
  return VAR_3;
 }

 VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_11(&VAR_12, sizeof(VAR_12));
 FUNC_9(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);
 VAR_12.ClientOption = FUNC_12(sizeof(CLIENT_OPTION));
 FUNC_10(VAR_12.ClientOption->AccountName, sizeof(VAR_12.ClientOption->AccountName), FUNC_4(VAR_9, "[name]"));


 VAR_11 = FUNC_7(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_4)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }
 else
 {

  VAR_12.ClientOption->MaxConnection = FUNC_3(VAR_9, "MAXTCP");
  VAR_12.ClientOption->AdditionalConnectionInterval = FUNC_3(VAR_9, "INTERVAL");
  VAR_12.ClientOption->ConnectionDisconnectSpan = FUNC_3(VAR_9, "TTL");
  VAR_12.ClientOption->HalfConnection = FUNC_5(VAR_9, "HALF");
  VAR_12.ClientOption->DisableQoS = FUNC_5(VAR_9, "NOQOS");

  VAR_11 = FUNC_8(VAR_10->Rpc, &VAR_12);
  if (VAR_11 != VAR_4)
  {

   FUNC_0(VAR_5, VAR_11);
   FUNC_1(VAR_9);
   return VAR_11;
  }

  FUNC_2(&VAR_12);
 }

 FUNC_1(VAR_9);

 return 0;
}
