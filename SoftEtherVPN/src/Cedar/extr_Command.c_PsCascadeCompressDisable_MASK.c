
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int UseCompress; int AccountName; } ;
struct TYPE_18__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_17__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_16__ {int Rpc; int * HubName; } ;
struct TYPE_15__ {TYPE_6__* ClientOption; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 TYPE_6__* FUNC_10 (int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*,int ) ;

UINT FUNC_13(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_CREATE_LINK VAR_11;

 PARAM VAR_12[] =
 {

  {"[name]", &VAR_1, FUNC_11("CMD_CascadeCreate_Prompt_Name"), VAR_0, ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_11("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_9(&VAR_11, sizeof(VAR_11));
 FUNC_7(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);
 VAR_11.ClientOption = FUNC_10(sizeof(CLIENT_OPTION));
 FUNC_8(VAR_11.ClientOption->AccountName, sizeof(VAR_11.ClientOption->AccountName), FUNC_3(VAR_8, "[name]"));


 VAR_10 = FUNC_5(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }
 else
 {

  VAR_11.ClientOption->UseCompress = 0;

  VAR_10 = FUNC_6(VAR_9->Rpc, &VAR_11);
  if (VAR_10 != VAR_3)
  {

   FUNC_0(VAR_4, VAR_10);
   FUNC_1(VAR_8);
   return VAR_10;
  }

  FUNC_2(&VAR_11);
 }

 FUNC_1(VAR_8);

 return 0;
}
