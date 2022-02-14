
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct tcphdr {int dummy; } ;
struct tcpcb {scalar_t__ t_bytes_acked; scalar_t__ snd_cwnd; int snd_scale; scalar_t__ t_maxseg; } ;


 scalar_t__ FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tcpcb*) ;
 void* FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct tcpcb*,struct tcphdr*) ;
 scalar_t__ FUNC_6 (struct tcpcb*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct tcpcb *VAR_2, struct tcphdr *VAR_3)
{
 u_int32_t VAR_4, VAR_5, VAR_6;


 if (FUNC_4(VAR_2) != 0)
  return;

 VAR_2->t_bytes_acked += FUNC_0(VAR_3, VAR_2);

 VAR_6 = FUNC_2(VAR_2);





 VAR_4 = FUNC_6(VAR_2, VAR_6);


 VAR_5 = FUNC_5(VAR_2, VAR_3);

 if (VAR_2->snd_cwnd < VAR_5 &&
     (VAR_1 == 1 ||
     FUNC_1(VAR_2))) {

  if (VAR_2->t_bytes_acked >= VAR_2->snd_cwnd) {
   VAR_2->t_bytes_acked -= VAR_2->snd_cwnd;
   VAR_2->snd_cwnd = FUNC_3(VAR_5, VAR_0 << VAR_2->snd_scale);
  }
 } else {
  if (VAR_4 > VAR_2->snd_cwnd) {







   u_int64_t VAR_7;
   VAR_7 = VAR_2->snd_cwnd * VAR_2->t_maxseg;
   VAR_7 /= (VAR_4 - VAR_2->snd_cwnd);
   if (VAR_7 > 0 &&
       VAR_2->t_bytes_acked >= VAR_7) {
    VAR_2->t_bytes_acked -= VAR_7;
    VAR_2->snd_cwnd =
        FUNC_3((VAR_2->snd_cwnd + VAR_2->t_maxseg),
        VAR_0 << VAR_2->snd_scale);
   }
  }
 }
}
