
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
struct uip_tcpseg {scalar_t__ len; TYPE_1__* tcphdr; struct uip_tcpseg* next; struct uip_pbuf* p; TYPE_1__* dataptr; } ;
struct uip_tcp_pcb {scalar_t__ snd_buf; scalar_t__ snd_lbb; scalar_t__ snd_queuelen; scalar_t__ mss; struct uip_tcpseg* unsent; int remote_port; int local_port; } ;
struct uip_pbuf {TYPE_1__* payload; } ;
typedef int s8_t ;
struct TYPE_6__ {scalar_t__ urgp; int seqno; void* dst; void* src; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (struct uip_tcpseg*) ;
 int FUNC_8 (scalar_t__) ;
 void* FUNC_9 (int ) ;
 struct uip_tcpseg* FUNC_10 (int *) ;
 int FUNC_11 (int *,struct uip_tcpseg*) ;
 void* FUNC_12 (int ,scalar_t__,int ) ;
 int FUNC_13 (struct uip_pbuf*,struct uip_pbuf*) ;
 int FUNC_14 (struct uip_pbuf*) ;
 scalar_t__ FUNC_15 (struct uip_pbuf*,int ) ;
 int VAR_10 ;
 int FUNC_16 (struct uip_tcpseg*) ;

s8_t FUNC_17(struct uip_tcp_pcb *VAR_11,void *VAR_12,u16_t VAR_13,u8_t VAR_14,u8_t VAR_15,u8_t *VAR_16,u8_t VAR_17)
{
 struct uip_pbuf *VAR_18;
 struct uip_tcpseg *VAR_19,*VAR_20,*VAR_21 = ((void*)0);
 u32_t VAR_22,VAR_23;
 u16_t VAR_24;
 void *VAR_25;
 u8_t VAR_26;

 if(VAR_13>VAR_11->snd_buf) {
  FUNC_0("uip_tcpenqueue: too much data (len>pcb->snd_buf).\n");
  return VAR_0;
 }

 VAR_22 = VAR_13;
 VAR_25 = VAR_12;

 VAR_23 = VAR_11->snd_lbb;
 VAR_26 = VAR_11->snd_queuelen;

 if(VAR_26>=VAR_8) {
  FUNC_0("uip_tcpenqueue: too long queue.");
  goto memerr;
 }
 VAR_20 = VAR_19 = VAR_21 = ((void*)0);
 VAR_24 = 0;
 while(VAR_21==((void*)0) || VAR_22>0) {
  VAR_24 = VAR_22>VAR_11->mss?VAR_11->mss:VAR_13;
  VAR_19 = FUNC_10(&VAR_10);
  if(VAR_19==((void*)0)) {
   FUNC_0("uip_tcpenqueue: could not allocate memory for tcp_seg.");
   goto memerr;
  }

  VAR_19->next = ((void*)0);
  VAR_19->p = ((void*)0);

  if(VAR_21==((void*)0)) VAR_21 = VAR_19;
  else VAR_20->next = VAR_19;

  VAR_20 = VAR_19;

  if(VAR_16!=((void*)0)) {
   if((VAR_19->p=FUNC_12(VAR_4,VAR_17,VAR_2))==((void*)0)) {
    FUNC_0("uip_tcpenqueue: could not allocate memory for pbuf opdata.");
    goto memerr;
   }
   ++VAR_26;
   VAR_19->dataptr = VAR_19->p->payload;
  } else if(VAR_15) {
   if((VAR_19->p=FUNC_12(VAR_4,VAR_24,VAR_2))==((void*)0)) {
    FUNC_0("uip_tcpenqueue: could not allocate memory for pbuf copy size.");
    goto memerr;
   }

   ++VAR_26;
   if(VAR_25!=((void*)0)) FUNC_2(VAR_19->p->payload,VAR_25,VAR_24);

   VAR_19->dataptr = VAR_19->p->payload;
  } else {
   if((VAR_18=FUNC_12(VAR_4,VAR_24,VAR_3))==((void*)0)) {
    FUNC_0("uip_tcpenqueue: could not allocate memory for zero-copy pbuf.");
    goto memerr;
   }

   ++VAR_26;
   VAR_18->payload = VAR_25;
   VAR_19->dataptr = VAR_25;
   if((VAR_19->p=FUNC_12(VAR_4,0,VAR_2))==((void*)0)) {
    FUNC_1("uip_tcpenqueue: could not allocate memory for header pbuf.");
    FUNC_14(VAR_18);
    goto memerr;
   }

   ++VAR_26;
   FUNC_13(VAR_19->p,VAR_18);
   VAR_18 = ((void*)0);
  }

  if(VAR_26>VAR_8) {
   FUNC_0("uip_tcpenqueue: queue too long.");
   goto memerr;
  }

  VAR_19->len = VAR_24;
  if(FUNC_15(VAR_19->p,VAR_6)) {
   FUNC_0("uip_tcpenqueue: no room for TCP header in pbuf.");
   goto memerr;
  }

  VAR_19->tcphdr = VAR_19->p->payload;
  VAR_19->tcphdr->src = FUNC_9(VAR_11->local_port);
  VAR_19->tcphdr->dst = FUNC_9(VAR_11->remote_port);
  VAR_19->tcphdr->seqno = FUNC_8(VAR_23);
  VAR_19->tcphdr->urgp = 0;
  FUNC_4(VAR_19->tcphdr,VAR_14);
  if(VAR_16==((void*)0)) FUNC_5(VAR_19->tcphdr,5);
  else {
   FUNC_5(VAR_19->tcphdr,(5+(VAR_17/4)));
   FUNC_2(VAR_19->dataptr,VAR_16,VAR_17);
  }
  VAR_22 -= VAR_24;
  VAR_23 += VAR_24;
  VAR_25 = (void*)((u8_t*)VAR_25+VAR_24);
 }

 if(VAR_11->unsent==((void*)0)) VAR_20 = ((void*)0);
 else {
  for(VAR_20=VAR_11->unsent;VAR_20->next!=((void*)0);VAR_20=VAR_20->next);
 }

 if(VAR_20!=((void*)0) &&
  FUNC_7(VAR_20)!=0 &&
  !(FUNC_3(VAR_20->tcphdr)&(VAR_9|VAR_5)) &&
  !(VAR_14&(VAR_9|VAR_5)) &&
  VAR_20->len+VAR_21->len<=VAR_11->mss) {

  FUNC_15(VAR_21->p,-VAR_6);
  FUNC_13(VAR_20->p,VAR_21->p);

  VAR_20->len += VAR_21->len;
  VAR_20->next = VAR_21->next;
  if(VAR_19==VAR_21) VAR_19 = ((void*)0);

  FUNC_11(&VAR_10,VAR_21);
 } else {
  if(VAR_20==((void*)0)) VAR_11->unsent = VAR_21;
  else VAR_20->next = VAR_21;
 }

 if(VAR_14&VAR_9 || VAR_14&VAR_5) VAR_13++;

 VAR_11->snd_lbb += VAR_13;
 VAR_11->snd_buf -= VAR_13;
 VAR_11->snd_queuelen = VAR_26;

 if(VAR_19!=((void*)0) && VAR_24>0 && VAR_19->tcphdr!=((void*)0)) FUNC_6(VAR_19->tcphdr,VAR_7);

 return VAR_1;
memerr:
 if(VAR_21!=((void*)0)) FUNC_16(VAR_21);
 return VAR_0;
}
