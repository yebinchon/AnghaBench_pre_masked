
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {scalar_t__ state; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uip_tcp_pcb**,struct uip_tcp_pcb*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct uip_tcp_pcb*) ;
 int FUNC_2 (struct uip_tcp_pcb*) ;

void FUNC_3(struct uip_tcp_pcb **VAR_5,struct uip_tcp_pcb *VAR_6)
{
 FUNC_0(VAR_5,VAR_6);

 FUNC_1(VAR_6);
 if(VAR_6->state!=VAR_4 &&
  VAR_6->state!=VAR_1 &&
  VAR_6->flags&VAR_2) {
  VAR_6->flags |= VAR_3;
  FUNC_2(VAR_6);
 }
 VAR_6->state = VAR_0;
}
