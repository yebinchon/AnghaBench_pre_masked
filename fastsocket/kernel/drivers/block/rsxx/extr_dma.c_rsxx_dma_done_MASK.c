
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {scalar_t__ sw_q_depth; int hw_q_depth; } ;
struct TYPE_7__ {size_t idx; struct hw_status* buf; } ;
struct rsxx_dma_ctrl {scalar_t__ e_cnt; int queue_lock; int issue_dma_work; int issue_wq; TYPE_2__ stats; TYPE_3__* card; int id; int activity_timer; TYPE_1__ status; int trackers; } ;
struct rsxx_dma {int laddr; } ;
struct hw_status {int count; scalar_t__ tag; scalar_t__ status; } ;
struct TYPE_9__ {int irq_lock; int eeh_state; int dma_fault; int halt; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ,scalar_t__,scalar_t__,scalar_t__,size_t) ;
 int FUNC_6 (int ,char*,scalar_t__,size_t,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 struct rsxx_dma* FUNC_8 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct rsxx_dma_ctrl*,struct rsxx_dma*,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 (struct rsxx_dma_ctrl*,struct rsxx_dma*,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned long) ;
 scalar_t__ FUNC_22 (int ) ;

__attribute__((used)) static void FUNC_23(struct rsxx_dma_ctrl *VAR_4)
{
 struct rsxx_dma *VAR_5;
 unsigned long VAR_6;
 u16 VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 struct hw_status *VAR_10;

 VAR_10 = VAR_4->status.buf;

 if (FUNC_22(VAR_4->card->halt) ||
     FUNC_22(VAR_4->card->dma_fault) ||
     FUNC_22(VAR_4->card->eeh_state))
  return;

 VAR_7 = FUNC_9(VAR_10[VAR_4->status.idx].count);

 while (VAR_7 == VAR_4->e_cnt) {







  FUNC_13();

  VAR_8 = VAR_10[VAR_4->status.idx].status;
  VAR_9 = VAR_10[VAR_4->status.idx].tag;

  VAR_5 = FUNC_8(VAR_4->trackers, VAR_9);
  if (VAR_5 == ((void*)0)) {
   FUNC_19(&VAR_4->card->irq_lock, VAR_6);
   FUNC_15(VAR_4->card, VAR_0);
   FUNC_21(&VAR_4->card->irq_lock, VAR_6);

   FUNC_6(FUNC_0(VAR_4->card),
    "No tracker for tag %d "
    "(idx %d id %d)\n",
    VAR_9, VAR_4->status.idx, VAR_4->id);
   return;
  }

  FUNC_5(FUNC_0(VAR_4->card),
   "Completing DMA%d"
   "(laddr x%x tag %d st: x%x cnt: x%04x) from idx %d.\n",
   VAR_4->id, VAR_5->laddr, VAR_9, VAR_8, VAR_7,
   VAR_4->status.idx);

  FUNC_2(&VAR_4->stats.hw_q_depth);

  FUNC_10(&VAR_4->activity_timer,
     VAR_3 + VAR_1);

  if (VAR_8)
   FUNC_17(VAR_4, VAR_5, VAR_8);
  else
   FUNC_14(VAR_4, VAR_5, 0);

  FUNC_11(VAR_4->trackers, VAR_9);

  VAR_4->status.idx = (VAR_4->status.idx + 1) &
       VAR_2;
  VAR_4->e_cnt++;

  VAR_7 = FUNC_9(VAR_10[VAR_4->status.idx].count);
 }

 FUNC_7(VAR_4->card);

 if (FUNC_3(&VAR_4->stats.hw_q_depth) == 0)
  FUNC_4(&VAR_4->activity_timer);

 FUNC_19(&VAR_4->card->irq_lock, VAR_6);
 FUNC_16(VAR_4->card, FUNC_1(VAR_4->id));
 FUNC_21(&VAR_4->card->irq_lock, VAR_6);

 FUNC_18(&VAR_4->queue_lock);
 if (VAR_4->stats.sw_q_depth)
  FUNC_12(VAR_4->issue_wq, &VAR_4->issue_dma_work);
 FUNC_20(&VAR_4->queue_lock);
}
