
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int32_t ;
struct tcpcb {scalar_t__ snd_ssthresh; scalar_t__ t_maxseg; TYPE_1__* t_ccstate; int snd_wnd; int snd_cwnd; } ;
struct TYPE_2__ {scalar_t__ cub_last_max; int cub_epoch_start; float cub_epoch_period; scalar_t__ cub_origin_point; scalar_t__ cub_target_win; } ;


 float VAR_0 ;
 int FUNC_0 (int) ;
 float FUNC_1 (float) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int,int ,int,int ) ;

__attribute__((used)) static uint32_t
FUNC_6(struct tcpcb *VAR_5, u_int32_t VAR_6)
{
 float VAR_7, VAR_8;
 u_int32_t VAR_9, VAR_10;

 VAR_10 = FUNC_4(VAR_5->snd_cwnd, VAR_5->snd_wnd);
 if (VAR_5->t_ccstate->cub_last_max == 0)
  VAR_5->t_ccstate->cub_last_max = VAR_5->snd_ssthresh;

 if (VAR_5->t_ccstate->cub_epoch_start == 0) {





  VAR_5->t_ccstate->cub_epoch_start = VAR_4;
  if (VAR_5->t_ccstate->cub_epoch_start == 0)
   VAR_5->t_ccstate->cub_epoch_start = 1;
  if (VAR_10 < VAR_5->t_ccstate->cub_last_max) {

   FUNC_0(FUNC_2() == VAR_1);






   VAR_7 = (VAR_5->t_ccstate->cub_last_max - VAR_10)
       / VAR_5->t_maxseg / VAR_2;
   VAR_7 = FUNC_1(VAR_7);
   VAR_5->t_ccstate->cub_epoch_period = VAR_7 * VAR_0;

   VAR_5->t_ccstate->cub_origin_point =
    VAR_5->t_ccstate->cub_last_max;
  } else {
   VAR_5->t_ccstate->cub_epoch_period = 0;
   VAR_5->t_ccstate->cub_origin_point = VAR_10;
  }
  VAR_5->t_ccstate->cub_target_win = 0;
 }

 FUNC_0(VAR_5->t_ccstate->cub_origin_point > 0);




 VAR_9 = FUNC_5(VAR_4, 0,
  VAR_5->t_ccstate->cub_epoch_start, 0);

 if (VAR_3)
  VAR_9 += FUNC_3(VAR_3, VAR_6);
 else
  VAR_9 += VAR_6;
 VAR_8 = (VAR_9 - VAR_5->t_ccstate->cub_epoch_period) / VAR_0;
 VAR_8 = VAR_8 * VAR_8 * VAR_8 * (VAR_2 * VAR_5->t_maxseg);

 VAR_5->t_ccstate->cub_target_win = (u_int32_t)(VAR_5->t_ccstate->cub_origin_point + VAR_8);
 return (VAR_5->t_ccstate->cub_target_win);
}
