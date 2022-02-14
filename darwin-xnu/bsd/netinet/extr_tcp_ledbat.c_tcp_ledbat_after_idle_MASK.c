
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int snd_cwnd; int t_maxseg; } ;


 int VAR_0 ;

void
FUNC_0(struct tcpcb *VAR_1) {


 VAR_1->snd_cwnd = VAR_1->t_maxseg * VAR_0;
}
