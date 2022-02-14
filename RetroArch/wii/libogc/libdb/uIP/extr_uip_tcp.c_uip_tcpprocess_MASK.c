
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
struct uip_tcpseg {struct uip_tcpseg* next; TYPE_1__* tcphdr; } ;
struct uip_tcp_pcb {int state; scalar_t__ snd_nxt; scalar_t__ rcv_nxt; scalar_t__ rcv_wnd; int mss; int cwnd; int cb_arg; scalar_t__ (* accept ) (int ,struct uip_tcp_pcb*,scalar_t__) ;scalar_t__ lastack; scalar_t__ (* connected ) (int ,struct uip_tcp_pcb*,scalar_t__) ;struct uip_tcpseg* unacked; int snd_queuelen; int snd_wl1; int snd_wnd; int snd_buf; scalar_t__ keepcnt; int tmr; int flags; } ;
typedef scalar_t__ s8_t ;
struct TYPE_6__ {int src; int dst; } ;
struct TYPE_5__ {int src; int dst; int wnd; } ;
struct TYPE_4__ {int seqno; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct uip_tcp_pcb*) ;
 int FUNC_1 (int *,struct uip_tcp_pcb*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct uip_tcp_pcb*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,struct uip_tcp_pcb*,scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (struct uip_tcp_pcb*) ;
 int FUNC_7 (struct uip_tcp_pcb*) ;
 int FUNC_8 (struct uip_tcp_pcb*) ;
 int VAR_17 ;
 int FUNC_9 (struct uip_tcp_pcb*) ;
 int FUNC_10 (struct uip_tcp_pcb*) ;
 int FUNC_11 (scalar_t__,scalar_t__,int *,int *,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_2__* VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_12 (struct uip_tcp_pcb*) ;
 int FUNC_13 (struct uip_tcpseg*) ;

__attribute__((used)) static s8_t FUNC_14(struct uip_tcp_pcb *VAR_22)
{
 struct uip_tcpseg *VAR_23;
 u8_t VAR_24 = 0;
 s8_t VAR_25;

 VAR_25 = 0;
 if(VAR_13&VAR_6) {
  if(VAR_22->state==128) {
   if(VAR_12==VAR_22->snd_nxt) VAR_24 = 1;
  } else {
   if(FUNC_2(VAR_16,VAR_22->rcv_nxt,VAR_22->rcv_nxt+VAR_22->rcv_wnd)) VAR_24 = 1;
  }
  if(VAR_24) {
   VAR_15 = VAR_10;
   VAR_22->flags &= ~VAR_8;
   return VAR_3;
  } else
   return VAR_2;
 }

 VAR_22->tmr = VAR_18;
 VAR_22->keepcnt = 0;

 switch(VAR_22->state) {
  case 128:
   if(VAR_13&VAR_4 && VAR_13&VAR_7 &&
    VAR_12==FUNC_3(VAR_22->unacked->tcphdr->seqno)+1) {
    VAR_22->snd_buf++;
    VAR_22->rcv_nxt = VAR_16+1;
    VAR_22->lastack = VAR_12;
    VAR_22->snd_wnd = VAR_20->wnd;
    VAR_22->snd_wl1 = VAR_16-1;
    VAR_22->state = 133;
    VAR_22->cwnd = VAR_22->mss;
    VAR_22->snd_queuelen--;

    VAR_23 = VAR_22->unacked;
    VAR_22->unacked = VAR_23->next;
    FUNC_13(VAR_23);

    FUNC_9(VAR_22);

    if(VAR_22->connected!=((void*)0)) VAR_25 = VAR_22->connected(VAR_22->cb_arg,VAR_22,VAR_2);

    FUNC_7(VAR_22);
   } else if(VAR_13&VAR_4) {
    FUNC_11(VAR_12,VAR_16+VAR_21,&VAR_14->dst,&VAR_14->src,VAR_20->dst,VAR_20->src);
   }
   break;
  case 129:
   if(VAR_13&VAR_4 && !(VAR_13&VAR_6)) {
    if(FUNC_2(VAR_12,VAR_22->lastack+1,VAR_22->snd_nxt)) {
     VAR_22->state = 133;

     if(VAR_22->accept!=((void*)0)) VAR_25 = VAR_22->accept(VAR_22->cb_arg,VAR_22,VAR_2);
     if(VAR_25!=VAR_2) {
      FUNC_6(VAR_22);
      return VAR_1;
     }
     FUNC_12(VAR_22);
     VAR_22->cwnd = VAR_22->mss;
    } else {
     FUNC_11(VAR_12,VAR_16+VAR_21,&VAR_14->dst,&VAR_14->src,VAR_20->dst,VAR_20->src);
    }
   }
   break;
  case 135:
  case 133:
   FUNC_12(VAR_22);
   if(VAR_13&VAR_5) {
    FUNC_8(VAR_22);
    VAR_22->state = 135;
   }
   break;
  case 132:
   FUNC_12(VAR_22);
   if(VAR_13&VAR_5) {
    if(VAR_13&VAR_4 && VAR_12==VAR_22->snd_nxt) {
     FUNC_8(VAR_22);
     FUNC_10(VAR_22);
     FUNC_1(&VAR_17,VAR_22);
     VAR_22->state = VAR_11;
     FUNC_0(&VAR_19,VAR_22);
    } else {
     FUNC_8(VAR_22);
     VAR_22->state = 134;
    }
   } else if(VAR_13&VAR_4 && VAR_12==VAR_22->snd_nxt) {
    VAR_22->state = 131;
   }
   break;
  case 131:
   FUNC_12(VAR_22);
   if(VAR_13&VAR_5) {
    FUNC_8(VAR_22);
    FUNC_10(VAR_22);
    FUNC_1(&VAR_17,VAR_22);
    VAR_22->state = VAR_11;
    FUNC_0(&VAR_19,VAR_22);
   }
   break;
  case 134:
   FUNC_12(VAR_22);
   if(VAR_13&VAR_4 && VAR_12==VAR_22->snd_nxt) {
    FUNC_8(VAR_22);
    FUNC_10(VAR_22);
    FUNC_1(&VAR_17,VAR_22);
    VAR_22->state = VAR_11;
    FUNC_0(&VAR_19,VAR_22);
   }
   break;
  case 130:
   FUNC_12(VAR_22);
   if(VAR_13&VAR_4 && VAR_12==VAR_22->snd_nxt) {
    VAR_22->state = VAR_0;
    VAR_15 = VAR_9;
   }
   break;
  default:
   break;

 }
 return VAR_2;
}
