
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; int * queuedata; } ;
struct mmc_queue {int * card; int * bounce_buf; int * sg; int * bounce_sg; int thread; struct request_queue* queue; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_queue*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

void FUNC_6(struct mmc_queue *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->queue;
 unsigned long VAR_2;


 FUNC_3(VAR_0);


 FUNC_2(VAR_0->thread);


 FUNC_4(VAR_1->queue_lock, VAR_2);
 VAR_1->queuedata = ((void*)0);
 FUNC_0(VAR_1);
 FUNC_5(VAR_1->queue_lock, VAR_2);

  if (VAR_0->bounce_sg)
   FUNC_1(VAR_0->bounce_sg);
  VAR_0->bounce_sg = ((void*)0);

 FUNC_1(VAR_0->sg);
 VAR_0->sg = ((void*)0);

 if (VAR_0->bounce_buf)
  FUNC_1(VAR_0->bounce_buf);
 VAR_0->bounce_buf = ((void*)0);

 VAR_0->card = ((void*)0);
}
