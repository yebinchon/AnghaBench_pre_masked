
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfq_queue {int* queued; TYPE_1__* next_rq; } ;
struct cfq_io_context {scalar_t__ ttime_mean; int ttime_samples; TYPE_2__* ioc; } ;
struct cfq_data {scalar_t__ cfq_slice_idle; } ;
struct TYPE_4__ {int nr_tasks; } ;
struct TYPE_3__ {int cmd_flags; } ;


 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_queue*) ;
 scalar_t__ FUNC_5 (struct cfq_queue*) ;
 int FUNC_6 (struct cfq_queue*) ;
 int FUNC_7 (struct cfq_data*,struct cfq_queue*,char*,int) ;
 int FUNC_8 (struct cfq_queue*) ;
 int FUNC_9 (struct cfq_queue*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct cfq_data *VAR_1, struct cfq_queue *VAR_2,
         struct cfq_io_context *VAR_3)
{
 int VAR_4, VAR_5;




 if (!FUNC_4(VAR_2) || FUNC_5(VAR_2))
  return;

 VAR_5 = VAR_4 = FUNC_3(VAR_2);

 if (VAR_2->queued[0] + VAR_2->queued[1] >= 4)
  FUNC_8(VAR_2);

 if (VAR_2->next_rq && (VAR_2->next_rq->cmd_flags & VAR_0))
  VAR_5 = 0;
 else if (!FUNC_1(&VAR_3->ioc->nr_tasks) || !VAR_1->cfq_slice_idle ||
     (!FUNC_2(VAR_2) && FUNC_0(VAR_2)))
  VAR_5 = 0;
 else if (FUNC_10(VAR_3->ttime_samples)) {
  if (VAR_3->ttime_mean > VAR_1->cfq_slice_idle)
   VAR_5 = 0;
  else
   VAR_5 = 1;
 }

 if (VAR_4 != VAR_5) {
  FUNC_7(VAR_1, VAR_2, "idle=%d", VAR_5);
  if (VAR_5)
   FUNC_9(VAR_2);
  else
   FUNC_6(VAR_2);
 }
}
