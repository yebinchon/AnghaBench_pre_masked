
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct mmc_queue {int flags; int thread_sem; struct request_queue* queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mmc_queue *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->queue;
 unsigned long VAR_3;

 if (VAR_1->flags & VAR_0) {
  VAR_1->flags &= ~VAR_0;

  FUNC_3(&VAR_1->thread_sem);

  FUNC_1(VAR_2->queue_lock, VAR_3);
  FUNC_0(VAR_2);
  FUNC_2(VAR_2->queue_lock, VAR_3);
 }
}
