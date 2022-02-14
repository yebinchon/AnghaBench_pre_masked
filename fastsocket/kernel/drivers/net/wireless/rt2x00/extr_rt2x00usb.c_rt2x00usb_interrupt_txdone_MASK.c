
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {scalar_t__ status; scalar_t__ context; } ;
struct rt2x00_dev {int txdone_work; int workqueue; int txstatus_fifo; int cap_flags; TYPE_3__* ops; } ;
struct queue_entry {int flags; TYPE_1__* queue; } ;
struct TYPE_6__ {TYPE_2__* lib; } ;
struct TYPE_5__ {int (* tx_dma_done ) (struct queue_entry*) ;} ;
struct TYPE_4__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct queue_entry*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct queue_entry*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_3)
{
 struct queue_entry *VAR_4 = (struct queue_entry *)VAR_3->context;
 struct rt2x00_dev *VAR_5 = VAR_4->queue->rt2x00dev;

 if (!FUNC_5(VAR_1, &VAR_4->flags))
  return;



 if (VAR_3->status)
  FUNC_3(VAR_0, &VAR_4->flags);



 FUNC_2(VAR_4);

 if (VAR_5->ops->lib->tx_dma_done)
  VAR_5->ops->lib->tx_dma_done(VAR_4);




 if (!FUNC_5(VAR_2, &VAR_5->cap_flags) ||
     !FUNC_0(&VAR_5->txstatus_fifo))
  FUNC_1(VAR_5->workqueue, &VAR_5->txdone_work);
}
