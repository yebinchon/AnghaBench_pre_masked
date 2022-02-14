
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_19__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_18__ {int Rpc; int * HubName; } ;
struct TYPE_16__ {scalar_t__ PacketLogSwitchType; scalar_t__ SecurityLogSwitchType; } ;
struct TYPE_17__ {TYPE_1__ LogSetting; int HubName; } ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*) ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int,int *) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (TYPE_5__*,int ) ;

UINT FUNC_14(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_HUB_LOG VAR_12;
 bool VAR_13 = 0;
 char *VAR_14;
 UINT VAR_15 = 0;

 PARAM VAR_16[] =
 {
  {"[security|packet]", &VAR_1, FUNC_10("CMD_LogEnable_Prompt"), *VAR_0, ((void*)0)},
  {"SWITCH", &VAR_1, FUNC_10("CMD_LogSwitchSet_Prompt"), ((void*)0), ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_10("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_16, sizeof(VAR_16) / sizeof(VAR_16[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 VAR_14 = FUNC_2(VAR_9, "[security|packet]");

 if (FUNC_6(VAR_14, "p"))
 {
  VAR_13 = 1;
 }
 else if (FUNC_6(VAR_14, "s") == 0)
 {
  VAR_5->Write(VAR_5, FUNC_10("CMD_LogEnable_Prompt_Error"));
  FUNC_1(VAR_9);
  return VAR_2;
 }

 VAR_15 = FUNC_8(FUNC_2(VAR_9, "SWITCH"));

 if (VAR_15 == VAR_4)
 {
  VAR_5->Write(VAR_5, FUNC_10("CMD_LogEnable_Prompt_Error"));
  FUNC_1(VAR_9);
  return VAR_2;
 }

 FUNC_9(&VAR_12, sizeof(VAR_12));

 FUNC_7(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);


 VAR_11 = FUNC_4(VAR_10->Rpc, &VAR_12);
 if (VAR_11 != VAR_3)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }

 if (VAR_13 == 0)
 {
  VAR_12.LogSetting.SecurityLogSwitchType = VAR_15;
 }
 else
 {
  VAR_12.LogSetting.PacketLogSwitchType = VAR_15;
 }


 VAR_11 = FUNC_5(VAR_10->Rpc, &VAR_12);
 if (VAR_11 != VAR_3)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }

 FUNC_1(VAR_9);

 return 0;
}
