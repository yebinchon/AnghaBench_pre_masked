
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int end_io; } ;
struct omap_msg_tx_data {void* arg; int msg; } ;
struct omap_mbox {TYPE_1__* txq; } ;
typedef int mbox_msg_t ;
struct TYPE_2__ {int work; struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct request* FUNC_0 (struct request_queue*,int ,int ) ;
 int FUNC_1 (struct request_queue*,struct request*,int ,struct omap_msg_tx_data*) ;
 int FUNC_2 (struct omap_msg_tx_data*) ;
 struct omap_msg_tx_data* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct omap_mbox *VAR_4, mbox_msg_t VAR_5, void* VAR_6)
{
 struct omap_msg_tx_data *VAR_7;
 struct request *VAR_8;
 struct request_queue *VAR_9 = VAR_4->txq->queue;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (FUNC_5(!VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_9, VAR_2, VAR_1);
 if (FUNC_5(!VAR_8)) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 VAR_7->msg = VAR_5;
 VAR_7->arg = VAR_6;
 VAR_8->end_io = VAR_3;
 FUNC_1(VAR_9, VAR_8, 0, VAR_7);

 FUNC_4(&VAR_4->txq->work);
 return 0;
}
