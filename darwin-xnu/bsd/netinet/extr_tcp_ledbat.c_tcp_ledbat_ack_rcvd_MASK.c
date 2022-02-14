
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tcphdr {int dummy; } ;
struct tcpcb {scalar_t__ snd_cwnd; scalar_t__ t_maxseg; scalar_t__ t_bytes_acked; scalar_t__ bg_ssthresh; scalar_t__ snd_nxt; scalar_t__ snd_max; } ;


 int FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct tcpcb*,scalar_t__) ;

void
FUNC_3(struct tcpcb *VAR_1, struct tcphdr *VAR_2) {
 u_int VAR_3 = VAR_1->snd_cwnd;
 u_int VAR_4 = VAR_1->t_maxseg;
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_2, VAR_1);
 VAR_1->t_bytes_acked += VAR_5;
 if (VAR_3 >= VAR_1->bg_ssthresh) {

  if (VAR_1->t_bytes_acked < VAR_3) {

   VAR_4 = 0;
  }
 } else {







  u_int VAR_6;

  VAR_6 = (VAR_0 &&
   VAR_1->snd_nxt == VAR_1->snd_max) ? VAR_4 * 2 : VAR_4;

  VAR_4 = FUNC_1(VAR_5, VAR_6);
 }
 if (VAR_1->t_bytes_acked >= VAR_3)
  VAR_1->t_bytes_acked -= VAR_3;
 if (VAR_4 > 0)
  FUNC_2(VAR_1, VAR_4);
}
