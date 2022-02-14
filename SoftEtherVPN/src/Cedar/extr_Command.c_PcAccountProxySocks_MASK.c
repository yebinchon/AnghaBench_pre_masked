
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_13__ {int RemoteClient; } ;
struct TYPE_12__ {int StartupAccount; int ServerCert; TYPE_1__* ClientOption; int ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
struct TYPE_11__ {int ProxyPassword; int ProxyUsername; scalar_t__ ProxyPort; int ProxyName; int ProxyType; } ;
typedef TYPE_2__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int VAR_5 ;
 int * FUNC_8 (int *,char*,int *,TYPE_5__*,int) ;
 scalar_t__ FUNC_9 (char*,char**,scalar_t__*,int) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int * FUNC_13 (char*) ;

UINT FUNC_14(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PC *VAR_11 = (PC *)VAR_9;
 UINT VAR_12 = VAR_4;
 RPC_CLIENT_GET_ACCOUNT VAR_13;

 PARAM VAR_14[] =
 {
  {"[name]", VAR_2, FUNC_13("CMD_AccountCreate_Prompt_Name"), VAR_1, ((void*)0)},
  {"SERVER", VAR_2, FUNC_13("CMD_AccountProxyHttp_Prompt_Server"), VAR_0, ((void*)0)},
  {"USERNAME", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"PASSWORD", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };


 VAR_10 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_12(&VAR_13, sizeof(VAR_13));

 FUNC_11(VAR_13.AccountName, sizeof(VAR_13.AccountName), FUNC_7(VAR_10, "[name]"));

 VAR_12 = FUNC_0(VAR_11->RemoteClient, &VAR_13);

 if (VAR_12 == VAR_4)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_15;
  char *VAR_16;
  UINT VAR_17;


  if (FUNC_9(FUNC_6(VAR_10, "SERVER"), &VAR_16, &VAR_17, 1080))
  {
   VAR_13.ClientOption->ProxyType = VAR_5;
   FUNC_10(VAR_13.ClientOption->ProxyName, sizeof(VAR_13.ClientOption->ProxyName), VAR_16);
   VAR_13.ClientOption->ProxyPort = VAR_17;
   FUNC_10(VAR_13.ClientOption->ProxyUsername, sizeof(VAR_13.ClientOption->ProxyName), FUNC_6(VAR_10, "USERNAME"));
   FUNC_10(VAR_13.ClientOption->ProxyPassword, sizeof(VAR_13.ClientOption->ProxyName), FUNC_6(VAR_10, "PASSWORD"));
   FUNC_4(VAR_16);
  }

  FUNC_12(&VAR_15, sizeof(VAR_15));
  VAR_15.CheckServerCert = VAR_13.CheckServerCert;
  VAR_15.RetryOnServerCert = VAR_13.RetryOnServerCert;
  VAR_15.ClientAuth = VAR_13.ClientAuth;
  VAR_15.ClientOption = VAR_13.ClientOption;
  VAR_15.ServerCert = VAR_13.ServerCert;
  VAR_15.StartupAccount = VAR_13.StartupAccount;

  VAR_12 = FUNC_1(VAR_11->RemoteClient, &VAR_15);
 }

 if (VAR_12 != VAR_4)
 {

  FUNC_3(VAR_6, VAR_12);
 }

 FUNC_2(&VAR_13);


 FUNC_5(VAR_10);

 return VAR_12;
}
