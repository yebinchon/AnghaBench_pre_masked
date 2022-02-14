
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma_addr; int buf; } ;
struct TYPE_3__ {int dma_addr; int buf; } ;
struct rsxx_dma_ctrl {TYPE_2__ cmd; TYPE_1__ status; int trackers; int queue_lock; int queue; int activity_timer; int * done_wq; int * issue_wq; } ;
struct rsxx_cardinfo {int n_targets; int dev; struct rsxx_dma_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct rsxx_dma_ctrl*,int *,int ) ;
 int FUNC_4 (struct rsxx_dma_ctrl*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct rsxx_cardinfo *VAR_3)
{
 struct rsxx_dma_ctrl *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->n_targets; VAR_5++) {
  VAR_4 = &VAR_3->ctrl[VAR_5];

  if (VAR_4->issue_wq) {
   FUNC_1(VAR_4->issue_wq);
   VAR_4->issue_wq = ((void*)0);
  }

  if (VAR_4->done_wq) {
   FUNC_1(VAR_4->done_wq);
   VAR_4->done_wq = ((void*)0);
  }

  if (FUNC_7(&VAR_4->activity_timer))
   FUNC_0(&VAR_4->activity_timer);


  FUNC_5(&VAR_4->queue_lock);
  FUNC_3(VAR_4, &VAR_4->queue, VAR_1);
  FUNC_6(&VAR_4->queue_lock);

  FUNC_4(VAR_4);

  FUNC_8(VAR_4->trackers);

  FUNC_2(VAR_3->dev, VAR_2,
        VAR_4->status.buf, VAR_4->status.dma_addr);
  FUNC_2(VAR_3->dev, VAR_0,
        VAR_4->cmd.buf, VAR_4->cmd.dma_addr);
 }
}
