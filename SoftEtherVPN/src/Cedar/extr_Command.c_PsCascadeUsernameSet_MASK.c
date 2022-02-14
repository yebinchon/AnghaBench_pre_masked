
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int AccountName; } ;
struct TYPE_21__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_20__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_19__ {int Rpc; int * HubName; } ;
struct TYPE_18__ {TYPE_1__* ClientAuth; TYPE_8__* ClientOption; int HubName; } ;
struct TYPE_17__ {scalar_t__ AuthType; int Username; } ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 TYPE_8__* FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (TYPE_5__*,int ) ;

UINT FUNC_15(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_CREATE_LINK VAR_12;

 PARAM VAR_13[] =
 {
  {"[name]", &VAR_2, FUNC_12("CMD_CascadeCreate_Prompt_Name"), VAR_1, ((void*)0)},
  {"USERNAME", &VAR_2, FUNC_12("CMD_CascadeCreate_Prompt_Username"), VAR_1, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_12("CMD_Hub_Not_Selected"));
  return VAR_3;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_10(&VAR_12, sizeof(VAR_12));
 FUNC_8(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);
 VAR_12.ClientOption = FUNC_11(sizeof(CLIENT_OPTION));
 FUNC_9(VAR_12.ClientOption->AccountName, sizeof(VAR_12.ClientOption->AccountName), FUNC_4(VAR_9, "[name]"));


 VAR_11 = FUNC_6(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_4)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }
 else
 {

  FUNC_8(VAR_12.ClientAuth->Username, sizeof(VAR_12.ClientAuth->Username),
   FUNC_3(VAR_9, "USERNAME"));

  if (VAR_12.ClientAuth->AuthType == VAR_0)
  {
   VAR_5->Write(VAR_5, FUNC_12("CMD_CascadeUsername_Notice"));
  }

  VAR_11 = FUNC_7(VAR_10->Rpc, &VAR_12);
  if (VAR_11 != VAR_4)
  {

   FUNC_0(VAR_5, VAR_11);
   FUNC_1(VAR_9);
   return VAR_11;
  }

  FUNC_2(&VAR_12);
 }

 FUNC_1(VAR_9);

 return 0;
}
