
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef void* u32_t ;
struct uip_tcp_pcb {int rto; int sv; int cwnd; scalar_t__ keepcnt; int keepalive; int recv; scalar_t__ polltmr; int tmr; void* snd_lbb; void* lastack; void* snd_max; void* snd_nxt; void* snd_wl2; scalar_t__ rtime; scalar_t__ sa; int mss; int ttl; scalar_t__ tos; int rcv_wnd; scalar_t__ snd_queuelen; int snd_buf; int prio; } ;


 int FUNC_0 (struct uip_tcp_pcb*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct uip_tcp_pcb* FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 () ;

struct uip_tcp_pcb* FUNC_3(u8_t VAR_10)
{
 u32_t VAR_11;
 struct uip_tcp_pcb *VAR_12 = ((void*)0);

 VAR_12 = FUNC_1(&VAR_8);
 if(VAR_12!=((void*)0)) {
  FUNC_0(VAR_12,0,sizeof(struct uip_tcp_pcb));
  VAR_12->prio = VAR_2;
  VAR_12->snd_buf = VAR_4;
  VAR_12->snd_queuelen = 0;
  VAR_12->rcv_wnd = VAR_6;
  VAR_12->tos = 0;
  VAR_12->ttl = VAR_5;
  VAR_12->mss = VAR_1;
  VAR_12->rto = 3000/VAR_3;
  VAR_12->sa = 0;
  VAR_12->sv = 3000/VAR_3;
  VAR_12->rtime = 0;
  VAR_12->cwnd = 1;
  VAR_11 = FUNC_2();
  VAR_12->snd_wl2 = VAR_11;
  VAR_12->snd_nxt = VAR_11;
  VAR_12->snd_max = VAR_11;
  VAR_12->lastack = VAR_11;
  VAR_12->snd_lbb = VAR_11;
  VAR_12->tmr = VAR_9;
  VAR_12->polltmr = 0;

  VAR_12->recv = VAR_7;

  VAR_12->keepalive = VAR_0;
  VAR_12->keepcnt = 0;
 }
 return VAR_12;
}
