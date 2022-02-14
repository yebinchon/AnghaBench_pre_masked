
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcphdr {int dummy; } ;
struct tcpcb {scalar_t__ snd_cwnd; scalar_t__ snd_wnd; scalar_t__ t_bytes_acked; scalar_t__ t_maxseg; } ;


 scalar_t__ FUNC_0 (struct tcphdr*,struct tcpcb*) ;

void
FUNC_1(struct tcpcb *VAR_0, struct tcphdr *VAR_1) {
 uint32_t VAR_2 = 0;
 VAR_2 = FUNC_0(VAR_1, VAR_0);




 if (VAR_0->snd_cwnd < VAR_0->snd_wnd) {
  VAR_0->t_bytes_acked += VAR_2;
  if (VAR_0->t_bytes_acked > VAR_0->snd_cwnd) {
   VAR_0->t_bytes_acked -= VAR_0->snd_cwnd;
   VAR_0->snd_cwnd += VAR_0->t_maxseg;
  }
 }
}
