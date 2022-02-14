
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int cmd_flags; } ;
struct cfq_queue {TYPE_1__* cfqg; scalar_t__ last_request_pos; int meta_pending; } ;
struct cfq_io_context {int dummy; } ;
struct cfq_data {int busy_queues; int queue; struct cfq_queue* active_queue; int rq_queued; } ;
struct TYPE_2__ {int blkg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cfq_io_context* FUNC_0 (struct request*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct cfq_queue*) ;
 int FUNC_7 (struct cfq_queue*) ;
 int FUNC_8 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_9 (struct cfq_queue*) ;
 int FUNC_10 (struct cfq_data*,struct cfq_queue*) ;
 scalar_t__ FUNC_11 (struct cfq_data*,struct cfq_queue*,struct request*) ;
 int FUNC_12 (struct cfq_data*,struct cfq_queue*,struct cfq_io_context*) ;
 int FUNC_13 (struct cfq_data*,struct cfq_queue*,struct request*) ;
 int FUNC_14 (struct cfq_data*,struct cfq_io_context*) ;

__attribute__((used)) static void
FUNC_15(struct cfq_data *VAR_2, struct cfq_queue *VAR_3,
  struct request *VAR_4)
{
 struct cfq_io_context *VAR_5 = FUNC_0(VAR_4);

 VAR_2->rq_queued++;
 if (VAR_4->cmd_flags & VAR_1)
  VAR_3->meta_pending++;

 FUNC_14(VAR_2, VAR_5);
 FUNC_13(VAR_2, VAR_3, VAR_4);
 FUNC_12(VAR_2, VAR_3, VAR_5);

 VAR_3->last_request_pos = FUNC_3(VAR_4) + FUNC_4(VAR_4);

 if (VAR_3 == VAR_2->active_queue) {
  if (FUNC_6(VAR_3)) {
   if (FUNC_2(VAR_4) > VAR_0 ||
       VAR_2->busy_queues > 1) {
    FUNC_8(VAR_2, VAR_3);
    FUNC_7(VAR_3);
    FUNC_1(VAR_2->queue);
   } else {
    FUNC_5(
      &VAR_3->cfqg->blkg);
    FUNC_9(VAR_3);
   }
  }
 } else if (FUNC_11(VAR_2, VAR_3, VAR_4)) {






  FUNC_10(VAR_2, VAR_3);
  FUNC_1(VAR_2->queue);
 }
}
