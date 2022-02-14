
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_11__ {int RemoteClient; } ;
struct TYPE_10__ {int StartupAccount; int ServerCert; int ClientOption; int ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_1__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_3__ PC ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (int *,char*,int *,TYPE_4__*,int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char*) ;

UINT FUNC_10(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PC *VAR_9 = (PC *)VAR_7;
 UINT VAR_10 = VAR_3;
 RPC_CLIENT_GET_ACCOUNT VAR_11;

 PARAM VAR_12[] =
 {
  {"[name]", &VAR_1, FUNC_9("CMD_AccountCreate_Prompt_Name"), VAR_0, ((void*)0)},
 };


 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_8(&VAR_11, sizeof(VAR_11));

 FUNC_7(VAR_11.AccountName, sizeof(VAR_11.AccountName), FUNC_5(VAR_8, "[name]"));

 VAR_10 = FUNC_0(VAR_9->RemoteClient, &VAR_11);

 if (VAR_10 == VAR_3)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_13;

  VAR_11.StartupAccount = 0;

  FUNC_8(&VAR_13, sizeof(VAR_13));
  VAR_13.CheckServerCert = VAR_11.CheckServerCert;
  VAR_13.RetryOnServerCert = VAR_11.RetryOnServerCert;
  VAR_13.ClientAuth = VAR_11.ClientAuth;
  VAR_13.ClientOption = VAR_11.ClientOption;
  VAR_13.ServerCert = VAR_11.ServerCert;
  VAR_13.StartupAccount = VAR_11.StartupAccount;

  VAR_10 = FUNC_1(VAR_9->RemoteClient, &VAR_13);
 }

 if (VAR_10 != VAR_3)
 {

  FUNC_3(VAR_4, VAR_10);
 }

 FUNC_2(&VAR_11);


 FUNC_4(VAR_8);

 return VAR_10;
}
