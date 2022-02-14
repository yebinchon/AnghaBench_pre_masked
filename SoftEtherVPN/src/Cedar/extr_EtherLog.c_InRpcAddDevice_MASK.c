
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int * PacketLogConfig; void* PacketLogSwitchType; } ;
struct TYPE_6__ {TYPE_1__ LogSetting; void* NoPromiscuous; int DeviceName; } ;
typedef TYPE_2__ RPC_ADD_DEVICE ;
typedef int PACK ;


 size_t VAR_0 ;
 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

void FUNC_4(RPC_ADD_DEVICE *VAR_1, PACK *VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1, sizeof(RPC_ADD_DEVICE));
 FUNC_2(VAR_2, "DeviceName", VAR_1->DeviceName, sizeof(VAR_1->DeviceName));
 VAR_1->NoPromiscuous = FUNC_0(VAR_2, "NoPromiscuous");
 VAR_1->LogSetting.PacketLogSwitchType = FUNC_0(VAR_2, "PacketLogSwitchType");

 for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
 {
  VAR_1->LogSetting.PacketLogConfig[VAR_3] = FUNC_1(VAR_2, "PacketLogConfig", VAR_3);
 }
}
