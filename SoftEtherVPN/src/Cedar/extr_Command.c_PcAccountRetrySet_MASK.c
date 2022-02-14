
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
struct TYPE_16__ {char* member_0; int member_1; unsigned long member_2; } ;
struct TYPE_15__ {char* member_0; TYPE_6__* member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_14__ {int RemoteClient; } ;
struct TYPE_13__ {int StartupAccount; int ServerCert; TYPE_1__* ClientOption; int ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
struct TYPE_12__ {scalar_t__ RetryInterval; scalar_t__ NumRetry; } ;
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ VAR_5 ;
 int * FUNC_7 (int *,char*,int *,TYPE_5__*,int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (char*) ;

UINT FUNC_11(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PC *VAR_11 = (PC *)VAR_9;
 UINT VAR_12 = VAR_4;
 RPC_CLIENT_GET_ACCOUNT VAR_13;

 CMD_EVAL_MIN_MAX VAR_14 =
 {
  "CMD_AccountRetrySet_EVAL_INTERVAL",
  5,
  4294967295UL,
 };
 PARAM VAR_15[] =
 {
  {"[name]", VAR_2, FUNC_10("CMD_AccountCreate_Prompt_Name"), VAR_1, ((void*)0)},
  {"NUM", VAR_2, FUNC_10("CMD_AccountRetrySet_PROMPT_NUM"), VAR_1, ((void*)0)},
  {"INTERVAL", VAR_2, FUNC_10("CMD_AccountRetrySet_PROMPT_INTERVAL"), VAR_0, &VAR_14},
 };


 VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_9(&VAR_13, sizeof(VAR_13));

 FUNC_8(VAR_13.AccountName, sizeof(VAR_13.AccountName), FUNC_6(VAR_10, "[name]"));

 VAR_12 = FUNC_0(VAR_11->RemoteClient, &VAR_13);

 if (VAR_12 == VAR_4)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_16;

  UINT VAR_17 = FUNC_5(VAR_10, "NUM");
  UINT VAR_18 = FUNC_5(VAR_10, "INTERVAL");

  VAR_13.ClientOption->NumRetry = (VAR_17 == 999) ? VAR_5 : VAR_17;
  VAR_13.ClientOption->RetryInterval = VAR_18;

  FUNC_9(&VAR_16, sizeof(VAR_16));
  VAR_16.CheckServerCert = VAR_13.CheckServerCert;
  VAR_16.RetryOnServerCert = VAR_13.RetryOnServerCert;
  VAR_16.ClientAuth = VAR_13.ClientAuth;
  VAR_16.ClientOption = VAR_13.ClientOption;
  VAR_16.ServerCert = VAR_13.ServerCert;
  VAR_16.StartupAccount = VAR_13.StartupAccount;

  VAR_12 = FUNC_1(VAR_11->RemoteClient, &VAR_16);
 }

 if (VAR_12 != VAR_4)
 {

  FUNC_3(VAR_6, VAR_12);
 }

 FUNC_2(&VAR_13);


 FUNC_4(VAR_10);

 return VAR_12;
}
