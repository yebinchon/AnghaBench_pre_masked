
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ th_ack; } ;
struct tcpcb {scalar_t__ snd_max; scalar_t__ t_bytes_acked; scalar_t__ snd_ssthresh; scalar_t__ snd_cwnd; scalar_t__ t_maxseg; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

void
FUNC_1(struct tcpcb *VAR_0, struct tcphdr *VAR_1) {
 int32_t VAR_2;

 VAR_2 = VAR_0->snd_max - VAR_1->th_ack;
 if (VAR_2 < (int32_t)VAR_0->snd_ssthresh)
  VAR_0->snd_cwnd = FUNC_0(VAR_2, VAR_0->t_maxseg) + VAR_0->t_maxseg;
 else
  VAR_0->snd_cwnd = VAR_0->snd_ssthresh;
 VAR_0->t_bytes_acked = 0;
}
