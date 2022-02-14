
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
struct TYPE_20__ {int (* Write ) (TYPE_6__*,int *) ;} ;
struct TYPE_19__ {char* member_0; int * member_4; int * member_3; int * member_2; int member_1; } ;
struct TYPE_18__ {int RemoteClient; } ;
struct TYPE_17__ {int StartupAccount; int ServerCert; int ClientOption; TYPE_1__* ClientAuth; int RetryOnServerCert; int CheckServerCert; int AccountName; } ;
struct TYPE_16__ {int PlainPassword; int AuthType; int Username; int HashedPassword; } ;
typedef TYPE_2__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef TYPE_6__ CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * VAR_2 ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int ,char*) ;
 int * FUNC_8 (TYPE_6__*,char*,int *,TYPE_5__*,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (TYPE_6__*,int *) ;

UINT FUNC_15(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PC *VAR_12 = (PC *)VAR_10;
 UINT VAR_13 = VAR_6;
 RPC_CLIENT_GET_ACCOUNT VAR_14;

 PARAM VAR_15[] =
 {
  {"[name]", &VAR_3, FUNC_13("CMD_AccountCreate_Prompt_Name"), VAR_2, ((void*)0)},
  {"PASSWORD", &VAR_4, ((void*)0), ((void*)0), ((void*)0)},
  {"TYPE", &VAR_3, FUNC_13("CMD_CascadePasswordSet_Prompt_Type"), VAR_2, ((void*)0)},
 };


 VAR_11 = FUNC_8(VAR_7, VAR_8, VAR_9, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_5;
 }


 FUNC_12(&VAR_14, sizeof(VAR_14));

 FUNC_11(VAR_14.AccountName, sizeof(VAR_14.AccountName), FUNC_6(VAR_11, "[name]"));

 VAR_13 = FUNC_0(VAR_12->RemoteClient, &VAR_14);

 if (VAR_13 == VAR_6)
 {
  char *VAR_16 = FUNC_5(VAR_11, "TYPE");
  RPC_CLIENT_CREATE_ACCOUNT VAR_17;


  if (FUNC_9("standard", VAR_16))
  {
   VAR_14.ClientAuth->AuthType = VAR_0;
   FUNC_7(VAR_14.ClientAuth->HashedPassword, VAR_14.ClientAuth->Username,
    FUNC_5(VAR_11, "PASSWORD"));
  }
  else if (FUNC_9("radius", VAR_16) || FUNC_9("ntdomain", VAR_16))
  {
   VAR_14.ClientAuth->AuthType = VAR_1;

   FUNC_10(VAR_14.ClientAuth->PlainPassword, sizeof(VAR_14.ClientAuth->PlainPassword),
    FUNC_5(VAR_11, "PASSWORD"));
  }
  else
  {

   VAR_7->Write(VAR_7, FUNC_13("CMD_CascadePasswordSet_Type_Invalid"));
   VAR_13 = VAR_5;
  }

  if (VAR_13 == VAR_6)
  {
   FUNC_12(&VAR_17, sizeof(VAR_17));
   VAR_17.CheckServerCert = VAR_14.CheckServerCert;
   VAR_17.RetryOnServerCert = VAR_14.RetryOnServerCert;
   VAR_17.ClientAuth = VAR_14.ClientAuth;
   VAR_17.ClientOption = VAR_14.ClientOption;
   VAR_17.ServerCert = VAR_14.ServerCert;
   VAR_17.StartupAccount = VAR_14.StartupAccount;

   VAR_13 = FUNC_1(VAR_12->RemoteClient, &VAR_17);
  }
 }

 if (VAR_13 != VAR_6)
 {

  FUNC_3(VAR_7, VAR_13);
 }

 FUNC_2(&VAR_14);


 FUNC_4(VAR_11);

 return VAR_13;
}
