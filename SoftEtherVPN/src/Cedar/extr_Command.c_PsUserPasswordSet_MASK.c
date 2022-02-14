
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
struct TYPE_17__ {int (* Write ) (TYPE_4__*,int *) ;} ;
struct TYPE_16__ {char* member_0; int * member_4; int * member_3; int * member_2; int member_1; } ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {int * AuthData; int AuthType; int Name; int HubName; } ;
typedef TYPE_1__ RPC_SET_USER ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef int AUTHPASSWORD ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ,int *) ;
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*,int *) ;

UINT FUNC_13(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PS *VAR_11 = (PS *)VAR_9;
 UINT VAR_12 = 0;
 RPC_SET_USER VAR_13;

 PARAM VAR_14[] =
 {

  {"[name]", &VAR_2, FUNC_11("CMD_UserCreate_Prompt_NAME"), VAR_1, ((void*)0)},
  {"PASSWORD", &VAR_3, ((void*)0), ((void*)0), ((void*)0)},
 };


 if (VAR_11->HubName == ((void*)0))
 {
  VAR_6->Write(VAR_6, FUNC_11("CMD_Hub_Not_Selected"));
  return VAR_4;
 }

 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_4;
 }

 FUNC_10(&VAR_13, sizeof(VAR_13));

 FUNC_9(VAR_13.HubName, sizeof(VAR_13.HubName), VAR_11->HubName);
 FUNC_9(VAR_13.Name, sizeof(VAR_13.Name), FUNC_4(VAR_10, "[name]"));

 VAR_12 = FUNC_7(VAR_11->Rpc, &VAR_13);
 if (VAR_12 != VAR_5)
 {

  FUNC_0(VAR_6, VAR_12);
  FUNC_2(VAR_10);
  return VAR_12;
 }


 FUNC_1(VAR_13.AuthType, VAR_13.AuthData);

 {
  AUTHPASSWORD *VAR_15;

  VAR_15 = FUNC_5(VAR_13.Name, FUNC_4(VAR_10, "PASSWORD"));


  VAR_13.AuthType = VAR_0;
  VAR_13.AuthData = VAR_15;
 }


 VAR_12 = FUNC_8(VAR_11->Rpc, &VAR_13);

 if (VAR_12 != VAR_5)
 {

  FUNC_0(VAR_6, VAR_12);
  FUNC_2(VAR_10);
  return VAR_12;
 }

 FUNC_3(&VAR_13);

 FUNC_2(VAR_10);

 return 0;
}
