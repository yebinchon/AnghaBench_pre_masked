
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8_t ;
struct uip_tcp_pcb_listen {scalar_t__ local_port; struct uip_tcp_pcb_listen* next; int local_ip; } ;
struct uip_tcp_pcb {scalar_t__ state; scalar_t__ remote_port; scalar_t__ local_port; scalar_t__ acked; scalar_t__ (* sent ) (int ,struct uip_tcp_pcb*,scalar_t__) ;scalar_t__ (* recv ) (int ,struct uip_tcp_pcb*,int *,scalar_t__) ;int cb_arg; int (* errf ) (int ,int ) ;int local_ip; int remote_ip; struct uip_tcp_pcb* next; } ;
struct uip_tcp_hdr {scalar_t__ src; scalar_t__ dst; scalar_t__ wnd; void* ackno; void* seqno; } ;
struct uip_pbuf {int tot_len; TYPE_2__* payload; } ;
struct uip_netif {int dummy; } ;
typedef scalar_t__ s8_t ;
typedef int s16_t ;
struct TYPE_7__ {int len; struct uip_pbuf* p; struct uip_tcp_hdr* tcphdr; TYPE_2__* dataptr; int * next; } ;
struct TYPE_6__ {int src; int dst; } ;
struct TYPE_5__ {struct uip_tcp_pcb_listen* listen_pcbs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (struct uip_tcp_hdr*) ;
 int FUNC_3 (struct uip_tcp_hdr*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct uip_netif*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,struct uip_tcp_pcb*) ;
 void* FUNC_9 (void*) ;
 void* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,struct uip_tcp_pcb*,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,struct uip_tcp_pcb*,int *,scalar_t__) ;
 void* VAR_13 ;
 scalar_t__ FUNC_14 (struct uip_pbuf*,int *,int *,int ,int) ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 TYPE_2__* VAR_16 ;
 int FUNC_15 (struct uip_pbuf*) ;
 int FUNC_16 (struct uip_pbuf*,int) ;
 int * VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 struct uip_tcp_pcb* VAR_20 ;
 struct uip_tcp_pcb* VAR_21 ;
 TYPE_1__ VAR_22 ;
 int FUNC_17 (struct uip_tcp_pcb**,struct uip_tcp_pcb*) ;
 int VAR_23 ;
 int FUNC_18 (void*,void*,int *,int *,scalar_t__,scalar_t__) ;
 struct uip_tcp_pcb* VAR_24 ;
 struct uip_tcp_hdr* VAR_25 ;
 int FUNC_19 (struct uip_tcp_pcb_listen*) ;
 int FUNC_20 (struct uip_tcp_pcb*) ;
 int VAR_26 ;
 int FUNC_21 (struct uip_tcp_pcb*) ;
 scalar_t__ FUNC_22 (struct uip_tcp_pcb*) ;

