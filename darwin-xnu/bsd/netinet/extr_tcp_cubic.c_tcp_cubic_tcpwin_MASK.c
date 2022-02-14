
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcphdr {int dummy; } ;
struct tcpcb {scalar_t__ t_maxseg; TYPE_1__* t_ccstate; int snd_wnd; int snd_cwnd; } ;
struct TYPE_2__ {scalar_t__ cub_tcp_win; scalar_t__ cub_tcp_bytes_acked; } ;


 scalar_t__ FUNC_0 (struct tcphdr*,struct tcpcb*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct tcpcb *VAR_0, struct tcphdr *VAR_1)
{
 if (VAR_0->t_ccstate->cub_tcp_win == 0) {
  VAR_0->t_ccstate->cub_tcp_win = FUNC_1(VAR_0->snd_cwnd, VAR_0->snd_wnd);
  VAR_0->t_ccstate->cub_tcp_bytes_acked = 0;
 } else {
  VAR_0->t_ccstate->cub_tcp_bytes_acked +=
      FUNC_0(VAR_1, VAR_0);
  if (VAR_0->t_ccstate->cub_tcp_bytes_acked >=
      VAR_0->t_ccstate->cub_tcp_win) {
   VAR_0->t_ccstate->cub_tcp_bytes_acked -=
       VAR_0->t_ccstate->cub_tcp_win;
   VAR_0->t_ccstate->cub_tcp_win += VAR_0->t_maxseg;
  }
 }
 return (VAR_0->t_ccstate->cub_tcp_win);
}
