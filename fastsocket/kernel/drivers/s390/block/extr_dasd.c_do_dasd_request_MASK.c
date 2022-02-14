
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct dasd_block* queuedata; } ;
struct dasd_block {int queue_lock; } ;


 int FUNC_0 (struct dasd_block*) ;
 int FUNC_1 (struct dasd_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_0)
{
 struct dasd_block *VAR_1;

 VAR_1 = VAR_0->queuedata;
 FUNC_2(&VAR_1->queue_lock);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->queue_lock);
}
