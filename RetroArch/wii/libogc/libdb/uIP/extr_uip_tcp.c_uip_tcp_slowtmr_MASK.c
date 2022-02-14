
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef int u32 ;
struct uip_tcp_pcb {scalar_t__ state; scalar_t__ nrtx; int rtime; int rto; int sa; int sv; int cwnd; int ssthresh; int mss; int tmr; int so_options; int keepalive; int keepcnt; scalar_t__ polltmr; scalar_t__ pollinterval; scalar_t__ (* poll ) (int ,struct uip_tcp_pcb*) ;struct uip_tcp_pcb* next; int cb_arg; int (* errf ) (int ,int ) ;int * ooseq; int snd_wnd; int * unacked; } ;
typedef scalar_t__ s8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,struct uip_tcp_pcb*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,struct uip_tcp_pcb*) ;
 int FUNC_4 (struct uip_tcp_pcb*) ;
 struct uip_tcp_pcb* VAR_17 ;
 int* VAR_18 ;
 int FUNC_5 (struct uip_tcp_pcb*) ;
 int FUNC_6 (struct uip_tcp_pcb*) ;
 int VAR_19 ;
 int FUNC_7 (struct uip_tcp_pcb*) ;
 int VAR_20 ;
 struct uip_tcp_pcb* VAR_21 ;
 int FUNC_8 (struct uip_tcp_pcb*) ;
 int FUNC_9 (int *) ;

void FUNC_10()
{
 struct uip_tcp_pcb *VAR_22,*VAR_23,*VAR_24;
 u32 VAR_25;
 u8_t VAR_26;
 s8_t VAR_27;

 VAR_27 = VAR_2;

 VAR_20++;

 VAR_22 = ((void*)0);
 VAR_23 = VAR_17;
 while(VAR_23!=((void*)0)) {
  VAR_26 = 0;

  if(VAR_23->state==VAR_9 && VAR_23->nrtx==VAR_6) VAR_26++;
  else if(VAR_23->nrtx==VAR_5) VAR_26++;
  else {
   VAR_23->rtime++;
   if(VAR_23->unacked!=((void*)0) && VAR_23->rtime>=VAR_23->rto) {
    if(VAR_23->state==VAR_9) VAR_23->rto = ((VAR_23->sa>>3)+VAR_23->sv)<<VAR_18[VAR_23->nrtx];

    VAR_25 = FUNC_0(VAR_23->cwnd,VAR_23->snd_wnd);
    VAR_23->ssthresh = VAR_25>>1;

    if(VAR_23->ssthresh<VAR_23->mss) VAR_23->ssthresh = VAR_23->mss*2;
    VAR_23->cwnd = VAR_23->mss;

    FUNC_7(VAR_23);
   }
  }

  if(VAR_23->state==VAR_4) {
   if((u32_t)(VAR_20-VAR_23->tmr)>VAR_10/VAR_15) VAR_26++;
  }

  if(VAR_23->so_options&VAR_7 &&
   (VAR_23->state==VAR_3 || VAR_23->state==VAR_0)) {
   if((u32_t)(VAR_20-VAR_23->tmr)>(VAR_23->keepalive+VAR_12)/VAR_15) FUNC_4(VAR_23);
   else if((u32_t)(VAR_20-VAR_23->tmr)>(VAR_23->keepalive+VAR_23->keepcnt*VAR_11)/VAR_15) {
    FUNC_5(VAR_23);
    VAR_23->keepcnt++;
   }
  }

  if(VAR_23->ooseq!=((void*)0) && (u32_t)VAR_20-VAR_23->tmr>=VAR_23->rto*VAR_14) {
   FUNC_9(VAR_23->ooseq);
   VAR_23->ooseq = ((void*)0);
  }
  if(VAR_23->state==VAR_8) {
   if((u32_t)(VAR_20-VAR_23->tmr)>VAR_16/VAR_15) VAR_26++;
  }

  if(VAR_26) {
   FUNC_6(VAR_23);

   if(VAR_22!=((void*)0)) VAR_22->next = VAR_23->next;
   else VAR_17 = VAR_23->next;

   if(VAR_23->errf) VAR_23->errf(VAR_23->cb_arg,VAR_1);

   VAR_24 = VAR_23->next;
   FUNC_1(&VAR_19,VAR_23);
   VAR_23 = VAR_24;
  } else {
   VAR_23->polltmr++;
   if(VAR_23->polltmr>=VAR_23->pollinterval) {
    VAR_23->polltmr = 0;
    if(VAR_23->poll) VAR_27 = VAR_23->poll(VAR_23->cb_arg,VAR_23);

    if(VAR_27==VAR_2) FUNC_8(VAR_23);
   }

   VAR_22 = VAR_23;
   VAR_23 = VAR_23->next;
  }
 }

 VAR_22 = ((void*)0);
 VAR_23 = VAR_21;
 while(VAR_23!=((void*)0)) {
  VAR_26 = 0;

  if((u32_t)(VAR_20-VAR_23->tmr)>2*VAR_13/VAR_15) VAR_26++;

  if(VAR_26) {
   FUNC_6(VAR_23);

   if(VAR_22!=((void*)0)) VAR_22->next = VAR_23->next;
   else VAR_21 = VAR_23->next;

   VAR_24 = VAR_23->next;
   FUNC_1(&VAR_19,VAR_23);
   VAR_23 = VAR_24;
  } else {
   VAR_22 = VAR_23;
   VAR_23 = VAR_23->next;
  }
 }
}
