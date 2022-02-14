
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__ t_rttcur; int snd_cwnd; int bg_ssthresh; int t_maxseg; scalar_t__ snd_max; scalar_t__ snd_una; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct tcpcb *VAR_4, uint32_t VAR_5) {
 uint32_t VAR_6 = 0, VAR_7 = 0;
 uint32_t VAR_8;

 VAR_8 = FUNC_0(VAR_4);




 if (VAR_8 == 0 || VAR_4->t_rttcur == 0) {
  VAR_4->snd_cwnd += VAR_5;
  goto check_max;
 }

 if (VAR_4->t_rttcur <= (VAR_8 + VAR_2)) {
  if (VAR_4->bg_ssthresh < VAR_4->snd_cwnd)
   VAR_4->bg_ssthresh = VAR_4->snd_cwnd;
  VAR_4->snd_cwnd += VAR_5;

 } else {




  uint32_t VAR_9;

  VAR_9 = VAR_4->snd_cwnd >> 3;
  VAR_4->snd_cwnd -= VAR_9;
  if (VAR_4->snd_cwnd < VAR_1 * VAR_4->t_maxseg)
   VAR_4->snd_cwnd = VAR_1 * VAR_4->t_maxseg;




  if (VAR_4->bg_ssthresh > VAR_4->snd_cwnd)
   VAR_4->bg_ssthresh = VAR_4->snd_cwnd;
 }
check_max:



 VAR_7 = VAR_4->snd_max - VAR_4->snd_una;

 VAR_6 = (VAR_0 * VAR_4->t_maxseg)
  + (VAR_7 << VAR_3);
 VAR_4->snd_cwnd = FUNC_1(VAR_4->snd_cwnd, VAR_6);
 return;
}
