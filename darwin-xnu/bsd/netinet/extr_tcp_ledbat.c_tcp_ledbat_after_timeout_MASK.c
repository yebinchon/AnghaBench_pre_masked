
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tcpcb {scalar_t__ t_state; int snd_cwnd; int t_maxseg; int snd_ssthresh; int bg_ssthresh; int snd_wnd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct tcpcb*) ;

void
FUNC_2(struct tcpcb *VAR_1) {
 if (VAR_1->t_state >= VAR_0) {
  u_int VAR_2 = FUNC_0(VAR_1->snd_wnd, VAR_1->snd_cwnd) / 2 / VAR_1->t_maxseg;
  if (VAR_2 < 2)
   VAR_2 = 2;
  VAR_1->snd_ssthresh = VAR_2 * VAR_1->t_maxseg;

  if (VAR_1->bg_ssthresh > VAR_1->snd_ssthresh)
   VAR_1->bg_ssthresh = VAR_1->snd_ssthresh;

  VAR_1->snd_cwnd = VAR_1->t_maxseg;
  FUNC_1(VAR_1);
 }
}
