
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * PacketLogConfig; int PacketLogSwitchType; int SavePacketLog; int SecurityLogSwitchType; int SaveSecurityLog; } ;
typedef TYPE_1__ HUB_LOG ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

void FUNC_2(FOLDER *VAR_8, HUB_LOG *VAR_9, bool VAR_10)
{

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }

 if (VAR_10 == 0)
 {
  FUNC_0(VAR_8, "SaveSecurityLog", VAR_9->SaveSecurityLog);
  FUNC_1(VAR_8, "SecurityLogSwitchType", VAR_9->SecurityLogSwitchType);
  FUNC_0(VAR_8, "SavePacketLog", VAR_9->SavePacketLog);
 }

 FUNC_1(VAR_8, "PacketLogSwitchType", VAR_9->PacketLogSwitchType);

 FUNC_1(VAR_8, "PACKET_LOG_TCP_CONN", VAR_9->PacketLogConfig[VAR_6]);
 FUNC_1(VAR_8, "PACKET_LOG_TCP", VAR_9->PacketLogConfig[VAR_5]);
 FUNC_1(VAR_8, "PACKET_LOG_DHCP", VAR_9->PacketLogConfig[VAR_1]);
 FUNC_1(VAR_8, "PACKET_LOG_UDP", VAR_9->PacketLogConfig[VAR_7]);
 FUNC_1(VAR_8, "PACKET_LOG_ICMP", VAR_9->PacketLogConfig[VAR_3]);
 FUNC_1(VAR_8, "PACKET_LOG_IP", VAR_9->PacketLogConfig[VAR_4]);
 FUNC_1(VAR_8, "PACKET_LOG_ARP", VAR_9->PacketLogConfig[VAR_0]);
 FUNC_1(VAR_8, "PACKET_LOG_ETHERNET", VAR_9->PacketLogConfig[VAR_2]);
}
