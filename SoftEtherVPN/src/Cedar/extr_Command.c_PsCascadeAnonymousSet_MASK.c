
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_21__ {int AccountName; } ;
struct TYPE_20__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_19__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_18__ {int Rpc; int * HubName; } ;
struct TYPE_17__ {TYPE_1__* ClientAuth; TYPE_7__* ClientOption; int HubName; } ;
struct TYPE_16__ {int AuthType; } ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 TYPE_7__* FUNC_10 (int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_5__*,int ) ;

UINT FUNC_13(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_CREATE_LINK VAR_12;

 PARAM VAR_13[] =
 {
  {"[name]", &VAR_2, FUNC_11("CMD_CascadeCreate_Prompt_Name"), VAR_1, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_11("CMD_Hub_Not_Selected"));
  return VAR_3;
 }

 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_9(&VAR_12, sizeof(VAR_12));
 FUNC_7(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);
 VAR_12.ClientOption = FUNC_10(sizeof(CLIENT_OPTION));
 FUNC_8(VAR_12.ClientOption->AccountName, sizeof(VAR_12.ClientOption->AccountName), FUNC_3(VAR_9, "[name]"));


 VAR_11 = FUNC_5(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_4)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }
 else
 {

  VAR_12.ClientAuth->AuthType = VAR_0;

  VAR_11 = FUNC_6(VAR_10->Rpc, &VAR_12);
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
