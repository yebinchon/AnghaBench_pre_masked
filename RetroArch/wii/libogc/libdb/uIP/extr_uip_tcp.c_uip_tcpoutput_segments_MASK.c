
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct uip_tcpseg {TYPE_2__* p; TYPE_1__* tcphdr; } ;
struct uip_tcp_pcb {scalar_t__ rcv_wnd; scalar_t__ mss; scalar_t__ rttest; int tos; int ttl; int remote_ip; int local_ip; int rtseq; scalar_t__ rtime; int rcv_nxt; } ;
struct uip_netif {int ip_addr; } ;
struct TYPE_5__ {int tot_len; TYPE_1__* payload; int len; } ;
struct TYPE_4__ {scalar_t__ chksum; int seqno; scalar_t__ wnd; int ackno; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int *,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int ,int ,int ) ;
 struct uip_netif* FUNC_8 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_9(struct uip_tcpseg *VAR_2,struct uip_tcp_pcb *VAR_3)
{
 u16_t VAR_4;
 struct uip_netif *VAR_5;

 VAR_2->tcphdr->ackno = FUNC_1(VAR_3->rcv_nxt);
 if(VAR_3->rcv_wnd<VAR_3->mss) VAR_2->tcphdr->wnd = 0;
 else VAR_2->tcphdr->wnd = FUNC_2(VAR_3->rcv_wnd);

 if(FUNC_3(&VAR_3->local_ip)) {
  VAR_5 = FUNC_8(&VAR_3->remote_ip);
  if(VAR_5==((void*)0)) {
   FUNC_0("uip_tcpoutput_segments: no route found.");
   return;
  }
  FUNC_4(&VAR_3->local_ip,&VAR_5->ip_addr);
 }

 VAR_3->rtime = 0;
 if(VAR_3->rttest==0) {
  VAR_3->rttest = VAR_1;
  VAR_3->rtseq = FUNC_5(VAR_2->tcphdr->seqno);
 }

 VAR_4 = (u16_t)((u8_t*)VAR_2->tcphdr-(u8_t*)VAR_2->p->payload);
 VAR_2->p->len -= VAR_4;
 VAR_2->p->tot_len -= VAR_4;
 VAR_2->p->payload = VAR_2->tcphdr;

 VAR_2->tcphdr->chksum = 0;
 VAR_2->tcphdr->chksum = FUNC_6(VAR_2->p,&VAR_3->local_ip,&VAR_3->remote_ip,VAR_0,VAR_2->p->tot_len);

 FUNC_7(VAR_2->p,&VAR_3->local_ip,&VAR_3->remote_ip,VAR_3->ttl,VAR_3->tos,VAR_0);
}
