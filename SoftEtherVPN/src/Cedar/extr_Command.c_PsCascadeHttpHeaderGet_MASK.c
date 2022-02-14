
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
typedef int unistr ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int CustomHttpHeader; int AccountName; } ;
struct TYPE_21__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_20__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_19__ {int Rpc; int * HubName; } ;
struct TYPE_18__ {TYPE_7__* ClientOption; int HubName; } ;
struct TYPE_17__ {scalar_t__ NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_5__*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,char*) ;
 int VAR_4 ;
 int * FUNC_8 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 TYPE_1__* FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (TYPE_2__*,int) ;
 TYPE_7__* FUNC_15 (int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_5__*,int ) ;

UINT FUNC_18(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = VAR_3;
 RPC_CREATE_LINK VAR_12;


 PARAM VAR_13[] =
 {

  {"[name]", &VAR_1, FUNC_16("CMD_CascadeCreate_Prompt_Name"), VAR_0, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_16("CMD_Hub_Not_Selected"));
  return VAR_2;
 }


 VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_14(&VAR_12, sizeof(VAR_12));
 FUNC_11(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);
 VAR_12.ClientOption = FUNC_15(sizeof(CLIENT_OPTION));
 FUNC_13(VAR_12.ClientOption->AccountName, sizeof(VAR_12.ClientOption->AccountName), FUNC_7(VAR_9, "[name]"));
 VAR_11 = FUNC_10(VAR_10->Rpc, &VAR_12);


 FUNC_5(VAR_9);

 if (VAR_11 == VAR_3)
 {
  wchar_t VAR_14[VAR_4];
  TOKEN_LIST *VAR_15 = ((void*)0);
  UINT VAR_16 = 0;
  CT *VAR_17 = FUNC_4();
  FUNC_3(VAR_17, FUNC_16("CMD_CT_STD_COLUMN_1"), 0);

  VAR_15 = FUNC_9(VAR_12.ClientOption->CustomHttpHeader, "\r\n");

  for (VAR_16 = 0; VAR_16 < VAR_15->NumTokens; VAR_16++)
  {
   FUNC_12(VAR_14, sizeof(VAR_14), VAR_15->Token[VAR_16]);
   FUNC_2(VAR_17, VAR_14);
  }

  FUNC_1(VAR_17, VAR_5, 0);
 }
 else
 {

  FUNC_0(VAR_5, VAR_11);
 }

 FUNC_6(&VAR_12);

 return VAR_11;
}
