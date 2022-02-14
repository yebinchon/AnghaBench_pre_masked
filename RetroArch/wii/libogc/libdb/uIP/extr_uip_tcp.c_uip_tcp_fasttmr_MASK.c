
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcp_pcb {int flags; struct uip_tcp_pcb* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uip_tcp_pcb*) ;
 struct uip_tcp_pcb* VAR_2 ;

void FUNC_1()
{
 struct uip_tcp_pcb *VAR_3;

 for(VAR_3=VAR_2;VAR_3!=((void*)0);VAR_3=VAR_3->next) {
  if(VAR_3->flags&VAR_0) {
   FUNC_0(VAR_3);
   VAR_3->flags &= ~(VAR_0|VAR_1);
  }
 }
}
