
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flags; int snd_cwnd; int t_maxseg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_2(struct tcpcb *VAR_5)
{
 if (VAR_5->t_flags & VAR_1) {
  VAR_5->snd_cwnd = VAR_5->t_maxseg * VAR_3;
 } else {

  if (VAR_4)
   VAR_5->snd_cwnd = FUNC_1(4 * VAR_5->t_maxseg,
    FUNC_0(2 * VAR_5->t_maxseg, VAR_0));
  else
   VAR_5->snd_cwnd = VAR_5->t_maxseg * VAR_2;
 }
}
