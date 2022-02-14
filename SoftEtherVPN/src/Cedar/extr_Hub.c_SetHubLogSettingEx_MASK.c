
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_9__ {void* SecurityLogSwitchType; void* PacketLogSwitchType; } ;
struct TYPE_8__ {int SecurityLogger; int PacketLogger; TYPE_5__ LogSetting; } ;
struct TYPE_7__ {int SecurityLogSwitchType; int PacketLogSwitchType; } ;
typedef TYPE_1__ HUB_LOG ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (TYPE_5__*,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(HUB *VAR_0, HUB_LOG *VAR_1, bool VAR_2)
{
 UINT VAR_3, VAR_4;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_0->LogSetting.PacketLogSwitchType;
 VAR_4 = VAR_0->LogSetting.SecurityLogSwitchType;

 FUNC_0(&VAR_0->LogSetting, VAR_1, sizeof(HUB_LOG));

 if (VAR_2)
 {
  VAR_0->LogSetting.PacketLogSwitchType = VAR_3;
  VAR_0->LogSetting.SecurityLogSwitchType = VAR_4;
 }


 FUNC_1(VAR_0->PacketLogger, VAR_1->PacketLogSwitchType);
 FUNC_1(VAR_0->SecurityLogger, VAR_1->SecurityLogSwitchType);
}
