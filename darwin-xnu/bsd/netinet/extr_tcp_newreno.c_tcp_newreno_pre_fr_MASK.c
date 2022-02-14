
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpcb {int t_maxseg; int snd_ssthresh; int snd_cwnd; int snd_wnd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tcpcb*) ;

void
FUNC_2(struct tcpcb *VAR_0) {

 uint32_t VAR_1;

 VAR_1 = FUNC_0(VAR_0->snd_wnd, VAR_0->snd_cwnd) /
  2 / VAR_0->t_maxseg;
 if ( VAR_1 < 2 )
  VAR_1 = 2;
 VAR_0->snd_ssthresh = VAR_1 * VAR_0->t_maxseg;
 FUNC_1(VAR_0);

}
