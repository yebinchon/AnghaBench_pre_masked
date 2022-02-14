
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
struct uip_tcpseg {scalar_t__ len; struct uip_tcpseg* next; TYPE_1__* tcphdr; } ;
struct uip_tcp_pcb {int flags; scalar_t__ lastack; scalar_t__ snd_nxt; scalar_t__ rcv_nxt; scalar_t__ state; scalar_t__ snd_max; struct uip_tcpseg* unsent; struct uip_tcpseg* unacked; int tos; int ttl; int remote_ip; int local_ip; int rcv_wnd; int remote_port; int local_port; int cwnd; int snd_wnd; } ;
struct uip_tcp_hdr {int chksum; scalar_t__ urgp; void* wnd; void* ackno; void* seqno; void* dst; void* src; } ;
struct uip_pbuf {int tot_len; struct uip_tcp_hdr* payload; } ;
typedef int s8_t ;
struct TYPE_2__ {int seqno; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct uip_tcp_hdr*,int ) ;
 int FUNC_3 (struct uip_tcp_hdr*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct uip_tcpseg*) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct uip_pbuf*,int *,int *,int ,int ) ;
 int FUNC_11 (struct uip_pbuf*,int *,int *,int ,int ,int ) ;
 struct uip_pbuf* FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct uip_pbuf*) ;
 struct uip_tcp_pcb* VAR_10 ;
 int FUNC_14 (struct uip_tcpseg*,struct uip_tcp_pcb*) ;
 int FUNC_15 (struct uip_tcpseg*) ;

s8_t FUNC_16(struct uip_tcp_pcb *VAR_11)
{
 u32_t VAR_12;
 struct uip_pbuf *VAR_13;
 struct uip_tcp_hdr *VAR_14;
 struct uip_tcpseg *VAR_15,*VAR_16;

 if(VAR_10==VAR_11) return 0;

 VAR_12 = FUNC_1(VAR_11->snd_wnd,VAR_11->cwnd);
 VAR_15 = VAR_11->unsent;
 VAR_16 = VAR_11->unacked;
 if(VAR_16!=((void*)0)) {
  for(;VAR_16->next!=((void*)0);VAR_16=VAR_16->next);
 }

 if(VAR_11->flags&VAR_9 &&
  (VAR_15==((void*)0) || FUNC_9(VAR_15->tcphdr->seqno)-VAR_11->lastack+VAR_15->len>VAR_12)) {

  VAR_13 = FUNC_12(VAR_2,VAR_7,VAR_3);
  if(VAR_13==((void*)0)) {
   FUNC_0("uip_tcpoutput: (ACK) could not allocate pbuf.");
   return VAR_0;
  }
  VAR_11->flags &= ~(VAR_8|VAR_9);

  VAR_14 = VAR_13->payload;
  VAR_14->src = FUNC_8(VAR_11->local_port);
  VAR_14->dst = FUNC_8(VAR_11->remote_port);
  VAR_14->seqno = FUNC_7(VAR_11->snd_nxt);
  VAR_14->ackno = FUNC_7(VAR_11->rcv_nxt);
  FUNC_2(VAR_14,VAR_6);
  VAR_14->wnd = FUNC_8(VAR_11->rcv_wnd);
  VAR_14->urgp = 0;
  FUNC_3(VAR_14,5);

  VAR_14->chksum = 0;
  VAR_14->chksum = FUNC_10(VAR_13,&VAR_11->local_ip,&VAR_11->remote_ip,VAR_4,VAR_13->tot_len);

  FUNC_11(VAR_13,&VAR_11->local_ip,&VAR_11->remote_ip,VAR_11->ttl,VAR_11->tos,VAR_4);
  FUNC_13(VAR_13);

  return VAR_1;
 }

 while(VAR_15!=((void*)0) && FUNC_9(VAR_15->tcphdr->seqno)-VAR_11->lastack+VAR_15->len<=VAR_12) {
  VAR_11->unsent = VAR_15->next;
  if(VAR_11->state!=VAR_5) {
   FUNC_4(VAR_15->tcphdr,VAR_6);
   VAR_11->flags &= ~(VAR_8|VAR_9);
  }

  FUNC_14(VAR_15,VAR_11);

  VAR_11->snd_nxt = FUNC_9(VAR_15->tcphdr->seqno)+FUNC_6(VAR_15);
  if(FUNC_5(VAR_11->snd_max,VAR_11->snd_nxt)) VAR_11->snd_max = VAR_11->snd_nxt;

  if(FUNC_6(VAR_15)>0) {
   VAR_15->next = ((void*)0);
   if(VAR_11->unacked==((void*)0)) {
    VAR_11->unacked = VAR_15;
    VAR_16 = VAR_15;
   } else {
    if(FUNC_5(FUNC_9(VAR_15->tcphdr->seqno),FUNC_9(VAR_16->tcphdr->seqno))) {
     VAR_15->next = VAR_11->unacked;
     VAR_11->unacked = VAR_15;
    } else {
     VAR_16->next = VAR_15;
     VAR_16 = VAR_16->next;
    }
   }
  } else
   FUNC_15(VAR_15);

  VAR_15 = VAR_11->unsent;
 }
 return VAR_1;
}
