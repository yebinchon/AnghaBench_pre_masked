
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct tcphdr {scalar_t__ th_ack; } ;
struct tcpcb {int t_flags; scalar_t__ t_rtttime; int t_badrexmt_time; int t_flagsext; scalar_t__ snd_max; scalar_t__ snd_nxt; int snd_recover_prev; int snd_recover; scalar_t__ snd_cwnd; scalar_t__ t_lossflightsize; int snd_ssthresh_prev; int snd_ssthresh; scalar_t__ snd_cwnd_prev; } ;
struct TYPE_2__ {int (* cwnd_init ) (struct tcpcb*) ;} ;


 scalar_t__ FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 TYPE_1__* FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct tcpcb*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct tcpcb*) ;
 int FUNC_7 (struct tcpcb*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(struct tcpcb *VAR_4, struct tcphdr *VAR_5)
{
 if (FUNC_3(VAR_4)) {
  u_int32_t VAR_6, VAR_7;
  VAR_6 = VAR_4->snd_max - VAR_5->th_ack;
  VAR_7 = FUNC_0(VAR_5, VAR_4);





  VAR_4->snd_ssthresh = VAR_4->snd_ssthresh_prev;


  if (FUNC_1(VAR_4)->cwnd_init != ((void*)0))
   FUNC_1(VAR_4)->cwnd_init(VAR_4);

  VAR_4->snd_cwnd = VAR_6 + FUNC_5(VAR_7, VAR_4->snd_cwnd);

 } else {
  VAR_4->snd_cwnd = VAR_4->snd_cwnd_prev;
  VAR_4->snd_ssthresh = VAR_4->snd_ssthresh_prev;
  if (VAR_4->t_flags & VAR_2)
   FUNC_2(VAR_4);


  VAR_4->t_lossflightsize = 0;
 }
 VAR_4->snd_cwnd = FUNC_4(VAR_4->snd_cwnd, VAR_0);
 VAR_4->snd_recover = VAR_4->snd_recover_prev;
 VAR_4->snd_nxt = VAR_4->snd_max;


 FUNC_7(VAR_4);
 VAR_4->t_flagsext |= VAR_1;
 VAR_4->t_badrexmt_time = VAR_3;
 VAR_4->t_rtttime = 0;
}
