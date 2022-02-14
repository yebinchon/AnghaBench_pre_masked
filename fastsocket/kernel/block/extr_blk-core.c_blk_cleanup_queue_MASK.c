
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ elevator; int sysfs_lock; int __queue_lock; int * queue_lock; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct request_queue*) ;
 int FUNC_6 (int ,struct request_queue*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct request_queue *VAR_2)
{
 spinlock_t *VAR_3 = VAR_2->queue_lock;


 FUNC_3(&VAR_2->sysfs_lock);
 FUNC_6(VAR_0, VAR_2);

 FUNC_7(VAR_3);
 FUNC_5(VAR_1, VAR_2);
 FUNC_5(VAR_0, VAR_2);

 if (VAR_2->queue_lock != &VAR_2->__queue_lock)
  VAR_2->queue_lock = &VAR_2->__queue_lock;

 FUNC_8(VAR_3);
 FUNC_4(&VAR_2->sysfs_lock);






 if (VAR_2->elevator)
  FUNC_0(VAR_2, 1);


 FUNC_2(VAR_2);


 FUNC_1(VAR_2);
}
