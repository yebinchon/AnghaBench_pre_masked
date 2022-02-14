
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {int sort_list; } ;
struct cfq_data {TYPE_1__* queue; int busy_queues; struct cfq_queue* active_queue; } ;
struct TYPE_2__ {int queue_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_data*,char*) ;
 int FUNC_4 (struct cfq_data*) ;
 int FUNC_5 (struct cfq_data*,int) ;
 scalar_t__ FUNC_6 (struct cfq_queue*) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_0)
{
 struct cfq_data *VAR_1 = (struct cfq_data *) VAR_0;
 struct cfq_queue *VAR_2;
 unsigned long VAR_3;
 int VAR_4 = 1;

 FUNC_3(VAR_1, "idle timer fired");

 FUNC_7(VAR_1->queue->queue_lock, VAR_3);

 VAR_2 = VAR_1->active_queue;
 if (VAR_2) {
  VAR_4 = 0;




  if (FUNC_1(VAR_2))
   goto out_kick;




  if (FUNC_6(VAR_2))
   goto expire;





  if (!VAR_1->busy_queues)
   goto out_cont;




  if (!FUNC_0(&VAR_2->sort_list))
   goto out_kick;




  FUNC_2(VAR_2);
 }
expire:
 FUNC_5(VAR_1, VAR_4);
out_kick:
 FUNC_4(VAR_1);
out_cont:
 FUNC_8(VAR_1->queue->queue_lock, VAR_3);
}
