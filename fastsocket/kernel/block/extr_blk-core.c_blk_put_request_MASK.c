
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct request {struct request_queue* q; } ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct request *VAR_0)
{
 unsigned long VAR_1;
 struct request_queue *VAR_2 = VAR_0->q;

 FUNC_1(VAR_2->queue_lock, VAR_1);
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2->queue_lock, VAR_1);
}
