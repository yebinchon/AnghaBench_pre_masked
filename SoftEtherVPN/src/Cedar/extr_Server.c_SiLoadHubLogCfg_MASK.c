
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** PacketLogConfig; void* PacketLogSwitchType; void* SavePacketLog; void* SecurityLogSwitchType; void* SaveSecurityLog; } ;
typedef TYPE_1__ HUB_LOG ;
typedef int FOLDER ;


 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(HUB_LOG *VAR_8, FOLDER *VAR_9)
{

 if (VAR_9 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_8, sizeof(HUB_LOG));
 VAR_8->SaveSecurityLog = FUNC_0(VAR_9, "SaveSecurityLog");
 VAR_8->SecurityLogSwitchType = FUNC_1(VAR_9, "SecurityLogSwitchType");
 VAR_8->SavePacketLog = FUNC_0(VAR_9, "SavePacketLog");
 VAR_8->PacketLogSwitchType = FUNC_1(VAR_9, "PacketLogSwitchType");

 VAR_8->PacketLogConfig[VAR_6] = FUNC_1(VAR_9, "PACKET_LOG_TCP_CONN");
 VAR_8->PacketLogConfig[VAR_5] = FUNC_1(VAR_9, "PACKET_LOG_TCP");
 VAR_8->PacketLogConfig[VAR_1] = FUNC_1(VAR_9, "PACKET_LOG_DHCP");
 VAR_8->PacketLogConfig[VAR_7] = FUNC_1(VAR_9, "PACKET_LOG_UDP");
 VAR_8->PacketLogConfig[VAR_3] = FUNC_1(VAR_9, "PACKET_LOG_ICMP");
 VAR_8->PacketLogConfig[VAR_4] = FUNC_1(VAR_9, "PACKET_LOG_IP");
 VAR_8->PacketLogConfig[VAR_0] = FUNC_1(VAR_9, "PACKET_LOG_ARP");
 VAR_8->PacketLogConfig[VAR_2] = FUNC_1(VAR_9, "PACKET_LOG_ETHERNET");
}
