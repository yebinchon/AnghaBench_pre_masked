
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16_t ;
struct uip_ip_addr {int addr; } ;
struct tcpip_sock {int pcb; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int s8_t ;
typedef int s32_t ;


 struct tcpip_sock* FUNC_0 (int) ;
 int FUNC_1 (int ,struct uip_ip_addr*,int ) ;

s32_t FUNC_2(s32_t VAR_0,struct sockaddr *VAR_1,socklen_t *VAR_2)
{
 struct tcpip_sock *VAR_3;
 struct uip_ip_addr VAR_4;
 u16_t VAR_5;
 s8_t VAR_6;

 VAR_3 = FUNC_0(VAR_0);
 if(!VAR_3) return -1;

 VAR_4.addr = ((struct sockaddr_in*)VAR_1)->sin_addr.s_addr;
 VAR_5 = ((struct sockaddr_in*)VAR_1)->sin_port;

 VAR_6 = FUNC_1(VAR_3->pcb,&VAR_4,VAR_5);

 return (s32_t)VAR_6;
}
