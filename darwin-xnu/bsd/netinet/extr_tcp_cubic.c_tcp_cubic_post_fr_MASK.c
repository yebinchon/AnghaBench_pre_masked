
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct tcphdr {int th_ack; } ;
struct tcpcb {int snd_max; scalar_t__ t_lossflightsize; int t_pipeack; int t_maxseg; int snd_ssthresh; int snd_cwnd; TYPE_1__* t_ccstate; } ;
struct TYPE_2__ {scalar_t__ cub_tcp_bytes_acked; scalar_t__ cub_target_win; scalar_t__ cub_tcp_win; } ;


 scalar_t__ FUNC_0 (struct tcpcb*) ;
 scalar_t__ FUNC_1 (int,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_5(struct tcpcb *VAR_0, struct tcphdr *VAR_1)
{
 uint32_t VAR_2 = 0;

 if (FUNC_1(VAR_1->th_ack, VAR_0->snd_max))
  VAR_2 = VAR_0->snd_max - VAR_1->th_ack;

 if (FUNC_0(VAR_0) && VAR_0->t_lossflightsize > 0) {
  u_int32_t VAR_3 = 0, VAR_4;




  VAR_3 = FUNC_4(VAR_0);
  VAR_4 = FUNC_2(VAR_0->t_pipeack, VAR_0->t_lossflightsize);
  if (VAR_3 <= VAR_4) {
   VAR_4 = VAR_4 - VAR_3;
  }





  VAR_4 = FUNC_3(VAR_4, (VAR_0->t_maxseg << 6));
  VAR_4 = VAR_4 >> 1;
  VAR_2 = FUNC_2(VAR_4, VAR_2);
 }
 if (VAR_2 < VAR_0->snd_ssthresh)
  VAR_0->snd_cwnd = FUNC_2(VAR_2, VAR_0->t_maxseg)
    + VAR_0->t_maxseg;
 else
  VAR_0->snd_cwnd = VAR_0->snd_ssthresh;
 VAR_0->t_ccstate->cub_tcp_win = 0;
 VAR_0->t_ccstate->cub_target_win = 0;
 VAR_0->t_ccstate->cub_tcp_bytes_acked = 0;
}
