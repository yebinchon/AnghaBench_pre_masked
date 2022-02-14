
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int (* Write ) (TYPE_6__*,int ) ;} ;
struct TYPE_19__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_18__ {char* HubName; int Rpc; } ;
struct TYPE_17__ {int Online; TYPE_2__* ClientAuth; TYPE_1__* ClientOption; int Policy; int HubName; } ;
struct TYPE_16__ {int Username; int AuthType; } ;
struct TYPE_15__ {int RetryInterval; int MaxConnection; int UseEncrypt; int AdditionalConnectionInterval; int RequireBridgeRoutingMode; int NumRetry; int HubName; int Hostname; scalar_t__ Port; int AccountName; } ;
typedef TYPE_3__ RPC_CREATE_LINK ;
typedef TYPE_4__ PS ;
typedef int POLICY ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef TYPE_6__ CONSOLE ;
typedef int CLIENT_OPTION ;
typedef int CLIENT_AUTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int VAR_7 ;
 int * FUNC_8 (TYPE_6__*,char*,int *,TYPE_5__*,int) ;
 int FUNC_9 (char*,char**,scalar_t__*,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_3__*) ;
 int FUNC_11 (int ,int,char*) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_3__*,int) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_6__*,int ) ;

UINT FUNC_17(CONSOLE *VAR_8, char *VAR_9, wchar_t *VAR_10, void *VAR_11)
{
 LIST *VAR_12;
 PS *VAR_13 = (PS *)VAR_11;
 UINT VAR_14 = 0;
 RPC_CREATE_LINK VAR_15;
 char *VAR_16 = ((void*)0);
 UINT VAR_17 = 443;

 PARAM VAR_18[] =
 {

  {"[name]", &VAR_4, FUNC_15("CMD_CascadeCreate_Prompt_Name"), VAR_2, ((void*)0)},
  {"SERVER", &VAR_4, FUNC_15("CMD_CascadeCreate_Prompt_Server"), VAR_1, ((void*)0)},
  {"HUB", &VAR_4, FUNC_15("CMD_CascadeCreate_Prompt_Hub"), VAR_3, ((void*)0)},
  {"USERNAME", &VAR_4, FUNC_15("CMD_CascadeCreate_Prompt_Username"), VAR_2, ((void*)0)},
 };


 if (VAR_13->HubName == ((void*)0))
 {
  VAR_8->Write(VAR_8, FUNC_15("CMD_Hub_Not_Selected"));
  return VAR_5;
 }

 VAR_12 = FUNC_8(VAR_8, VAR_9, VAR_10, VAR_18, sizeof(VAR_18) / sizeof(VAR_18[0]));
 if (VAR_12 == ((void*)0))
 {
  return VAR_5;
 }

 FUNC_9(FUNC_6(VAR_12, "SERVER"), &VAR_16, &VAR_17, 443);

 FUNC_13(&VAR_15, sizeof(VAR_15));
 FUNC_11(VAR_15.HubName, sizeof(VAR_15.HubName), VAR_13->HubName);

 VAR_15.Online = 0;

 FUNC_1(&VAR_15.Policy, FUNC_5(), sizeof(POLICY));

 VAR_15.ClientOption = FUNC_14(sizeof(CLIENT_OPTION));
 FUNC_12(VAR_15.ClientOption->AccountName, sizeof(VAR_15.ClientOption->AccountName), FUNC_7(VAR_12, "[name]"));
 VAR_15.ClientOption->Port = VAR_17;
 FUNC_11(VAR_15.ClientOption->Hostname, sizeof(VAR_15.ClientOption->Hostname), VAR_16);
 FUNC_11(VAR_15.ClientOption->HubName, sizeof(VAR_15.ClientOption->HubName), FUNC_6(VAR_12, "HUB"));
 VAR_15.ClientOption->NumRetry = VAR_7;
 VAR_15.ClientOption->RetryInterval = 15;
 VAR_15.ClientOption->MaxConnection = 8;
 VAR_15.ClientOption->UseEncrypt = 1;
 VAR_15.ClientOption->AdditionalConnectionInterval = 1;
 VAR_15.ClientOption->RequireBridgeRoutingMode = 1;

 VAR_15.ClientAuth = FUNC_14(sizeof(CLIENT_AUTH));
 VAR_15.ClientAuth->AuthType = VAR_0;
 FUNC_11(VAR_15.ClientAuth->Username, sizeof(VAR_15.ClientAuth->Username), FUNC_6(VAR_12, "USERNAME"));

 FUNC_2(VAR_16);


 VAR_14 = FUNC_10(VAR_13->Rpc, &VAR_15);

 if (VAR_14 != VAR_6)
 {

  FUNC_0(VAR_8, VAR_14);
  FUNC_3(VAR_12);
  return VAR_14;
 }

 FUNC_4(&VAR_15);

 FUNC_3(VAR_12);

 return 0;
}
