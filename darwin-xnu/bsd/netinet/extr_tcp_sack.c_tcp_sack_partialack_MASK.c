
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {scalar_t__ th_ack; } ;
struct TYPE_2__ {scalar_t__ sack_bytes_rexmit; } ;
struct tcpcb {int t_maxseg; scalar_t__ snd_cwnd; scalar_t__ snd_nxt; scalar_t__ sack_newdata; scalar_t__ snd_ssthresh; scalar_t__ snd_fack; scalar_t__ snd_recover; int snd_holes; TYPE_1__ sackhint; scalar_t__ t_rtttime; scalar_t__* t_timer; } ;
struct sackhole {int dummy; } ;


 int FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t VAR_0 ;
 int FUNC_3 (struct tcpcb*) ;
 struct sackhole* FUNC_4 (struct tcpcb*,scalar_t__,scalar_t__,int *) ;

void
FUNC_5(struct tcpcb *VAR_1, struct tcphdr *VAR_2)
{
 int VAR_3 = 1;

 VAR_1->t_timer[VAR_0] = 0;
 VAR_1->t_rtttime = 0;

 if (((FUNC_0(VAR_2, VAR_1)) / VAR_1->t_maxseg) > 2)
  VAR_3 = 2;
 VAR_1->snd_cwnd = (VAR_1->sackhint.sack_bytes_rexmit +
  (VAR_1->snd_nxt - VAR_1->sack_newdata) +
  VAR_3 * VAR_1->t_maxseg);
 if (VAR_1->snd_cwnd > VAR_1->snd_ssthresh)
  VAR_1->snd_cwnd = VAR_1->snd_ssthresh;
 if (FUNC_1(VAR_1->snd_fack, VAR_1->snd_recover) &&
     VAR_1->snd_fack == VAR_2->th_ack && FUNC_2(&VAR_1->snd_holes)) {
  struct sackhole *VAR_4;






  VAR_4 = FUNC_4(VAR_1, VAR_1->snd_fack,
      VAR_1->snd_recover, ((void*)0));
  if (VAR_4 != ((void*)0))
   VAR_1->snd_fack = VAR_1->snd_recover;
 }
 (void) FUNC_3(VAR_1);
}
