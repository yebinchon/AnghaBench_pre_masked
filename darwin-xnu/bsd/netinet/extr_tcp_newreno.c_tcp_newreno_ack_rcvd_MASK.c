
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct tcphdr {int dummy; } ;
struct tcpcb {int snd_cwnd; int t_maxseg; int snd_ssthresh; int t_bytes_acked; scalar_t__ snd_nxt; scalar_t__ snd_max; int snd_scale; } ;


 int FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_4(struct tcpcb *VAR_3, struct tcphdr *VAR_4) {
 u_int VAR_5 = VAR_3->snd_cwnd;
 u_int VAR_6 = VAR_3->t_maxseg;
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_4, VAR_3);
 if (VAR_1) {

  if (VAR_5 >= VAR_3->snd_ssthresh) {
   VAR_3->t_bytes_acked += VAR_7;
   if (VAR_3->t_bytes_acked >= VAR_5) {

    VAR_3->t_bytes_acked -= VAR_5;
   } else {

    VAR_6 = 0;
   }
  } else {







   uint32_t VAR_8;
   VAR_8 = (VAR_2 &&
    VAR_3->snd_nxt == VAR_3->snd_max) ? VAR_6 * 2
    : VAR_6;

   VAR_6 = FUNC_1(VAR_7, VAR_8);
  }
 } else {







  if (VAR_5 >= VAR_3->snd_ssthresh)
   VAR_6 = FUNC_2((VAR_6 * VAR_6 / VAR_5), 1);
 }
 VAR_3->snd_cwnd = FUNC_3(VAR_5+VAR_6, VAR_0<<VAR_3->snd_scale);
}
