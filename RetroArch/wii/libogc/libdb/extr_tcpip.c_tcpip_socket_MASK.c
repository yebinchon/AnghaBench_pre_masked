
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {int dummy; } ;
struct tcpip_sock {int dummy; } ;
typedef int s32_t ;


 int FUNC_0 (struct uip_tcp_pcb*) ;
 struct tcpip_sock* FUNC_1 (int) ;
 int FUNC_2 (struct uip_tcp_pcb*,struct tcpip_sock*) ;
 int FUNC_3 (struct uip_tcp_pcb*) ;
 struct uip_tcp_pcb* FUNC_4 () ;

s32_t FUNC_5()
{
 s32_t VAR_0;
 struct tcpip_sock *VAR_1;
 struct uip_tcp_pcb *VAR_2;

 VAR_2 = FUNC_4();
 if(!VAR_2) return -1;

 VAR_0 = FUNC_0(VAR_2);
 if(VAR_0<0) {
  FUNC_3(VAR_2);
  return -1;
 }

 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_2,VAR_1);

 return VAR_0;
}
