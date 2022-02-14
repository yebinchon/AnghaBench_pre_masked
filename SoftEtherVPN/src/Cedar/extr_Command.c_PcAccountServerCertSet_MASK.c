
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_17__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_16__ {int RemoteClient; } ;
struct TYPE_15__ {int StartupAccount; int * ServerCert; int ClientOption; int ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_1__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_3__ PC ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int * FUNC_9 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_5__*,int ) ;

UINT FUNC_14(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PC *VAR_11 = (PC *)VAR_9;
 UINT VAR_12 = VAR_5;
 RPC_CLIENT_GET_ACCOUNT VAR_13;
 X *VAR_14;

 PARAM VAR_15[] =
 {
  {"[name]", &VAR_2, FUNC_12("CMD_AccountCreate_Prompt_Name"), VAR_1, ((void*)0)},
  {"LOADCERT", &VAR_2, FUNC_12("CMD_LOADCERTPATH"), VAR_0, ((void*)0)},
 };


 VAR_10 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_4;
 }

 VAR_14 = FUNC_5(FUNC_8(VAR_10, "LOADCERT"));
 if (VAR_14 == ((void*)0))
 {
  FUNC_6(VAR_10);
  VAR_6->Write(VAR_6, FUNC_12("CMD_LOADCERT_FAILED"));
  return VAR_3;
 }


 FUNC_11(&VAR_13, sizeof(VAR_13));

 FUNC_10(VAR_13.AccountName, sizeof(VAR_13.AccountName), FUNC_8(VAR_10, "[name]"));

 VAR_12 = FUNC_0(VAR_11->RemoteClient, &VAR_13);

 if (VAR_12 == VAR_5)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_16;

  if (VAR_13.ServerCert != ((void*)0))
  {
   FUNC_7(VAR_13.ServerCert);
  }
  VAR_13.ServerCert = FUNC_3(VAR_14);

  FUNC_11(&VAR_16, sizeof(VAR_16));
  VAR_16.CheckServerCert = VAR_13.CheckServerCert;
  VAR_16.RetryOnServerCert = VAR_13.RetryOnServerCert;
  VAR_16.ClientAuth = VAR_13.ClientAuth;
  VAR_16.ClientOption = VAR_13.ClientOption;
  VAR_16.ServerCert = VAR_13.ServerCert;
  VAR_16.StartupAccount = VAR_13.StartupAccount;

  VAR_12 = FUNC_1(VAR_11->RemoteClient, &VAR_16);
 }

 if (VAR_12 != VAR_5)
 {

  FUNC_4(VAR_6, VAR_12);
 }

 FUNC_2(&VAR_13);


 FUNC_6(VAR_10);

 FUNC_7(VAR_14);

 return VAR_12;
}
