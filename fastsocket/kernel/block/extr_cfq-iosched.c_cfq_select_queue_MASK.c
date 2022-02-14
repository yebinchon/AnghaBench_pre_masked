
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {TYPE_1__* cfqg; scalar_t__ dispatched; int new_cfqq; int sort_list; } ;
struct cfq_data {scalar_t__ cfq_group_idle; int idle_slice_timer; int rq_queued; struct cfq_queue* active_queue; } ;
struct TYPE_2__ {int nr_cfqq; scalar_t__ dispatched; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct cfq_queue*) ;
 scalar_t__ FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_data*) ;
 struct cfq_queue* FUNC_4 (struct cfq_data*,struct cfq_queue*) ;
 struct cfq_queue* FUNC_5 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_6 (struct cfq_queue*,struct cfq_queue*) ;
 scalar_t__ FUNC_7 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_8 (struct cfq_data*,int ) ;
 scalar_t__ FUNC_9 (struct cfq_queue*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static struct cfq_queue *FUNC_11(struct cfq_data *VAR_0)
{
 struct cfq_queue *VAR_1, *VAR_2 = ((void*)0);

 VAR_1 = VAR_0->active_queue;
 if (!VAR_1)
  goto new_queue;

 if (!VAR_0->rq_queued)
  return ((void*)0);




 if (FUNC_2(VAR_1) && !FUNC_0(&VAR_1->sort_list))
  goto expire;




 if (FUNC_9(VAR_1) && !FUNC_1(VAR_1)) {
  if (VAR_1->cfqg->nr_cfqq == 1 && FUNC_0(&VAR_1->sort_list)
      && VAR_1->dispatched && FUNC_7(VAR_0, VAR_1)) {
   VAR_1 = ((void*)0);
   goto keep_queue;
  } else
   goto check_group_idle;
 }





 if (!FUNC_0(&VAR_1->sort_list))
  goto keep_queue;







 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2) {
  if (!VAR_1->new_cfqq)
   FUNC_6(VAR_1, VAR_2);
  goto expire;
 }






 if (FUNC_10(&VAR_0->idle_slice_timer)) {
  VAR_1 = ((void*)0);
  goto keep_queue;
 }

 if (VAR_1->dispatched && FUNC_7(VAR_0, VAR_1)) {
  VAR_1 = ((void*)0);
  goto keep_queue;
 }





check_group_idle:
 if (VAR_0->cfq_group_idle && VAR_1->cfqg->nr_cfqq == 1
     && VAR_1->cfqg->dispatched) {
  VAR_1 = ((void*)0);
  goto keep_queue;
 }

expire:
 FUNC_8(VAR_0, 0);
new_queue:




 if (!VAR_2)
  FUNC_3(VAR_0);

 VAR_1 = FUNC_5(VAR_0, VAR_2);
keep_queue:
 return VAR_1;
}