void FUNC_23(struct uip_pbuf *VAR_27,struct uip_netif *VAR_28)
{
 s8_t VAR_29;
 u8_t VAR_30;
 struct uip_tcp_pcb *VAR_31,*VAR_32;
 struct uip_tcp_pcb_listen *VAR_33;

 VAR_16 = VAR_27->payload;
 VAR_25 = (struct uip_tcp_hdr*)((u8_t*)VAR_27->payload+FUNC_0(VAR_16)*4);

 if(FUNC_16(VAR_27,-((s16_t)(FUNC_0(VAR_16)*4))) || VAR_27->tot_len<sizeof(struct uip_tcp_hdr)) {
  FUNC_1("uip_tcpinput: short packet discarded.");
  FUNC_15(VAR_27);
  return;
 }
 if(FUNC_6(&VAR_16->dst,VAR_28) ||
  FUNC_7(&VAR_16->dst)) {
  FUNC_15(VAR_27);
  return;
 }

 if(FUNC_14(VAR_27,&VAR_16->src,&VAR_16->dst,VAR_5,VAR_27->tot_len)!=0) {
  FUNC_1("uip_tcpinput: packet discarded due to failing checksum.");
  FUNC_15(VAR_27);
  return;
 }

 VAR_30 = FUNC_3(VAR_25);
 FUNC_16(VAR_27,-(VAR_30*4));

 VAR_25->src = FUNC_10(VAR_25->src);
 VAR_25->dst = FUNC_10(VAR_25->dst);
 VAR_19 = VAR_25->seqno = FUNC_9(VAR_25->seqno);
 VAR_13 = VAR_25->ackno = FUNC_9(VAR_25->ackno);
 VAR_25->wnd = FUNC_10(VAR_25->wnd);

 VAR_14 = FUNC_2(VAR_25)&VAR_7;
 VAR_26 = VAR_27->tot_len+((VAR_14&VAR_6||VAR_14&VAR_9)?1:0);

 VAR_32 = ((void*)0);
 for(VAR_31=VAR_20;VAR_31!=((void*)0);VAR_31=VAR_31->next) {
  if(VAR_31->state!=VAR_0 && VAR_31->state!=VAR_12 && VAR_31->state!=VAR_4) {
   if(VAR_31->remote_port==VAR_25->src &&
    VAR_31->local_port==VAR_25->dst &&
    FUNC_4(&VAR_31->remote_ip,&VAR_16->src) &&
    FUNC_4(&VAR_31->local_ip,&VAR_16->dst)) {
    if(VAR_32!=((void*)0)) {
     VAR_32->next = VAR_31->next;
     VAR_31->next = VAR_20;
     VAR_20 = VAR_31;
    }
    break;
   }
   VAR_32 = VAR_31;
  }
 }

 if(VAR_31==((void*)0)) {
  for(VAR_31=VAR_24;VAR_31!=((void*)0);VAR_31=VAR_31->next) {
   if(VAR_31->state==VAR_12 &&
    VAR_31->remote_port==VAR_25->src &&
    VAR_31->local_port==VAR_25->dst &&
    FUNC_4(&VAR_31->remote_ip,&VAR_16->src) &&
    FUNC_4(&VAR_31->local_ip,&VAR_16->dst)) {
    FUNC_20(VAR_31);
    return;
   }
  }

  VAR_32 = ((void*)0);
  for(VAR_33=VAR_22.listen_pcbs;VAR_33!=((void*)0);VAR_33=VAR_33->next) {
   if((FUNC_5(&VAR_33->local_ip) || FUNC_4(&VAR_33->local_ip,&VAR_16->dst)) &&
    VAR_33->local_port==VAR_25->dst) {
    if(VAR_32!=((void*)0)) {
     ((struct uip_tcp_pcb_listen*)VAR_32)->next = VAR_33->next;
     VAR_33->next = VAR_22.listen_pcbs;
     VAR_22.listen_pcbs = VAR_33;
    }
    FUNC_19(VAR_33);
    return;
   }
   VAR_32 = (struct uip_tcp_pcb*)VAR_33;
  }
 }

 if(VAR_31!=((void*)0)) {
  VAR_15.next = ((void*)0);
  VAR_15.len = VAR_27->tot_len;
  VAR_15.dataptr = VAR_27->payload;
  VAR_15.p = VAR_27;
  VAR_15.tcphdr = VAR_25;

  VAR_17 = ((void*)0);
  VAR_18 = 0;

  VAR_21 = VAR_31;
  VAR_29 = FUNC_22(VAR_31);
  VAR_21 = ((void*)0);

  if(VAR_29!=VAR_1) {
   if(VAR_18&VAR_11) {
    if(VAR_31->errf) VAR_31->errf(VAR_31->cb_arg,VAR_3);
    FUNC_17(&VAR_20,VAR_31);
    FUNC_8(&VAR_23,VAR_31);
   } else if(VAR_18&VAR_10) {
    FUNC_17(&VAR_20,VAR_31);
    FUNC_8(&VAR_23,VAR_31);
   } else {
    VAR_29 = VAR_2;

    if(VAR_31->acked>0) {
     if(VAR_31->sent) VAR_29 = VAR_31->sent(VAR_31->cb_arg,VAR_31,VAR_31->acked);
    }

    if(VAR_17!=((void*)0)) {
     if(VAR_31->recv) VAR_29 = VAR_31->recv(VAR_31->cb_arg,VAR_31,VAR_17,VAR_2);
    }

    if(VAR_29==VAR_2) FUNC_21(VAR_31);
   }
  }
  if(VAR_15.p!=((void*)0)) FUNC_15(VAR_15.p);
 } else {
  if(!(FUNC_2(VAR_25)&VAR_8))
   FUNC_18(VAR_13,VAR_19+VAR_26,&VAR_16->dst,&VAR_16->src,VAR_25->dst,VAR_25->src);

  FUNC_15(VAR_27);
 }
}
