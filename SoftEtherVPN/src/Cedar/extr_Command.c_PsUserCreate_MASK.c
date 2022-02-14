
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int random_pass2 ;
typedef int random_pass ;
typedef int args ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_15__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_14__ {int Rpc; int * HubName; } ;
struct TYPE_13__ {int AuthData; int AuthType; int Name; int Note; int Realname; int GroupName; int HubName; } ;
typedef TYPE_1__ RPC_SET_USER ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 int FUNC_8 (int *,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_4__*,int ) ;

UINT FUNC_17(CONSOLE *VAR_8, char *VAR_9, wchar_t *VAR_10, void *VAR_11)
{
 LIST *VAR_12;
 PS *VAR_13 = (PS *)VAR_11;
 UINT VAR_14 = 0;
 RPC_SET_USER VAR_15;

 PARAM VAR_16[] =
 {

  {"[name]", &VAR_3, FUNC_15("CMD_UserCreate_Prompt_NAME"), *VAR_2, ((void*)0)},
  {"GROUP", &VAR_3, FUNC_15("CMD_UserCreate_Prompt_GROUP"), ((void*)0), ((void*)0)},
  {"REALNAME", &VAR_3, FUNC_15("CMD_UserCreate_Prompt_REALNAME"), ((void*)0), ((void*)0)},
  {"NOTE", &VAR_3, FUNC_15("CMD_UserCreate_Prompt_NOTE"), ((void*)0), ((void*)0)},
 };


 if (VAR_13->HubName == ((void*)0))
 {
  VAR_8->Write(VAR_8, FUNC_15("CMD_Hub_Not_Selected"));
  return VAR_4;
 }

 VAR_12 = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_16, sizeof(VAR_16) / sizeof(VAR_16[0]));
 if (VAR_12 == ((void*)0))
 {
  return VAR_4;
 }

 FUNC_14(&VAR_15, sizeof(VAR_15));
 FUNC_11(VAR_15.HubName, sizeof(VAR_15.HubName), VAR_13->HubName);
 FUNC_11(VAR_15.Name, sizeof(VAR_15.Name), FUNC_3(VAR_12, "[name]"));
 FUNC_11(VAR_15.GroupName, sizeof(VAR_15.GroupName), FUNC_3(VAR_12, "GROUP"));
 FUNC_13(VAR_15.Realname, sizeof(VAR_15.Realname), FUNC_4(VAR_12, "REALNAME"));
 FUNC_13(VAR_15.Note, sizeof(VAR_15.Note), FUNC_4(VAR_12, "NOTE"));

 FUNC_12(VAR_15.Name);
 if (FUNC_10(VAR_15.Name, "*") == 0)
 {
  VAR_15.AuthType = VAR_1;
  VAR_15.AuthData = FUNC_6(((void*)0));
 }
 else
 {
  UCHAR VAR_17[VAR_7];
  UCHAR VAR_18[VAR_6];

  FUNC_8(VAR_17, sizeof(VAR_17));
  FUNC_8(VAR_18, sizeof(VAR_18));
  VAR_15.AuthType = VAR_0;
  VAR_15.AuthData = FUNC_5(VAR_17, VAR_18);
 }


 VAR_14 = FUNC_9(VAR_13->Rpc, &VAR_15);

 if (VAR_14 != VAR_5)
 {

  FUNC_0(VAR_8, VAR_14);
  FUNC_1(VAR_12);
  return VAR_14;
 }

 FUNC_2(&VAR_15);

 FUNC_1(VAR_12);

 return 0;
}
