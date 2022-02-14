
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_18__ {int RemoteClient; } ;
struct TYPE_17__ {TYPE_1__* ClientOption; int StartupAccount; int ServerCert; int ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
struct TYPE_16__ {scalar_t__ NumTokens; char** Token; } ;
struct TYPE_15__ {TYPE_3__* CustomHttpHeader; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_3__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_5__ PC ;
typedef TYPE_6__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,char*,int *,TYPE_6__*,int) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_3__*,int,char*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (char*) ;

UINT FUNC_14(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 PC *VAR_8 = (PC *)VAR_7;
 UINT VAR_9 = VAR_3;
 RPC_CLIENT_GET_ACCOUNT VAR_10;


 PARAM VAR_11[] =
 {
  {"[name]", &VAR_1, FUNC_13("CMD_AccountCreate_Prompt_Name"), VAR_0, ((void*)0)},
  {"NAME", &VAR_1, FUNC_13("CMD_AccountHttpHeader_Prompt_Name"), VAR_0, ((void*)0)},
 };


 LIST *VAR_12 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_11, sizeof(VAR_11) / sizeof(VAR_11[0]));
 if (VAR_12 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_12(&VAR_10, sizeof(VAR_10));
 FUNC_11(VAR_10.AccountName, sizeof(VAR_10.AccountName), FUNC_6(VAR_12, "[name]"));
 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_3)
 {
  UINT VAR_13 = 0;
  TOKEN_LIST *VAR_14 = ((void*)0);
  RPC_CLIENT_CREATE_ACCOUNT VAR_15;
  char *VAR_16 = FUNC_5(VAR_12, "NAME");

  FUNC_12(&VAR_15, sizeof(VAR_15));
  VAR_15.CheckServerCert = VAR_10.CheckServerCert;
  VAR_15.RetryOnServerCert = VAR_10.RetryOnServerCert;
  VAR_15.ClientAuth = VAR_10.ClientAuth;
  VAR_15.ClientOption = VAR_10.ClientOption;
  VAR_15.ServerCert = VAR_10.ServerCert;
  VAR_15.StartupAccount = VAR_10.StartupAccount;

  FUNC_12(VAR_15.ClientOption->CustomHttpHeader, sizeof(VAR_15.ClientOption->CustomHttpHeader));

  VAR_14 = FUNC_8(VAR_10.ClientOption->CustomHttpHeader, "\r\n");

  for (VAR_13 = 0; VAR_13 < VAR_14->NumTokens; VAR_13++)
  {
   if (FUNC_9(VAR_14->Token[VAR_13], VAR_16) == 0)
   {
    FUNC_10(VAR_15.ClientOption->CustomHttpHeader, sizeof(VAR_15.ClientOption->CustomHttpHeader), VAR_14->Token[VAR_13]);
    FUNC_10(VAR_15.ClientOption->CustomHttpHeader, 1, "\r\n");
   }
  }

  VAR_9 = FUNC_1(VAR_8->RemoteClient, &VAR_15);
 }
 else
 {

  FUNC_3(VAR_4, VAR_9);
 }

 FUNC_2(&VAR_10);


 FUNC_4(VAR_12);

 return VAR_9;
}
