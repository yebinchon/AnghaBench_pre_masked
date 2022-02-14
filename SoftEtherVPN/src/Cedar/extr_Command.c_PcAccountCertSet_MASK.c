
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
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_13__ {int RemoteClient; } ;
struct TYPE_12__ {int StartupAccount; int ServerCert; int ClientOption; TYPE_1__* ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
struct TYPE_11__ {int * ClientK; int * ClientX; int AuthType; } ;
typedef TYPE_2__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef int K ;
typedef int CONSOLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int **,int **,int ,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,char*,int *,TYPE_5__*,int) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (char*) ;

UINT FUNC_15(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PC *VAR_12 = (PC *)VAR_10;
 UINT VAR_13 = VAR_6;
 RPC_CLIENT_GET_ACCOUNT VAR_14;
 X *VAR_15;
 K *VAR_16;

 PARAM VAR_17[] =
 {
  {"[name]", &VAR_3, FUNC_14("CMD_CascadeCreate_Prompt_Name"), VAR_2, ((void*)0)},
  {"LOADCERT", &VAR_3, FUNC_14("CMD_LOADCERTPATH"), VAR_1, ((void*)0)},
  {"LOADKEY", &VAR_3, FUNC_14("CMD_LOADKEYPATH"), VAR_1, ((void*)0)},
 };


 VAR_11 = FUNC_11(VAR_7, VAR_8, VAR_9, VAR_17, sizeof(VAR_17) / sizeof(VAR_17[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_5;
 }

 if (FUNC_5(VAR_7, &VAR_15, &VAR_16, FUNC_10(VAR_11, "LOADCERT"), FUNC_10(VAR_11, "LOADKEY")) == 0)
 {
  return VAR_4;
 }


 FUNC_13(&VAR_14, sizeof(VAR_14));

 FUNC_12(VAR_14.AccountName, sizeof(VAR_14.AccountName), FUNC_10(VAR_11, "[name]"));

 VAR_13 = FUNC_0(VAR_12->RemoteClient, &VAR_14);

 if (VAR_13 == VAR_6)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_18;

  VAR_14.ClientAuth->AuthType = VAR_0;
  if (VAR_14.ClientAuth->ClientX != ((void*)0))
  {
   FUNC_9(VAR_14.ClientAuth->ClientX);
  }
  if (VAR_14.ClientAuth->ClientK != ((void*)0))
  {
   FUNC_7(VAR_14.ClientAuth->ClientK);
  }

  VAR_14.ClientAuth->ClientX = FUNC_4(VAR_15);
  VAR_14.ClientAuth->ClientK = FUNC_3(VAR_16);

  FUNC_13(&VAR_18, sizeof(VAR_18));
  VAR_18.CheckServerCert = VAR_14.CheckServerCert;
  VAR_18.RetryOnServerCert = VAR_14.RetryOnServerCert;
  VAR_18.ClientAuth = VAR_14.ClientAuth;
  VAR_18.ClientOption = VAR_14.ClientOption;
  VAR_18.ServerCert = VAR_14.ServerCert;
  VAR_18.StartupAccount = VAR_14.StartupAccount;

  VAR_13 = FUNC_1(VAR_12->RemoteClient, &VAR_18);
 }

 if (VAR_13 != VAR_6)
 {

  FUNC_6(VAR_7, VAR_13);
 }

 FUNC_9(VAR_15);
 FUNC_7(VAR_16);

 FUNC_2(&VAR_14);


 FUNC_8(VAR_11);

 return VAR_13;
}
