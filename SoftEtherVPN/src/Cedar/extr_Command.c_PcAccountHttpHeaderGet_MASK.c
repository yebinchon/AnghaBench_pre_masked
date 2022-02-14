
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int unistr ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_14__ {int RemoteClient; } ;
struct TYPE_13__ {TYPE_1__* ClientOption; int AccountName; } ;
struct TYPE_12__ {scalar_t__ NumTokens; int * Token; } ;
struct TYPE_11__ {int CustomHttpHeader; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int * FUNC_6 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int VAR_4 ;
 int * FUNC_9 (int *,char*,int *,TYPE_5__*,int) ;
 TYPE_2__* FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (char*) ;

UINT FUNC_15(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 PC *VAR_9 = (PC *)VAR_8;
 UINT VAR_10 = VAR_3;
 RPC_CLIENT_GET_ACCOUNT VAR_11;


 PARAM VAR_12[] =
 {
  {"[name]", &VAR_1, FUNC_14("CMD_AccountCreate_Prompt_Name"), VAR_0, ((void*)0)},
 };


 LIST *VAR_13 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_13 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_13(&VAR_11, sizeof(VAR_11));
 FUNC_12(VAR_11.AccountName, sizeof(VAR_11.AccountName), FUNC_8(VAR_13, "[name]"));
 VAR_10 = FUNC_0(VAR_9->RemoteClient, &VAR_11);


 FUNC_7(VAR_13);

 if (VAR_10 == VAR_3)
 {
  wchar_t VAR_14[VAR_4];
  TOKEN_LIST *VAR_15 = ((void*)0);
  UINT VAR_16 = 0;
  CT *VAR_17 = FUNC_6();
  FUNC_5(VAR_17, FUNC_14("CMD_CT_STD_COLUMN_1"), 0);

  VAR_15 = FUNC_10(VAR_11.ClientOption->CustomHttpHeader, "\r\n");

  for (VAR_16 = 0; VAR_16 < VAR_15->NumTokens; VAR_16++)
  {
   FUNC_11(VAR_14, sizeof(VAR_14), VAR_15->Token[VAR_16]);
   FUNC_4(VAR_17, VAR_14);
  }

  FUNC_3(VAR_17, VAR_5, 0);
 }
 else
 {

  FUNC_2(VAR_5, VAR_10);
 }

 FUNC_1(&VAR_11);

 return VAR_10;
}
