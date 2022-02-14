
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_18__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int Rpc; int * HubName; } ;
struct TYPE_15__ {int SaveSecurityLog; int SavePacketLog; } ;
struct TYPE_16__ {TYPE_1__ LogSetting; int HubName; } ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_5__*,int ) ;

UINT FUNC_12(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_HUB_LOG VAR_11;
 bool VAR_12 = 0;
 char *VAR_13;

 PARAM VAR_14[] =
 {
  {"[security|packet]", &VAR_1, FUNC_9("CMD_LogEnable_Prompt"), VAR_0, ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_9("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 VAR_13 = FUNC_2(VAR_8, "[security|packet]");

 if (FUNC_6(VAR_13, "p"))
 {
  VAR_12 = 1;
 }
 else if (FUNC_6(VAR_13, "s") == 0)
 {
  VAR_4->Write(VAR_4, FUNC_9("CMD_LogEnable_Prompt_Error"));
  FUNC_1(VAR_8);
  return VAR_10;
 }

 FUNC_8(&VAR_11, sizeof(VAR_11));

 FUNC_7(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);


 VAR_10 = FUNC_4(VAR_9->Rpc, &VAR_11);
 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 if (VAR_12 == 0)
 {
  VAR_11.LogSetting.SaveSecurityLog = 1;
 }
 else
 {
  VAR_11.LogSetting.SavePacketLog = 1;
 }


 VAR_10 = FUNC_5(VAR_9->Rpc, &VAR_11);
 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 FUNC_1(VAR_8);

 return 0;
}
