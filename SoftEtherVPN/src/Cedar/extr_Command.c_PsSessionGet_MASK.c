
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int str ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_17__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_16__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {char* ClientHostName; char* Username; char* RealUsername; char* GroupName; int NodeInfo; int Status; int ClientIp6; int ClientIp; int Name; int HubName; } ;
typedef TYPE_1__ RPC_SESSION_STATUS ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (int *,char*) ;
 int FUNC_9 (char*,int,int ,int ) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_11 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (char*,int ) ;
 int FUNC_15 (int ,int,int *) ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (int *,int,char*) ;
 int FUNC_18 (TYPE_1__*,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_4__*,int ) ;

UINT FUNC_21(CONSOLE *VAR_9, char *VAR_10, wchar_t *VAR_11, void *VAR_12)
{
 LIST *VAR_13;
 PS *VAR_14 = (PS *)VAR_12;
 UINT VAR_15 = 0;
 RPC_SESSION_STATUS VAR_16;

 PARAM VAR_17[] =
 {

  {"[name]", &VAR_2, FUNC_19("CMD_SessionGet_Prompt_NAME"), VAR_1, ((void*)0)},
 };


 if (VAR_14->HubName == ((void*)0))
 {
  VAR_9->Write(VAR_9, FUNC_19("CMD_Hub_Not_Selected"));
  return VAR_3;
 }

 VAR_13 = FUNC_11(VAR_9, VAR_10, VAR_11, VAR_17, sizeof(VAR_17) / sizeof(VAR_17[0]));
 if (VAR_13 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_18(&VAR_16, sizeof(VAR_16));
 FUNC_15(VAR_16.HubName, sizeof(VAR_16.HubName), VAR_14->HubName);
 FUNC_15(VAR_16.Name, sizeof(VAR_16.Name), FUNC_8(VAR_13, "[name]"));


 VAR_15 = FUNC_12(VAR_14->Rpc, &VAR_16);

 if (VAR_15 != VAR_4)
 {

  FUNC_0(VAR_9, VAR_15);
  FUNC_6(VAR_13);
  return VAR_15;
 }
 else
 {
  wchar_t VAR_18[VAR_7];
  char VAR_19[VAR_7];
  CT *VAR_20 = FUNC_5();

  if (VAR_16.ClientIp != 0)
  {
   FUNC_9(VAR_19, sizeof(VAR_19), VAR_16.ClientIp, VAR_16.ClientIp6);
   FUNC_17(VAR_18, sizeof(VAR_18), VAR_19);
   FUNC_4(VAR_20, FUNC_19("SM_CLIENT_IP"), VAR_18);
  }

  if (FUNC_16(VAR_16.ClientHostName) != 0)
  {
   FUNC_17(VAR_18, sizeof(VAR_18), VAR_16.ClientHostName);
   FUNC_4(VAR_20, FUNC_19("SM_CLIENT_HOSTNAME"), VAR_18);
  }

  FUNC_17(VAR_18, sizeof(VAR_18), VAR_16.Username);
  FUNC_4(VAR_20, FUNC_19("SM_SESS_STATUS_USERNAME"), VAR_18);

  if (FUNC_14(VAR_16.Username, VAR_6) != 0 && FUNC_14(VAR_16.Username, VAR_8) != 0 && FUNC_14(VAR_16.Username, VAR_0) != 0)
  {
   FUNC_17(VAR_18, sizeof(VAR_18), VAR_16.RealUsername);
   FUNC_4(VAR_20, FUNC_19("SM_SESS_STATUS_REALUSER"), VAR_18);
  }

  if (FUNC_10(VAR_16.GroupName) == 0)
  {
   FUNC_17(VAR_18, sizeof(VAR_18), VAR_16.GroupName);
   FUNC_4(VAR_20, FUNC_19("SM_SESS_STATUS_GROUPNAME"), VAR_18);
  }


  FUNC_2(VAR_20, &VAR_16.Status, 1);

  if (FUNC_14(VAR_16.Username, VAR_6) != 0 && FUNC_14(VAR_16.Username, VAR_8) != 0 && FUNC_14(VAR_16.Username, VAR_0) != 0 &&
   FUNC_13(VAR_16.Username, VAR_5) == 0)
  {
   FUNC_1(VAR_20, &VAR_16.NodeInfo);
  }

  FUNC_3(VAR_20, VAR_9);
 }

 FUNC_7(&VAR_16);

 FUNC_6(VAR_13);

 return 0;
}
