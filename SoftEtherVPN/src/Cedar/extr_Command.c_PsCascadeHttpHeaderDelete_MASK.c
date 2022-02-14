
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_24__ {TYPE_2__* CustomHttpHeader; int AccountName; } ;
struct TYPE_23__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_22__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_21__ {int Rpc; int * HubName; } ;
struct TYPE_20__ {TYPE_7__* ClientOption; int HubName; } ;
struct TYPE_19__ {scalar_t__ NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_2__*,int,char*) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_2__*,int) ;
 TYPE_7__* FUNC_14 (int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_5__*,int ) ;

UINT FUNC_17(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = VAR_3;
 RPC_CREATE_LINK VAR_11;


 PARAM VAR_12[] =
 {

  {"[name]", &VAR_1, FUNC_15("CMD_CascadeCreate_Prompt_Name"), VAR_0, ((void*)0)},
  {"NAME", &VAR_1, FUNC_15("CMD_CascadeHttpHeader_Prompt_Name"), VAR_0, ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_15("CMD_Hub_Not_Selected"));
  return VAR_2;
 }


 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_13(&VAR_11, sizeof(VAR_11));
 FUNC_11(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);
 VAR_11.ClientOption = FUNC_14(sizeof(CLIENT_OPTION));
 FUNC_12(VAR_11.ClientOption->AccountName, sizeof(VAR_11.ClientOption->AccountName), FUNC_4(VAR_8, "[name]"));
 VAR_10 = FUNC_7(VAR_9->Rpc, &VAR_11);

 if (VAR_10 == VAR_3)
 {
  UINT VAR_13 = 0;
  TOKEN_LIST *VAR_14 = ((void*)0);
  char *VAR_15 = FUNC_3(VAR_8, "NAME");

  FUNC_13(VAR_11.ClientOption->CustomHttpHeader, sizeof(VAR_11.ClientOption->CustomHttpHeader));

  VAR_14 = FUNC_6(VAR_11.ClientOption->CustomHttpHeader, "\r\n");

  for (VAR_13 = 0; VAR_13 < VAR_14->NumTokens; VAR_13++)
  {
   if (FUNC_9(VAR_14->Token[VAR_13], VAR_15) == 0)
   {
    FUNC_10(VAR_11.ClientOption->CustomHttpHeader, sizeof(VAR_11.ClientOption->CustomHttpHeader), VAR_14->Token[VAR_13]);
    FUNC_10(VAR_11.ClientOption->CustomHttpHeader, 1, "\r\n");
   }
  }

  VAR_10 = FUNC_8(VAR_9->Rpc, &VAR_11);
 }
 else
 {

  FUNC_0(VAR_4, VAR_10);
 }

 FUNC_2(&VAR_11);


 FUNC_1(VAR_8);

 return VAR_10;
}
