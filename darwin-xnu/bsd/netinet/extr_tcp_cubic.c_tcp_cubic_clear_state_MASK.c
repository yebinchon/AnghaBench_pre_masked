
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {TYPE_1__* t_ccstate; } ;
struct TYPE_2__ {scalar_t__ cub_target_win; scalar_t__ cub_epoch_period; scalar_t__ cub_tcp_bytes_acked; scalar_t__ cub_tcp_win; scalar_t__ cub_origin_point; scalar_t__ cub_epoch_start; scalar_t__ cub_last_max; } ;



__attribute__((used)) static inline void FUNC_0(struct tcpcb *VAR_0)
{
 VAR_0->t_ccstate->cub_last_max = 0;
 VAR_0->t_ccstate->cub_epoch_start = 0;
 VAR_0->t_ccstate->cub_origin_point = 0;
 VAR_0->t_ccstate->cub_tcp_win = 0;
 VAR_0->t_ccstate->cub_tcp_bytes_acked = 0;
 VAR_0->t_ccstate->cub_epoch_period = 0;
 VAR_0->t_ccstate->cub_target_win = 0;
}
