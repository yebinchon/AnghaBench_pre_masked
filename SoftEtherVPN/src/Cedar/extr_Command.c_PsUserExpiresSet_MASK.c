
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
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_17__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_16__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {scalar_t__ ExpireTime; int Name; int HubName; } ;
typedef TYPE_1__ RPC_SET_USER ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int * FUNC_5 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*,int ) ;

UINT FUNC_13(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_SET_USER VAR_12;
 UINT64 VAR_13;

 PARAM VAR_14[] =
 {

  {"[name]", &VAR_2, FUNC_11("CMD_UserCreate_Prompt_NAME"), VAR_1, ((void*)0)},
  {"EXPIRES", &VAR_2, FUNC_11("CMD_UserExpiresSet_Prompt_EXPIRES"), VAR_0, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_11("CMD_Hub_Not_Selected"));
  return VAR_3;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_10(&VAR_12, sizeof(VAR_12));

 FUNC_8(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);
 FUNC_8(VAR_12.Name, sizeof(VAR_12.Name), FUNC_3(VAR_9, "[name]"));

 VAR_11 = FUNC_6(VAR_10->Rpc, &VAR_12);
 if (VAR_11 != VAR_4)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }


 VAR_13 = FUNC_9(FUNC_3(VAR_9, "EXPIRES"));

 if (VAR_13 != 0)
 {
  VAR_13 = FUNC_4(VAR_13);
 }

 VAR_12.ExpireTime = VAR_13;


 VAR_11 = FUNC_7(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_4)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }

 FUNC_2(&VAR_12);

 FUNC_1(VAR_9);

 return 0;
}
