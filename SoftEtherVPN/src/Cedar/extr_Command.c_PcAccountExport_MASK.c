
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int z ;
typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int bom ;
typedef int args ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_26__ {int* Buf; int Size; } ;
struct TYPE_25__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_24__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_23__ {int RemoteClient; } ;
struct TYPE_22__ {int StartupAccount; int ServerCert; int ClientOption; int ClientAuth; int CheckServerCert; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_1__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_3__ PC ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;
typedef TYPE_6__ BUF ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 TYPE_6__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_6__*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int VAR_5 ;
 TYPE_6__* FUNC_11 () ;
 int * FUNC_12 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 int FUNC_13 (TYPE_6__*,int ,int ) ;
 int FUNC_14 (char*,int,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int,int ) ;
 int FUNC_17 (int*,scalar_t__,int ) ;
 int FUNC_18 (TYPE_6__*,int*,int) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int* FUNC_20 (scalar_t__) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (TYPE_5__*,int ) ;

UINT FUNC_23(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PC *VAR_11 = (PC *)VAR_9;
 UINT VAR_12 = VAR_4;
 RPC_CLIENT_GET_ACCOUNT VAR_13;

 PARAM VAR_14[] =
 {
  {"[name]", &VAR_1, FUNC_21("CMD_AccountCreate_Prompt_Name"), VAR_0, ((void*)0)},
  {"SAVEPATH", &VAR_1, FUNC_21("CMD_AccountExport_PROMPT_SAVEPATH"), VAR_0, ((void*)0)},
 };


 VAR_10 = FUNC_12(VAR_6, VAR_7, VAR_8, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_19(&VAR_13, sizeof(VAR_13));

 FUNC_16(VAR_13.AccountName, sizeof(VAR_13.AccountName), FUNC_10(VAR_10, "[name]"));

 VAR_12 = FUNC_1(VAR_11->RemoteClient, &VAR_13);

 if (VAR_12 == VAR_4)
 {
  RPC_CLIENT_CREATE_ACCOUNT VAR_15;
  BUF *VAR_16;
  BUF *VAR_17;
  char VAR_18[VAR_5];
  UCHAR *VAR_19;
  UINT VAR_20;
  UCHAR VAR_21[] = {0xef, 0xbb, 0xbf, };

  FUNC_19(&VAR_15, sizeof(VAR_15));
  VAR_15.CheckServerCert = VAR_13.CheckServerCert;
  VAR_15.ClientAuth = VAR_13.ClientAuth;
  VAR_15.ClientOption = VAR_13.ClientOption;
  VAR_15.ServerCert = VAR_13.ServerCert;
  VAR_15.StartupAccount = VAR_13.StartupAccount;

  VAR_16 = FUNC_2(&VAR_15);

  FUNC_14(VAR_18, sizeof(VAR_18), FUNC_9(VAR_10, "SAVEPATH"));
  VAR_17 = FUNC_11();

  FUNC_18(VAR_17, VAR_21, sizeof(VAR_21));


  VAR_20 = FUNC_0(FUNC_21("CM_ACCOUNT_FILE_BANNER"));
  VAR_19 = FUNC_20(VAR_20 + 32);
  FUNC_17(VAR_19, VAR_20, FUNC_21("CM_ACCOUNT_FILE_BANNER"));

  FUNC_18(VAR_17, VAR_19, FUNC_15((char *)VAR_19));
  FUNC_18(VAR_17, VAR_16->Buf, VAR_16->Size);
  FUNC_13(VAR_17, 0, 0);

  FUNC_7(VAR_16);

  if (FUNC_5(VAR_17, VAR_18) == 0)
  {
   VAR_6->Write(VAR_6, FUNC_21("CMD_SAVEFILE_FAILED"));
   VAR_12 = VAR_2;
  }

  FUNC_7(VAR_17);
  FUNC_6(VAR_19);
 }

 if (VAR_12 != VAR_4)
 {

  FUNC_4(VAR_6, VAR_12);
 }

 FUNC_3(&VAR_13);


 FUNC_8(VAR_10);

 return VAR_12;
}
