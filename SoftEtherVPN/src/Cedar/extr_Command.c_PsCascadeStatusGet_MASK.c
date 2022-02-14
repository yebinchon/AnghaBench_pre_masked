
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_17__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_16__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {int Status; int AccountName; int HubName; } ;
typedef TYPE_1__ RPC_LINK_STATUS ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_4__*,int ) ;

UINT FUNC_14(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_LINK_STATUS VAR_11;

 PARAM VAR_12[] =
 {

  {"[name]", &VAR_1, FUNC_12("CMD_CascadeCreate_Prompt_Name"), VAR_0, ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_12("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_11(&VAR_11, sizeof(VAR_11));
 FUNC_9(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);
 FUNC_10(VAR_11.AccountName, sizeof(VAR_11.AccountName), FUNC_6(VAR_8, "[name]"));


 VAR_10 = FUNC_8(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_4(VAR_8);
  return VAR_10;
 }
 else
 {

  CT *VAR_13 = FUNC_3();

  FUNC_1(VAR_13, &VAR_11.Status);

  FUNC_2(VAR_13, VAR_4);

  FUNC_5(&VAR_11);
 }

 FUNC_4(VAR_8);

 return 0;
}
