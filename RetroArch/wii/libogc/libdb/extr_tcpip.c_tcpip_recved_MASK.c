
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct uip_tcp_pcb {int dummy; } ;
struct uip_pbuf {int tot_len; } ;
struct tcpip_sock {struct uip_pbuf* lastdata; } ;
typedef int s8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uip_pbuf*) ;
 int FUNC_1 (struct uip_pbuf*,struct uip_pbuf*) ;
 int FUNC_2 (struct uip_tcp_pcb*,int) ;

__attribute__((used)) static s8_t FUNC_3(void *VAR_2,struct uip_tcp_pcb *VAR_3,struct uip_pbuf *VAR_4,s8_t VAR_5)
{
 u16_t VAR_6;
 struct tcpip_sock *VAR_7 = (struct tcpip_sock*)VAR_2;


 if(!VAR_7) {
  FUNC_0(VAR_4);
  return VAR_1;
 }

 if(VAR_4) {
  VAR_6 = VAR_4->tot_len;
  if(VAR_7->lastdata==((void*)0)) {
   VAR_7->lastdata = VAR_4;
  } else {




   FUNC_1(VAR_7->lastdata,VAR_4);
  }
 } else
  VAR_6 = 1;

 FUNC_2(VAR_3,VAR_6);
 return VAR_0;
}
