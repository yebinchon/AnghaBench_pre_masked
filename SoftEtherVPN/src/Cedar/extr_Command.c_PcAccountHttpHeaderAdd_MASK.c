
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int t ;
typedef int s ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int RemoteClient; } ;
struct TYPE_16__ {int StartupAccount; int ServerCert; TYPE_1__* ClientOption; int ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
struct TYPE_15__ {scalar_t__ NumTokens; int * Token; } ;
struct TYPE_14__ {char* CustomHttpHeader; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_3__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_5__ PC ;
typedef TYPE_6__ PARAM ;
typedef int LIST ;
typedef int HTTP_HEADER ;
typedef int CONSOLE ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int * VAR_0 ;
 int FUNC_4 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,char) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int * FUNC_10 (int *,char*) ;
 char* FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int VAR_6 ;
 int * FUNC_13 (char*,char*,char*) ;
 int * FUNC_14 (int *,char*,int *,TYPE_6__*,int) ;
 TYPE_2__* FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,int,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,int,int ) ;
 int FUNC_20 (TYPE_3__*,int) ;
 int FUNC_21 (char*) ;

UINT FUNC_22(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PC *VAR_12 = (PC *)VAR_10;
 UINT VAR_13 = VAR_3;
 RPC_CLIENT_GET_ACCOUNT VAR_14;


 PARAM VAR_15[] =
 {
  {"[name]", &VAR_1, FUNC_21("CMD_AccountCreate_Prompt_Name"), *VAR_0, ((void*)0)},
  {"NAME", &VAR_1, FUNC_21("CMD_AccountHttpHeader_Prompt_Name"), *VAR_0, ((void*)0)},
  {"DATA", &VAR_1, FUNC_21("CMD_AccountHttpHeader_Prompt_Data"), ((void*)0), ((void*)0)},
 };


 VAR_11 = FUNC_14(VAR_7, VAR_8, VAR_9, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_20(&VAR_14, sizeof(VAR_14));
 FUNC_19(VAR_14.AccountName, sizeof(VAR_14.AccountName), FUNC_12(VAR_11, "[name]"));
 VAR_13 = FUNC_1(VAR_12->RemoteClient, &VAR_14);

 if (VAR_13 == VAR_3)
 {
  UINT VAR_16 = 0;
  TOKEN_LIST *VAR_17 = ((void*)0);
  HTTP_HEADER *VAR_18 = ((void*)0);
  char *VAR_19 = FUNC_11(VAR_11, "NAME");

  FUNC_18(VAR_19);

  VAR_18 = FUNC_13("", "", "");

  VAR_17 = FUNC_15(VAR_14.ClientOption->CustomHttpHeader, "\r\n");
  for (VAR_16 = 0; VAR_16 < VAR_17->NumTokens; VAR_16++)
  {
   FUNC_0(VAR_18, VAR_17->Token[VAR_16]);
  }
  FUNC_9(VAR_17);

  if (FUNC_10(VAR_18, VAR_19) == ((void*)0))
  {
   RPC_CLIENT_CREATE_ACCOUNT VAR_20;
   char VAR_21[VAR_6];

   FUNC_6(VAR_21, sizeof(VAR_21), "%s: %s\r\n", VAR_19, FUNC_11(VAR_11, "DATA"));
   FUNC_5(VAR_21, ' ');

   if ((FUNC_17(VAR_21) + FUNC_17(VAR_14.ClientOption->CustomHttpHeader)) < sizeof(VAR_14.ClientOption->CustomHttpHeader)) {
    FUNC_16(VAR_14.ClientOption->CustomHttpHeader, sizeof(VAR_21), VAR_21);

    FUNC_20(&VAR_20, sizeof(VAR_20));
    VAR_20.CheckServerCert = VAR_14.CheckServerCert;
    VAR_20.RetryOnServerCert = VAR_14.RetryOnServerCert;
    VAR_20.ClientAuth = VAR_14.ClientAuth;
    VAR_20.ClientOption = VAR_14.ClientOption;
    VAR_20.ServerCert = VAR_14.ServerCert;
    VAR_20.StartupAccount = VAR_14.StartupAccount;

    VAR_13 = FUNC_2(VAR_12->RemoteClient, &VAR_20);
   }
   else
   {

    VAR_13 = VAR_5;
   }
  }
  else
  {

   VAR_13 = VAR_4;
  }

  FUNC_7(VAR_18);
 }

 if (VAR_13 != VAR_3)
 {

  FUNC_4(VAR_7, VAR_13);
 }

 FUNC_3(&VAR_14);


 FUNC_8(VAR_11);

 return VAR_13;
}
