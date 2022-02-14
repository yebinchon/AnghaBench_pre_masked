
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_13__ {int RemoteClient; } ;
struct TYPE_12__ {TYPE_2__* ClientAuth; TYPE_1__* ClientOption; } ;
struct TYPE_11__ {int Username; int AuthType; } ;
struct TYPE_10__ {int RetryInterval; int MaxConnection; int UseEncrypt; int AdditionalConnectionInterval; int DeviceName; int NumRetry; int HubName; int Hostname; scalar_t__ Port; int AccountName; } ;
typedef TYPE_3__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;
typedef int CLIENT_OPTION ;
typedef int CLIENT_AUTH ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int VAR_7 ;
 int * FUNC_7 (int *,char*,int *,TYPE_5__*,int) ;
 int FUNC_8 (char*,char**,scalar_t__*,int) ;
 int FUNC_9 (int ,int,char*) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (TYPE_3__*,int) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (char*) ;

UINT FUNC_14(CONSOLE *VAR_8, char *VAR_9, wchar_t *VAR_10, void *VAR_11)
{
 LIST *VAR_12;
 PC *VAR_13 = (PC *)VAR_11;
 UINT VAR_14 = VAR_6;
 RPC_CLIENT_CREATE_ACCOUNT VAR_15;
 UINT VAR_16 = 443;
 char *VAR_17 = ((void*)0);

 PARAM VAR_18[] =
 {
  {"[name]", &VAR_4, FUNC_13("CMD_AccountCreate_Prompt_Name"), VAR_2, ((void*)0)},
  {"SERVER", &VAR_4, FUNC_13("CMD_AccountCreate_Prompt_Server"), VAR_1, ((void*)0)},
  {"HUB", &VAR_4, FUNC_13("CMD_AccountCreate_Prompt_Hub"), VAR_3, ((void*)0)},
  {"USERNAME", &VAR_4, FUNC_13("CMD_AccountCreate_Prompt_Username"), VAR_2, ((void*)0)},
  {"NICNAME", &VAR_4, FUNC_13("CMD_AccountCreate_Prompt_Nicname"), VAR_2, ((void*)0)},
 };


 VAR_12 = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_18, sizeof(VAR_18) / sizeof(VAR_18[0]));
 if (VAR_12 == ((void*)0))
 {
  return VAR_5;
 }

 FUNC_8(FUNC_5(VAR_12, "SERVER"), &VAR_17, &VAR_16, 443);


 FUNC_11(&VAR_15, sizeof(VAR_15));

 VAR_15.ClientOption = FUNC_12(sizeof(CLIENT_OPTION));
 FUNC_10(VAR_15.ClientOption->AccountName, sizeof(VAR_15.ClientOption->AccountName), FUNC_6(VAR_12, "[name]"));
 VAR_15.ClientOption->Port = VAR_16;
 FUNC_9(VAR_15.ClientOption->Hostname, sizeof(VAR_15.ClientOption->Hostname), VAR_17);
 FUNC_9(VAR_15.ClientOption->HubName, sizeof(VAR_15.ClientOption->HubName), FUNC_5(VAR_12, "HUB"));
 VAR_15.ClientOption->NumRetry = VAR_7;
 VAR_15.ClientOption->RetryInterval = 15;
 VAR_15.ClientOption->MaxConnection = 1;
 VAR_15.ClientOption->UseEncrypt = 1;
 VAR_15.ClientOption->AdditionalConnectionInterval = 1;
 FUNC_9(VAR_15.ClientOption->DeviceName, sizeof(VAR_15.ClientOption->DeviceName), FUNC_5(VAR_12, "NICNAME"));

 VAR_15.ClientAuth = FUNC_12(sizeof(CLIENT_AUTH));
 VAR_15.ClientAuth->AuthType = VAR_0;
 FUNC_9(VAR_15.ClientAuth->Username, sizeof(VAR_15.ClientAuth->Username), FUNC_5(VAR_12, "USERNAME"));

 FUNC_3(VAR_17);

 VAR_14 = FUNC_0(VAR_13->RemoteClient, &VAR_15);

 if (VAR_14 == VAR_6)
 {

 }

 FUNC_1(&VAR_15);

 if (VAR_14 != VAR_6)
 {

  FUNC_2(VAR_8, VAR_14);
 }


 FUNC_4(VAR_12);

 return VAR_14;
}
