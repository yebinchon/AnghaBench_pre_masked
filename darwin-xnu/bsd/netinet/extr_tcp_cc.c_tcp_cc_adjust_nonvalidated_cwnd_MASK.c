
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_pipeack; int snd_cwnd; int t_maxseg; int t_flagsext; int t_lossflightsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (struct tcpcb*) ;
 int VAR_2 ;

inline void
FUNC_3(struct tcpcb *VAR_3)
{
 VAR_3->t_pipeack = FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 VAR_3->snd_cwnd = (FUNC_0(VAR_3->t_pipeack, VAR_3->t_lossflightsize) >> 1);
 VAR_3->snd_cwnd = FUNC_0(VAR_3->snd_cwnd, VAR_0);
 VAR_3->snd_cwnd += VAR_3->t_maxseg * VAR_2;
 VAR_3->t_flagsext &= ~VAR_1;
}
