
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_14__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_13__ {int Rpc; int * HubName; } ;
struct TYPE_12__ {int OldAccountName; int NewAccountName; int HubName; } ;
typedef TYPE_1__ RPC_RENAME_LINK ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_4__*,int ) ;

UINT FUNC_10(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_RENAME_LINK VAR_11;

 PARAM VAR_12[] =
 {

  {"[name]", &VAR_1, FUNC_8("CMD_CascadeRename_PROMPT_OLD"), VAR_0, ((void*)0)},
  {"NEW", &VAR_1, FUNC_8("CMD_CascadeRename_PROMPT_NEW"), VAR_0, ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_8("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_7(&VAR_11, sizeof(VAR_11));
 FUNC_5(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);

 FUNC_6(VAR_11.NewAccountName, sizeof(VAR_11.NewAccountName), FUNC_2(VAR_8, "NEW"));
 FUNC_6(VAR_11.OldAccountName, sizeof(VAR_11.OldAccountName), FUNC_2(VAR_8, "[name]"));


 VAR_10 = FUNC_4(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 FUNC_1(VAR_8);

 return 0;
}
