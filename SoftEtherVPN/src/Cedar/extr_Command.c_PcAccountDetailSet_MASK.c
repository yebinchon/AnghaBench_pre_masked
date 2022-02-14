
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {char* member_0; int member_1; int member_2; } ;
struct TYPE_15__ {char* member_0; TYPE_6__* member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_14__ {int RemoteClient; } ;
struct TYPE_13__ {int StartupAccount; int ServerCert; TYPE_1__* ClientOption; int ClientAuth; int CheckServerCert; int AccountName; } ;
struct TYPE_12__ {void* NoUdpAcceleration; void* DisableQoS; void* NoRoutingTracking; void* RequireMonitorMode; void* RequireBridgeRoutingMode; void* HalfConnection; void* ConnectionDisconnectSpan; void* AdditionalConnectionInterval; void* MaxConnection; } ;
typedef TYPE_2__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;
typedef TYPE_6__ CMD_EVAL_MIN_MAX ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,char*) ;
 int * FUNC_8 (int *,char*,int *,TYPE_5__*,int) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PC *VAR_10 = (PC *)VAR_8;
 UINT VAR_11 = VAR_4;
 RPC_CLIENT_GET_ACCOUNT VAR_12;
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
  {"[name]", VAR_2, FUNC_11("CMD_AccountCreate_Prompt_Name"), *VAR_1, ((void*)0)},
  {"MAXTCP", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_MaxTcp"), *VAR_0, &VAR_13},
  {"INTERVAL", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_Interval"), *VAR_0, &VAR_14},
  {"TTL", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_TTL"), ((void*)0), ((void*)0)},
  {"HALF", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_HALF"), ((void*)0), ((void*)0)},
  {"BRIDGE", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_BRIDGE"), ((void*)0), ((void*)0)},
  {"MONITOR", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_MONITOR"), ((void*)0), ((void*)0)},
  {"NOTRACK", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_NOTRACK"), ((void*)0), ((void*)0)},
  {"NOQOS", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_NOQOS"), ((void*)0), ((void*)0)},
  {"DISABLEUDP", VAR_2, FUNC_11("CMD_AccountDetailSet_Prompt_DISABLEUDP"), ((void*)0), ((void*)0)},
 };


 VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_10(&VAR_12, sizeof(VAR_12));

 FUNC_9(VAR_12.AccountName, sizeof(VAR_12.AccountName), FUNC_6(VAR_9, "[name]"));

 VAR_11 = FUNC_0(VAR_10->RemoteClient, &VAR_12);

 if (VAR_11 == VAR_4)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_16;

  VAR_12.ClientOption->MaxConnection = FUNC_5(VAR_9, "MAXTCP");
  VAR_12.ClientOption->AdditionalConnectionInterval = FUNC_5(VAR_9, "INTERVAL");
  VAR_12.ClientOption->ConnectionDisconnectSpan = FUNC_5(VAR_9, "TTL");
  VAR_12.ClientOption->HalfConnection = FUNC_7(VAR_9, "HALF");
  VAR_12.ClientOption->RequireBridgeRoutingMode = FUNC_7(VAR_9, "BRIDGE");
  VAR_12.ClientOption->RequireMonitorMode = FUNC_7(VAR_9, "MONITOR");
  VAR_12.ClientOption->NoRoutingTracking = FUNC_7(VAR_9, "NOTRACK");
  VAR_12.ClientOption->DisableQoS = FUNC_7(VAR_9, "NOQOS");
  VAR_12.ClientOption->NoUdpAcceleration = FUNC_7(VAR_9, "DISABLEUDP");

  FUNC_10(&VAR_16, sizeof(VAR_16));
  VAR_16.CheckServerCert = VAR_12.CheckServerCert;
  VAR_16.ClientAuth = VAR_12.ClientAuth;
  VAR_16.ClientOption = VAR_12.ClientOption;
  VAR_16.ServerCert = VAR_12.ServerCert;
  VAR_16.StartupAccount = VAR_12.StartupAccount;

  VAR_11 = FUNC_1(VAR_10->RemoteClient, &VAR_16);
 }

 if (VAR_11 != VAR_4)
 {

  FUNC_3(VAR_5, VAR_11);
 }

 FUNC_2(&VAR_12);


 FUNC_4(VAR_9);

 return VAR_11;
}
