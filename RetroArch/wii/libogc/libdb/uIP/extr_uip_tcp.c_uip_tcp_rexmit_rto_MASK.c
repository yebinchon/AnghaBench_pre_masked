
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uip_tcpseg {TYPE_1__* tcphdr; struct uip_tcpseg* next; } ;
struct uip_tcp_pcb {int nrtx; struct uip_tcpseg* unsent; int snd_nxt; struct uip_tcpseg* unacked; } ;
struct TYPE_2__ {int seqno; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct uip_tcp_pcb*) ;

void FUNC_2(struct uip_tcp_pcb *VAR_0)
{
 struct uip_tcpseg *VAR_1;

 if(VAR_0->unacked==((void*)0)) return;

 for(VAR_1=VAR_0->unacked;VAR_1->next!=((void*)0);VAR_1=VAR_1->next);

 VAR_1->next = VAR_0->unsent;
 VAR_0->unsent = VAR_0->unacked;
 VAR_0->unacked = ((void*)0);

 VAR_0->snd_nxt = FUNC_0(VAR_0->unsent->tcphdr->seqno);
 VAR_0->nrtx++;

 FUNC_1(VAR_0);
}
