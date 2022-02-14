
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int * PacketLogConfig; void* PacketLogSwitchType; void* SavePacketLog; void* SecurityLogSwitchType; void* SaveSecurityLog; } ;
struct TYPE_6__ {TYPE_1__ LogSetting; int HubName; } ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef int PACK ;


 size_t VAR_0 ;
 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

void FUNC_5(RPC_HUB_LOG *VAR_1, PACK *VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_1, sizeof(RPC_HUB_LOG));
 FUNC_3(VAR_2, "HubName", VAR_1->HubName, sizeof(VAR_1->HubName));
 VAR_1->LogSetting.SaveSecurityLog = FUNC_0(VAR_2, "SaveSecurityLog");
 VAR_1->LogSetting.SecurityLogSwitchType = FUNC_1(VAR_2, "SecurityLogSwitchType");
 VAR_1->LogSetting.SavePacketLog = FUNC_0(VAR_2, "SavePacketLog");
 VAR_1->LogSetting.PacketLogSwitchType = FUNC_1(VAR_2, "PacketLogSwitchType");
 for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
 {
  VAR_1->LogSetting.PacketLogConfig[VAR_3] = FUNC_2(VAR_2, "PacketLogConfig", VAR_3);
 }
}
