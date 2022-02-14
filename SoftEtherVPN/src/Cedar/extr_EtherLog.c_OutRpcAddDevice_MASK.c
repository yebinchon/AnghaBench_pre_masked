
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int * PacketLogConfig; int PacketLogSwitchType; } ;
struct TYPE_5__ {TYPE_1__ LogSetting; int NoPromiscuous; int DeviceName; } ;
typedef TYPE_2__ RPC_ADD_DEVICE ;
typedef int PACK ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_1, RPC_ADD_DEVICE *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_1, "DeviceName", VAR_2->DeviceName);
 FUNC_0(VAR_1, "NoPromiscuous", VAR_2->NoPromiscuous);
 FUNC_0(VAR_1, "PacketLogSwitchType", VAR_2->LogSetting.PacketLogSwitchType);

 for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
 {
  FUNC_1(VAR_1, "PacketLogConfig", VAR_2->LogSetting.PacketLogConfig[VAR_3], VAR_3, VAR_0);
 }
}
