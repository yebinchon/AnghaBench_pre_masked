
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elevator_queue {int kobj; int sysfs_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* elevator_exit_fn ) (struct elevator_queue*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct elevator_queue*) ;

void FUNC_4(struct elevator_queue *VAR_0)
{
 FUNC_1(&VAR_0->sysfs_lock);
 if (VAR_0->ops->elevator_exit_fn)
  VAR_0->ops->elevator_exit_fn(VAR_0);
 VAR_0->ops = ((void*)0);
 FUNC_2(&VAR_0->sysfs_lock);

 FUNC_0(&VAR_0->kobj);
}
