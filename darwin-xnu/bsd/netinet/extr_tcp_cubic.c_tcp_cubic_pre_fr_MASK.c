
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcpcb {int t_flagsext; int t_lossflightsize; int snd_max; int snd_una; int t_maxseg; int snd_ssthresh; TYPE_1__* t_ccstate; int t_pipeack; int snd_wnd; int snd_cwnd; } ;
typedef int int32_t ;
struct TYPE_2__ {int cub_last_max; int cub_avg_lastmax; int cub_mean_dev; scalar_t__ cub_tcp_bytes_acked; scalar_t__ cub_target_win; scalar_t__ cub_tcp_win; scalar_t__ cub_epoch_start; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tcpcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_4)
{
 u_int32_t VAR_5, VAR_6;
 int32_t VAR_7;
 VAR_4->t_ccstate->cub_epoch_start = 0;
 VAR_4->t_ccstate->cub_tcp_win = 0;
 VAR_4->t_ccstate->cub_target_win = 0;
 VAR_4->t_ccstate->cub_tcp_bytes_acked = 0;

 VAR_5 = FUNC_1(VAR_4->snd_cwnd, VAR_4->snd_wnd);
 if (VAR_4->t_flagsext & VAR_0) {
  VAR_4->t_lossflightsize = VAR_4->snd_max - VAR_4->snd_una;
  VAR_5 = (FUNC_0(VAR_4->t_pipeack, VAR_4->t_lossflightsize)) >> 1;
 } else {
  VAR_4->t_lossflightsize = 0;
 }
 if (VAR_5 < VAR_4->t_ccstate->cub_last_max &&
  VAR_2 == 1)
  VAR_4->t_ccstate->cub_last_max = (u_int32_t)(VAR_5 *
   VAR_3);
 else
  VAR_4->t_ccstate->cub_last_max = VAR_5;

 if (VAR_4->t_ccstate->cub_last_max == 0) {





  VAR_4->t_ccstate->cub_last_max = VAR_4->snd_max - VAR_4->snd_una;
 }





 if (VAR_4->t_ccstate->cub_avg_lastmax == 0) {
  VAR_4->t_ccstate->cub_avg_lastmax = VAR_4->t_ccstate->cub_last_max;
 } else {




  VAR_6 = VAR_4->t_ccstate->cub_avg_lastmax;
  VAR_6 = (VAR_6 << 6) - VAR_6;
  VAR_4->t_ccstate->cub_avg_lastmax =
      (VAR_6 + VAR_4->t_ccstate->cub_last_max) >> 6;
 }


 VAR_7 = VAR_4->t_ccstate->cub_avg_lastmax - VAR_4->t_ccstate->cub_last_max;


 if (VAR_7 < 0)
  VAR_7 = -VAR_7;

 if (VAR_4->t_ccstate->cub_mean_dev == 0) {
  VAR_4->t_ccstate->cub_mean_dev = VAR_7;
 } else {
  VAR_7 = VAR_7 + ((VAR_4->t_ccstate->cub_mean_dev << 4)
      - VAR_4->t_ccstate->cub_mean_dev);
  VAR_4->t_ccstate->cub_mean_dev = VAR_7 >> 4;
 }


 VAR_5 = (u_int32_t)(VAR_5 - (VAR_5 * VAR_1));
 VAR_5 = (VAR_5 / VAR_4->t_maxseg);
 if (VAR_5 < 2)
  VAR_5 = 2;
 VAR_4->snd_ssthresh = VAR_5 * VAR_4->t_maxseg;
 FUNC_2(VAR_4);
}
