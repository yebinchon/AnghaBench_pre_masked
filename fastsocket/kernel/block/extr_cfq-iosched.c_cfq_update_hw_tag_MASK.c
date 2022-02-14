
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {scalar_t__ dispatched; scalar_t__* queued; } ;
struct cfq_data {scalar_t__ rq_in_driver; scalar_t__ hw_tag_est_depth; int hw_tag; scalar_t__ rq_queued; int hw_tag_samples; struct cfq_queue* active_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct cfq_queue*) ;

__attribute__((used)) static void FUNC_1(struct cfq_data *VAR_1)
{
 struct cfq_queue *VAR_2 = VAR_1->active_queue;

 if (VAR_1->rq_in_driver > VAR_1->hw_tag_est_depth)
  VAR_1->hw_tag_est_depth = VAR_1->rq_in_driver;

 if (VAR_1->hw_tag == 1)
  return;

 if (VAR_1->rq_queued <= VAR_0 &&
     VAR_1->rq_in_driver <= VAR_0)
  return;






 if (VAR_2 && FUNC_0(VAR_2) &&
     VAR_2->dispatched + VAR_2->queued[0] + VAR_2->queued[1] <
     VAR_0 && VAR_1->rq_in_driver < VAR_0)
  return;

 if (VAR_1->hw_tag_samples++ < 50)
  return;

 if (VAR_1->hw_tag_est_depth >= VAR_0)
  VAR_1->hw_tag = 1;
 else
  VAR_1->hw_tag = 0;
}
