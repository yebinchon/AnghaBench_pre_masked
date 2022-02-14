
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_head; struct request* boundary_rq; int end_sector; int nr_sorted; struct request* last_merge; } ;
struct request {int queuelist; } ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct request*) ;

void FUNC_3(struct request_queue *VAR_0, struct request *VAR_1)
{
 if (VAR_0->last_merge == VAR_1)
  VAR_0->last_merge = ((void*)0);

 FUNC_0(VAR_0, VAR_1);

 VAR_0->nr_sorted--;

 VAR_0->end_sector = FUNC_2(VAR_1);
 VAR_0->boundary_rq = VAR_1;
 FUNC_1(&VAR_1->queuelist, &VAR_0->queue_head);
}
