
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcphdr {int dummy; } ;
struct tcpcb {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; scalar_t__ snd_nxt; scalar_t__ snd_max; int t_maxseg; int snd_scale; } ;


 int FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*,struct tcphdr*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_2, struct tcphdr *VAR_3)
{

 if (FUNC_2(VAR_2) != 0)
  return;

 if (VAR_2->snd_cwnd >= VAR_2->snd_ssthresh) {

  FUNC_3(VAR_2, VAR_3);
 } else {




  uint32_t VAR_4, VAR_5, VAR_6;

  VAR_4 = FUNC_0(VAR_3, VAR_2);
  VAR_5 = (VAR_1 &&
   VAR_2->snd_nxt == VAR_2->snd_max) ?
   2 * VAR_2->t_maxseg : VAR_2->t_maxseg;
  VAR_6 = FUNC_1(VAR_4, VAR_5);

  VAR_2->snd_cwnd += VAR_6;
  VAR_2->snd_cwnd = FUNC_1(VAR_2->snd_cwnd,
   VAR_0 << VAR_2->snd_scale);
 }
}
