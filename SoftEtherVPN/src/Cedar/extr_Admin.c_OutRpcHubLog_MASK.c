
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int * PacketLogConfig; int PacketLogSwitchType; int SavePacketLog; int SecurityLogSwitchType; int SaveSecurityLog; } ;
struct TYPE_5__ {TYPE_1__ LogSetting; int HubName; } ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef int PACK ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_1, RPC_HUB_LOG *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1, "HubName", VAR_2->HubName);
 FUNC_0(VAR_1, "SaveSecurityLog", VAR_2->LogSetting.SaveSecurityLog);
 FUNC_1(VAR_1, "SecurityLogSwitchType", VAR_2->LogSetting.SecurityLogSwitchType);
 FUNC_0(VAR_1, "SavePacketLog", VAR_2->LogSetting.SavePacketLog);
 FUNC_1(VAR_1, "PacketLogSwitchType", VAR_2->LogSetting.PacketLogSwitchType);
 for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
 {
  FUNC_2(VAR_1, "PacketLogConfig", VAR_2->LogSetting.PacketLogConfig[VAR_3], VAR_3, VAR_0);
 }
}
