
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int tcp_seq ;
struct tcphdr {int th_ack; } ;
struct tcpcb {scalar_t__ t_maxseg; scalar_t__ snd_cwnd; int snd_nxt; int t_flags; scalar_t__ t_rtttime; scalar_t__* t_timer; } ;


 scalar_t__ FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_3, struct tcphdr *VAR_4)
{
  tcp_seq VAR_5 = VAR_3->snd_nxt;
  u_int32_t VAR_6 = VAR_3->snd_cwnd;
  VAR_3->t_timer[VAR_1] = 0;
  VAR_3->t_timer[VAR_0] = 0;
  VAR_3->t_rtttime = 0;
  VAR_3->snd_nxt = VAR_4->th_ack;





  VAR_3->snd_cwnd = VAR_3->t_maxseg + FUNC_0(VAR_4, VAR_3);
  VAR_3->t_flags |= VAR_2;
  (void) FUNC_2(VAR_3);
  VAR_3->snd_cwnd = VAR_6;
  if (FUNC_1(VAR_5, VAR_3->snd_nxt))
   VAR_3->snd_nxt = VAR_5;




  if (VAR_3->snd_cwnd > FUNC_0(VAR_4, VAR_3))
   VAR_3->snd_cwnd -= FUNC_0(VAR_4, VAR_3);
  else
   VAR_3->snd_cwnd = 0;
  VAR_3->snd_cwnd += VAR_3->t_maxseg;
}
