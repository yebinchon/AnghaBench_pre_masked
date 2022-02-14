
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
typedef void* u16_t ;
struct uip_tcpseg {scalar_t__ len; struct uip_pbuf* p; TYPE_2__* tcphdr; struct uip_tcpseg* next; int dataptr; } ;
struct uip_tcp_pcb {scalar_t__ snd_wnd; scalar_t__ snd_wl1; scalar_t__ snd_wl2; scalar_t__ lastack; int dupacks; int cwnd; int ssthresh; int mss; int flags; scalar_t__ snd_max; int rto; int sa; int sv; scalar_t__ state; scalar_t__ rttest; scalar_t__ rtseq; scalar_t__ rcv_nxt; scalar_t__ rcv_wnd; struct uip_tcpseg* ooseq; struct uip_tcpseg* unsent; int snd_nxt; int snd_queuelen; scalar_t__ polltmr; struct uip_tcpseg* unacked; scalar_t__ acked; int snd_buf; scalar_t__ nrtx; } ;
struct uip_pbuf {scalar_t__ len; scalar_t__ tot_len; int payload; struct uip_pbuf* next; } ;
typedef scalar_t__ s32_t ;
struct TYPE_4__ {scalar_t__ seqno; } ;
struct TYPE_3__ {scalar_t__ wnd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct uip_tcpseg*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct uip_tcpseg VAR_8 ;
 int FUNC_9 (struct uip_pbuf*,struct uip_pbuf*) ;
 scalar_t__ FUNC_10 (struct uip_pbuf*) ;
 int FUNC_11 (struct uip_pbuf*,scalar_t__) ;
 int FUNC_12 (struct uip_pbuf*,scalar_t__) ;
 struct uip_pbuf* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (struct uip_tcp_pcb*) ;
 int FUNC_14 (struct uip_tcp_pcb*) ;
 int FUNC_15 (struct uip_tcp_pcb*) ;
 scalar_t__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_16 (struct uip_tcpseg*) ;
 int FUNC_17 (struct uip_tcpseg*) ;

__attribute__((used)) static void FUNC_18(struct uip_tcp_pcb *VAR_15)
{
 struct uip_tcpseg *VAR_16,*VAR_17;
 struct uip_tcpseg *VAR_18;
 struct uip_pbuf *VAR_19;
 s32_t VAR_20,VAR_21;
 u32_t VAR_22;
 u16_t VAR_23;

 if(VAR_7&VAR_2) {
  VAR_22 = VAR_15->snd_wnd+VAR_15->snd_wl1;
  if(FUNC_5(VAR_15->snd_wl1,VAR_11) ||
   (VAR_15->snd_wl1==VAR_11 && FUNC_5(VAR_15->snd_wl2,VAR_6)) ||
   (VAR_15->snd_wl2==VAR_6 && VAR_13->wnd>VAR_15->snd_wnd)) {
   VAR_15->snd_wnd = VAR_13->wnd;
   VAR_15->snd_wl1 = VAR_11;
   VAR_15->snd_wl2 = VAR_6;
  }

  if(VAR_15->lastack==VAR_6) {
   VAR_15->acked = 0;
   if(VAR_15->snd_wl1+VAR_15->snd_wnd==VAR_22) {
    VAR_15->dupacks++;
    if(VAR_15->dupacks>=3 && VAR_15->unacked!=((void*)0)) {
     if(!(VAR_7&VAR_5)) {
      FUNC_0("uip_tcpreceive: dupacks, fast retransmit.");
      FUNC_15(VAR_15) ;

      if(VAR_15->cwnd>VAR_15->snd_wnd) VAR_15->ssthresh = VAR_15->snd_wnd/2;
      else VAR_15->ssthresh = VAR_15->cwnd/2;

      VAR_15->cwnd = VAR_15->ssthresh+3*VAR_15->mss;
      VAR_15->flags |= VAR_5;
     } else {
      if((u16_t)(VAR_15->cwnd+VAR_15->mss)>VAR_15->cwnd) VAR_15->cwnd += VAR_15->mss;
     }
    }
   }
  } else if(FUNC_2(VAR_6,VAR_15->lastack+1,VAR_15->snd_max)) {
   if(VAR_15->flags&VAR_5) {
    VAR_15->flags &= ~VAR_5;
    VAR_15->cwnd = VAR_15->ssthresh;
   }

   VAR_15->nrtx = 0;
   VAR_15->rto = (VAR_15->sa>>3)+VAR_15->sv;
   VAR_15->acked = VAR_6-VAR_15->lastack;
   VAR_15->snd_buf += VAR_15->acked;
   VAR_15->dupacks = 0;
   VAR_15->lastack = VAR_6;

   if(VAR_15->state>=VAR_1) {
    if(VAR_15->cwnd<VAR_15->ssthresh) {
     if((u16_t)(VAR_15->cwnd+VAR_15->mss)>VAR_15->cwnd) VAR_15->cwnd += VAR_15->mss;

    } else {
     u16_t VAR_24 = (VAR_15->cwnd+VAR_15->mss*VAR_15->mss/VAR_15->cwnd);
     if(VAR_24>VAR_15->cwnd) VAR_15->cwnd = VAR_24;
    }
   }

   while(VAR_15->unacked!=((void*)0) &&
    FUNC_4(FUNC_8(VAR_15->unacked->tcphdr->seqno)+FUNC_6(VAR_15->unacked),VAR_6)) {

    VAR_16 = VAR_15->unacked;
    VAR_15->unacked = VAR_15->unacked->next;
    VAR_15->snd_queuelen -= FUNC_10(VAR_16->p);

    FUNC_17(VAR_16);
   }
   VAR_15->polltmr = 0;
  }

  while(VAR_15->unsent!=((void*)0) &&
   FUNC_2(VAR_6,FUNC_8(VAR_15->unsent->tcphdr->seqno)+FUNC_6(VAR_15->unsent),VAR_15->snd_max)) {

   VAR_16 = VAR_15->unsent;
   VAR_15->unsent = VAR_15->unsent->next;
   VAR_15->snd_queuelen -= FUNC_10(VAR_16->p);

   FUNC_17(VAR_16);

   if(VAR_15->unsent!=((void*)0)) VAR_15->snd_nxt = FUNC_7(VAR_15->unsent->tcphdr->seqno);
  }

  if(VAR_15->rttest && FUNC_5(VAR_15->rtseq,VAR_6)) {
   VAR_21 = VAR_12 - VAR_15->rttest;
   VAR_21 = VAR_21 - (VAR_15->sa>>3);
   VAR_15->sa += VAR_21;

   if(VAR_21<0) VAR_21 -= VAR_21;

   VAR_21 = VAR_21 - (VAR_15->sv>>2);
   VAR_15->sv += VAR_21;
   VAR_15->rto = (VAR_15->sa>>3)+VAR_15->sv;

   VAR_15->rttest = 0;
  }
 }

 if(VAR_14>0) {
  if(FUNC_2(VAR_15->rcv_nxt,VAR_11+1,VAR_11+VAR_14-1)) {
   VAR_20 = VAR_15->rcv_nxt - VAR_11;
   VAR_19 = VAR_8.p;
   if(VAR_8.p->len<VAR_20) {
    VAR_23 = VAR_8.p->tot_len - VAR_20;
    while(VAR_19->len<VAR_20) {
     VAR_20 -= VAR_19->len;
     VAR_19->tot_len = VAR_23;
     VAR_19->len = 0;
     VAR_19 = VAR_19->next;
    }
    FUNC_11(VAR_19,-VAR_20);
   } else {
    FUNC_11(VAR_8.p,-VAR_20);
   }

   VAR_8.dataptr = VAR_19->payload;
   VAR_8.len -= VAR_15->rcv_nxt - VAR_11;
   VAR_8.tcphdr->seqno = VAR_11 = VAR_15->rcv_nxt;
  } else {
   if(FUNC_5(VAR_11,VAR_15->rcv_nxt)) {
    FUNC_0("uip_tcpreceive: duplicate seqno.");
    FUNC_14(VAR_15);
   }
  }

  if(FUNC_2(VAR_11,VAR_15->rcv_nxt,VAR_15->rcv_nxt+VAR_15->rcv_wnd-1)) {

   if(VAR_15->rcv_nxt==VAR_11) {
    if(VAR_15->ooseq!=((void*)0) && FUNC_4(VAR_15->ooseq->tcphdr->seqno,VAR_11+VAR_8.len)) {
     VAR_8.len = VAR_15->ooseq->tcphdr->seqno - VAR_11;
     FUNC_12(VAR_8.p,VAR_8.len);
    }

    VAR_14 = FUNC_6(&VAR_8);
    if(VAR_15->state!=VAR_0) VAR_15->rcv_nxt += VAR_14;


    if(VAR_15->rcv_wnd<VAR_14) VAR_15->rcv_wnd = 0;
    else VAR_15->rcv_wnd -= VAR_14;

    if(VAR_8.p->tot_len>0) {
     VAR_9 = VAR_8.p;
     VAR_8.p = ((void*)0);
    }

    if(FUNC_1(VAR_8.tcphdr)&VAR_3) {
     FUNC_0("uip_tcpreceive: received FIN.\n");
     VAR_10 = VAR_4;
    }

    while(VAR_15->ooseq!=((void*)0) && VAR_15->ooseq->tcphdr->seqno==VAR_15->rcv_nxt) {
     VAR_18 = VAR_15->ooseq;
     VAR_11 = VAR_15->ooseq->tcphdr->seqno;

     VAR_15->rcv_nxt += FUNC_6(VAR_18);
     if(VAR_15->rcv_wnd<FUNC_6(VAR_18)) VAR_15->rcv_wnd = 0;
     else VAR_15->rcv_wnd -= FUNC_6(VAR_18);

     if(VAR_18->p->tot_len>0) {
      if(VAR_9) FUNC_9(VAR_9,VAR_18->p);
      else VAR_9 = VAR_18->p;

      VAR_18->p = ((void*)0);
     }

     if(FUNC_1(VAR_18->tcphdr)&VAR_3) {
      FUNC_0("uip_tcpreceive: dequeued FIN.\n");
      VAR_10 = VAR_4;
     }

     VAR_15->ooseq = VAR_18->next;
     FUNC_17(VAR_18);
    }

    FUNC_13(VAR_15);

   } else {
    FUNC_0("uip_tcpreceive: packet out-of-sequence.");
    FUNC_14(VAR_15);
    if(VAR_15->ooseq==((void*)0))
     FUNC_16(&VAR_8);
    else {
     VAR_17 = ((void*)0);
     for(VAR_16=VAR_15->ooseq;VAR_16!=((void*)0);VAR_16=VAR_16->next) {
      if(VAR_11==VAR_16->tcphdr->seqno) {
       if(VAR_8.len>VAR_16->len) {
        VAR_18 = FUNC_16(&VAR_8);
        if(VAR_18!=((void*)0)) {
         VAR_18->next = VAR_16->next;
         if(VAR_17!=((void*)0)) VAR_17->next = VAR_18;
         else VAR_15->ooseq = VAR_18;
        }
        break;
       } else
        break;
      } else {
       if(VAR_17==((void*)0)) {
        if(FUNC_5(VAR_11,VAR_16->tcphdr->seqno)) {
         if(FUNC_3(VAR_11+VAR_8.len,VAR_16->tcphdr->seqno)) {
          VAR_8.len = VAR_16->tcphdr->seqno - VAR_11;
          FUNC_12(VAR_8.p,VAR_8.len);
         }

         VAR_18 = FUNC_16(&VAR_8);
         if(VAR_18!=((void*)0)) {
          VAR_18->next = VAR_16;
          VAR_15->ooseq = VAR_18;
         }
         break;
        }
       } else if(FUNC_2(VAR_11,VAR_17->tcphdr->seqno+1,VAR_16->tcphdr->seqno-1)) {
        if(FUNC_3(VAR_11+VAR_8.len,VAR_16->tcphdr->seqno)) {
         VAR_8.len = VAR_16->tcphdr->seqno - VAR_11;
         FUNC_12(VAR_8.p,VAR_8.len);
        }

        VAR_18 = FUNC_16(&VAR_8);
        if(VAR_18!=((void*)0)) {
         VAR_18->next = VAR_16;
         VAR_17->next = VAR_18;
         if(FUNC_3(VAR_17->tcphdr->seqno+VAR_17->len,VAR_11)) {
          VAR_17->len = VAR_11 - VAR_17->tcphdr->seqno;
          FUNC_12(VAR_17->p,VAR_17->len);
         }
        }
        break;
       }

       if(VAR_16->next==((void*)0) && FUNC_3(VAR_11,VAR_16->tcphdr->seqno)) {
        VAR_16->next = FUNC_16(&VAR_8);
        if(VAR_16->next!=((void*)0)) {
         if(FUNC_3(VAR_16->tcphdr->seqno+VAR_16->len,VAR_11)) {
          VAR_16->len = VAR_11 - VAR_16->tcphdr->seqno;
          FUNC_12(VAR_16->p,VAR_16->len);
         }
        }
       }
      }
      VAR_17 = VAR_16;
     }
    }
   }
  } else {
   if(!FUNC_2(VAR_11,VAR_15->rcv_nxt,VAR_15->rcv_nxt+VAR_15->rcv_wnd-1)) {
    FUNC_14(VAR_15);
   }
  }
 } else {
  if(!FUNC_2(VAR_11,VAR_15->rcv_nxt,VAR_15->rcv_nxt+VAR_15->rcv_wnd-1)) {
   FUNC_14(VAR_15);
  }
 }
}
