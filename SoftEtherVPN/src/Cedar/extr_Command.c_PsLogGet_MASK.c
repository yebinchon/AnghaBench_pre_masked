
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_14__ {int Rpc; int * HubName; } ;
struct TYPE_12__ {int* PacketLogConfig; int PacketLogSwitchType; scalar_t__ SavePacketLog; int SecurityLogSwitchType; scalar_t__ SaveSecurityLog; } ;
struct TYPE_13__ {TYPE_1__ LogSetting; int HubName; } ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (scalar_t__) ;



 int * FUNC_7 (TYPE_4__*,char*,char*,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (TYPE_2__*,int) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*,char*) ;

UINT FUNC_13(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_HUB_LOG VAR_9;


 if (VAR_7->HubName == ((void*)0))
 {
  VAR_2->Write(VAR_2, FUNC_11("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_10(&VAR_9, sizeof(VAR_9));

 FUNC_9(VAR_9.HubName, sizeof(VAR_9.HubName), VAR_7->HubName);


 VAR_8 = FUNC_8(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_4(VAR_6);
  return VAR_8;
 }
 else
 {
  CT *VAR_10 = FUNC_3();

  FUNC_2(VAR_10, FUNC_11("CMD_Log_SecurityLog"),
   VAR_9.LogSetting.SaveSecurityLog ? FUNC_11("CMD_MSG_ENABLE") : FUNC_11("CMD_MSG_DISABLE"));
  if (VAR_9.LogSetting.SaveSecurityLog)
  {
   FUNC_2(VAR_10, FUNC_11("CMD_Log_SwitchType"), FUNC_5(VAR_9.LogSetting.SecurityLogSwitchType));
  }

  FUNC_2(VAR_10, L"", L"");

  FUNC_2(VAR_10, FUNC_11("CMD_Log_PacketLog"),
   VAR_9.LogSetting.SavePacketLog ? FUNC_11("CMD_MSG_ENABLE") : FUNC_11("CMD_MSG_DISABLE"));
  if (VAR_9.LogSetting.SavePacketLog)
  {
   UINT VAR_11;

   FUNC_2(VAR_10, FUNC_11("CMD_Log_SwitchType"), FUNC_5(VAR_9.LogSetting.PacketLogSwitchType));

   for (VAR_11 = 0;VAR_11 <= 7;VAR_11++)
   {
    wchar_t *VAR_12 = ((void*)0);

    switch (VAR_9.LogSetting.PacketLogConfig[VAR_11])
    {
    case 128:
     VAR_12 = FUNC_11("D_SM_LOG@B_PACKET_0_0");
     break;

    case 129:
     VAR_12 = FUNC_11("D_SM_LOG@B_PACKET_0_1");
     break;

    case 130:
     VAR_12 = FUNC_11("D_SM_LOG@B_PACKET_0_2");
     break;
    }

    FUNC_2(VAR_10, FUNC_6(VAR_11),
     VAR_12);
   }
  }

  FUNC_1(VAR_10, VAR_2);
 }

 FUNC_4(VAR_6);

 return 0;
}
