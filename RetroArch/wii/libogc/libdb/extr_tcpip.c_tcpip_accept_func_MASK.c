
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uip_tcp_pcb {int dummy; } ;
struct tcpip_sock {struct tcpip_sock* next; TYPE_1__* pcb; } ;
typedef int s8_t ;
typedef scalar_t__ s32_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 struct tcpip_sock* VAR_3 ;
 scalar_t__ FUNC_1 (struct uip_tcp_pcb*) ;
 int VAR_4 ;
 struct tcpip_sock* FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct uip_tcp_pcb*,struct tcpip_sock*) ;
 int FUNC_4 (struct uip_tcp_pcb*) ;
 int FUNC_5 (struct uip_tcp_pcb*,int ) ;
 int FUNC_6 (struct uip_tcp_pcb*,int ,int) ;
 int FUNC_7 (struct uip_tcp_pcb*,int ) ;
 int FUNC_8 (struct uip_tcp_pcb*,int ) ;

__attribute__((used)) static s8_t FUNC_9(void *VAR_8,struct uip_tcp_pcb *VAR_9,s8_t VAR_10)
{
 s32_t VAR_11;
 struct tcpip_sock *VAR_12,*VAR_13 = ((void*)0);
 struct tcpip_sock *VAR_14 = (struct tcpip_sock*)VAR_8;

 FUNC_0("tcpip_accept_func()");
 if(!VAR_14) return VAR_0;

 VAR_11 = FUNC_1(VAR_9);
 if(VAR_11<0) {
  FUNC_4(VAR_9);
  return VAR_0;
 }

 VAR_13 = FUNC_2(VAR_11);
 VAR_13->pcb->flags |= VAR_2;

 VAR_12 = VAR_3;
 while(VAR_12 && VAR_12->next) VAR_12 = VAR_12->next;
 if(!VAR_12) VAR_3 = VAR_13;
 else VAR_12->next = VAR_13;

 FUNC_3(VAR_9,VAR_13);
 FUNC_7(VAR_9,VAR_6);
 FUNC_8(VAR_9,VAR_7);
 FUNC_5(VAR_9,VAR_4);
 FUNC_6(VAR_9,VAR_5,4);

 return VAR_1;
}
