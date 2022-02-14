
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ idx; } ;
struct TYPE_4__ {int hw_q_depth; } ;
struct rsxx_dma_ctrl {int id; TYPE_3__* card; int queue_lock; int queue; int activity_timer; scalar_t__ regmap; TYPE_2__ cmd; TYPE_1__ stats; } ;
struct TYPE_6__ {int dma_fault; int eeh_state; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct rsxx_dma_ctrl*,int *,int ) ;
 scalar_t__ FUNC_8 (struct rsxx_dma_ctrl*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_4)
{
 struct rsxx_dma_ctrl *VAR_5 = (struct rsxx_dma_ctrl *)VAR_4;
 int VAR_6;

 if (FUNC_1(&VAR_5->stats.hw_q_depth) == 0 ||
     FUNC_11(VAR_5->card->eeh_state))
  return;

 if (VAR_5->cmd.idx != FUNC_4(VAR_5->regmap + VAR_2)) {




  FUNC_3(FUNC_0(VAR_5->card),
   "SW_CMD_IDX write was lost, re-writing...\n");
  FUNC_5(VAR_5->cmd.idx, VAR_5->regmap + VAR_2);
  FUNC_6(&VAR_5->activity_timer,
     VAR_3 + VAR_1);
 } else {
  FUNC_3(FUNC_0(VAR_5->card),
   "DMA channel %d has stalled, faulting interface.\n",
   VAR_5->id);
  VAR_5->card->dma_fault = 1;


  FUNC_9(&VAR_5->queue_lock);
  VAR_6 = FUNC_7(VAR_5, &VAR_5->queue, VAR_0);
  FUNC_10(&VAR_5->queue_lock);

  VAR_6 += FUNC_8(VAR_5);

  if (VAR_6)
   FUNC_2(FUNC_0(VAR_5->card),
    "Freed %d queued DMAs on channel %d\n",
    VAR_6, VAR_5->id);
 }
}
