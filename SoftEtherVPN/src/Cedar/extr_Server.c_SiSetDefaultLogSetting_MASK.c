
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SaveSecurityLog; int SavePacketLog; int * PacketLogConfig; void* PacketLogSwitchType; void* SecurityLogSwitchType; } ;
typedef TYPE_1__ HUB_LOG ;


 void* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(HUB_LOG *VAR_4)
{

 if (VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_4, sizeof(HUB_LOG));
 VAR_4->SaveSecurityLog = 1;
 VAR_4->SecurityLogSwitchType = VAR_0;
 VAR_4->SavePacketLog = 1;
 VAR_4->PacketLogSwitchType = VAR_0;
 VAR_4->PacketLogConfig[VAR_3] =
  VAR_4->PacketLogConfig[VAR_1] = VAR_2;
}
