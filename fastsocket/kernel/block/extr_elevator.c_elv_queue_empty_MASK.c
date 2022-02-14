
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int queue_head; struct elevator_queue* elevator; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* elevator_queue_empty_fn ) (struct request_queue*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct request_queue*) ;

int FUNC_2(struct request_queue *VAR_0)
{
 struct elevator_queue *VAR_1 = VAR_0->elevator;

 if (!FUNC_0(&VAR_0->queue_head))
  return 0;

 if (VAR_1->ops->elevator_queue_empty_fn)
  return VAR_1->ops->elevator_queue_empty_fn(VAR_0);

 return 1;
}
