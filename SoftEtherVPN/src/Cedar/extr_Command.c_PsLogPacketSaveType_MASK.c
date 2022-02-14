
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
struct TYPE_18__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int Rpc; int * HubName; } ;
struct TYPE_15__ {scalar_t__* PacketLogConfig; } ;
struct TYPE_16__ {TYPE_1__ LogSetting; int HubName; } ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;


 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;

UINT FUNC_13(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_HUB_LOG VAR_11;
 UINT VAR_12 = VAR_3;
 UINT VAR_13 = VAR_3;

 PARAM VAR_14[] =
 {
  {"TYPE", &VAR_0, FUNC_10("CMD_LogPacketSaveType_Prompt_TYPE"), ((void*)0), ((void*)0)},
  {"SAVE", &VAR_0, FUNC_10("CMD_LogPacketSaveType_Prompt_SAVE"), ((void*)0), ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_10("CMD_Hub_Not_Selected"));
  return VAR_1;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_12 = FUNC_8(FUNC_2(VAR_8, "TYPE"));
 VAR_13 = FUNC_7(FUNC_2(VAR_8, "SAVE"));

 if (VAR_12 == VAR_3 || VAR_13 == VAR_3)
 {
  VAR_4->Write(VAR_4, FUNC_10("CMD_LogEnable_Prompt_Error"));
  FUNC_1(VAR_8);
  return VAR_1;
 }

 FUNC_9(&VAR_11, sizeof(VAR_11));

 FUNC_6(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);


 VAR_10 = FUNC_4(VAR_9->Rpc, &VAR_11);
 if (VAR_10 != VAR_2)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 VAR_11.LogSetting.PacketLogConfig[VAR_12] = VAR_13;


 VAR_10 = FUNC_5(VAR_9->Rpc, &VAR_11);
 if (VAR_10 != VAR_2)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 FUNC_1(VAR_8);

 return 0;
}
