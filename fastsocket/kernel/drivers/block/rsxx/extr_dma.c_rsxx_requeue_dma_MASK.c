
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sw_q_depth; } ;
struct rsxx_dma_ctrl {int queue_lock; int queue; TYPE_1__ stats; } ;
struct rsxx_dma {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rsxx_dma_ctrl *VAR_0,
     struct rsxx_dma *VAR_1)
{




 FUNC_1(&VAR_0->queue_lock);
 VAR_0->stats.sw_q_depth++;
 FUNC_0(&VAR_1->list, &VAR_0->queue);
 FUNC_2(&VAR_0->queue_lock);
}
