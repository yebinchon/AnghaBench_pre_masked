
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int (* Write ) (TYPE_6__*,int ) ;} ;
struct TYPE_19__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_18__ {int RemoteClient; } ;
struct TYPE_17__ {int StartupAccount; int ServerCert; int ClientOption; TYPE_1__* ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
struct TYPE_16__ {scalar_t__ AuthType; int Username; } ;
typedef TYPE_2__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef TYPE_6__ CONSOLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (TYPE_6__*,char*,int *,TYPE_5__*,int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_6__*,int ) ;

UINT FUNC_13(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PC *VAR_10 = (PC *)VAR_8;
 UINT VAR_11 = VAR_4;
 RPC_CLIENT_GET_ACCOUNT VAR_12;

 PARAM VAR_13[] =
 {
  {"[name]", &VAR_2, FUNC_11("CMD_AccountCreate_Prompt_Name"), VAR_1, ((void*)0)},
  {"USERNAME", &VAR_2, FUNC_11("CMD_AccountCreate_Prompt_Username"), VAR_1, ((void*)0)},
 };


 VAR_9 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_10(&VAR_12, sizeof(VAR_12));

 FUNC_9(VAR_12.AccountName, sizeof(VAR_12.AccountName), FUNC_6(VAR_9, "[name]"));

 VAR_11 = FUNC_0(VAR_10->RemoteClient, &VAR_12);

 if (VAR_11 == VAR_4)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_14;

  FUNC_8(VAR_12.ClientAuth->Username, sizeof(VAR_12.ClientAuth->Username), FUNC_5(VAR_9, "USERNAME"));

  if (VAR_12.ClientAuth->AuthType == VAR_0)
  {
   VAR_5->Write(VAR_5, FUNC_11("CMD_AccountUsername_Notice"));
  }

  FUNC_10(&VAR_14, sizeof(VAR_14));
  VAR_14.CheckServerCert = VAR_12.CheckServerCert;
  VAR_14.RetryOnServerCert = VAR_12.RetryOnServerCert;
  VAR_14.ClientAuth = VAR_12.ClientAuth;
  VAR_14.ClientOption = VAR_12.ClientOption;
  VAR_14.ServerCert = VAR_12.ServerCert;
  VAR_14.StartupAccount = VAR_12.StartupAccount;

  VAR_11 = FUNC_1(VAR_10->RemoteClient, &VAR_14);
 }

 if (VAR_11 != VAR_4)
 {

  FUNC_3(VAR_5, VAR_11);
 }

 FUNC_2(&VAR_12);


 FUNC_4(VAR_9);

 return VAR_11;
}
