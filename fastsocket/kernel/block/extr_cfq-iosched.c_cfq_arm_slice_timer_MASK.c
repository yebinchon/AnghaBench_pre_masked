
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfq_queue {scalar_t__ slice_end; TYPE_2__* cfqg; scalar_t__ dispatched; int sort_list; } ;
struct cfq_io_context {scalar_t__ ttime_mean; int ttime_samples; TYPE_1__* ioc; } ;
struct cfq_data {long cfq_group_idle; unsigned long cfq_slice_idle; int idle_slice_timer; struct cfq_io_context* active_cic; scalar_t__ hw_tag; int queue; struct cfq_queue* active_queue; } ;
struct TYPE_4__ {int nr_cfqq; int blkg; } ;
struct TYPE_3__ {int nr_tasks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cfq_queue*) ;
 int FUNC_6 (struct cfq_data*,struct cfq_queue*,char*,unsigned long,...) ;
 int FUNC_7 (struct cfq_queue*) ;
 int FUNC_8 (struct cfq_data*,struct cfq_queue*) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct cfq_data *VAR_1)
{
 struct cfq_queue *VAR_2 = VAR_1->active_queue;
 struct cfq_io_context *VAR_3;
 unsigned long VAR_4, VAR_5 = 0;






 if (FUNC_3(VAR_1->queue) && VAR_1->hw_tag)
  return;

 FUNC_1(!FUNC_0(&VAR_2->sort_list));
 FUNC_1(FUNC_5(VAR_2));




 if (!FUNC_8(VAR_1, VAR_2)) {

  if (VAR_1->cfq_group_idle)
   VAR_5 = VAR_1->cfq_group_idle;
  else
   return;
 }




 if (VAR_2->dispatched)
  return;




 VAR_3 = VAR_1->active_cic;
 if (!VAR_3 || !FUNC_2(&VAR_3->ioc->nr_tasks))
  return;






 if (FUNC_10(VAR_3->ttime_samples) &&
     (VAR_2->slice_end - VAR_0 < VAR_3->ttime_mean)) {
  FUNC_6(VAR_1, VAR_2, "Not idling. think_time:%d",
    VAR_3->ttime_mean);
  return;
 }


 if (VAR_5 && VAR_2->cfqg->nr_cfqq > 1)
  return;

 FUNC_7(VAR_2);

 if (VAR_5)
  VAR_4 = VAR_1->cfq_group_idle;
 else
  VAR_4 = VAR_1->cfq_slice_idle;

 FUNC_9(&VAR_1->idle_slice_timer, VAR_0 + VAR_4);
 FUNC_4(&VAR_2->cfqg->blkg);
 FUNC_6(VAR_1, VAR_2, "arm_idle: %lu group_idle: %d", VAR_4,
   VAR_5 ? 1 : 0);
}
