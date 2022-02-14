
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tcpcb {int t_srtt_prev; int t_srtt; int t_rttvar_prev; int t_rttvar; int t_flagsext; int t_flags; int snd_recover; int snd_recover_prev; int snd_ssthresh; int snd_ssthresh_prev; int snd_cwnd; int snd_cwnd_prev; scalar_t__ snd_una; scalar_t__ snd_max; } ;


 scalar_t__ FUNC_0 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct tcpcb *VAR_4)
{
 u_int32_t VAR_5;
 if (FUNC_1(VAR_4)) {




  VAR_5 = VAR_4->snd_max - VAR_4->snd_una;
  VAR_4->snd_ssthresh_prev = FUNC_2(VAR_5, VAR_4->snd_ssthresh);
  VAR_4->snd_recover_prev = VAR_4->snd_recover;
 } else {
  VAR_4->snd_cwnd_prev = VAR_4->snd_cwnd;
  VAR_4->snd_ssthresh_prev = VAR_4->snd_ssthresh;
  VAR_4->snd_recover_prev = VAR_4->snd_recover;
  if (FUNC_0(VAR_4))
   VAR_4->t_flags |= VAR_3;
  else
   VAR_4->t_flags &= ~VAR_3;
 }
 VAR_4->t_srtt_prev = (VAR_4->t_srtt >> VAR_1) + 2;
 VAR_4->t_rttvar_prev = (VAR_4->t_rttvar >> VAR_0);
 VAR_4->t_flagsext &= ~(VAR_2);
}
