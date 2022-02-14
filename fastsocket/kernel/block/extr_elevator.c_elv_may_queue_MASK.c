
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* elevator_may_queue_fn ) (struct request_queue*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,int) ;

int FUNC_1(struct request_queue *VAR_1, int VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_1->elevator;

 if (VAR_3->ops->elevator_may_queue_fn)
  return VAR_3->ops->elevator_may_queue_fn(VAR_1, VAR_2);

 return VAR_0;
}
