
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; int queue_flags; int limits; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct request_queue *VAR_1, struct request_queue *VAR_2)
{
 FUNC_1(&VAR_1->limits, &VAR_2->limits, 0);

 if (!VAR_1->queue_lock)
  FUNC_0(1);
 else if (!FUNC_5(VAR_0, &VAR_2->queue_flags)) {
  unsigned long VAR_3;
  FUNC_3(VAR_1->queue_lock, VAR_3);
  FUNC_2(VAR_0, VAR_1);
  FUNC_4(VAR_1->queue_lock, VAR_3);
 }
}
