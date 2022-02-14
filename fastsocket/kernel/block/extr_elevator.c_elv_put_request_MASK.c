
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* elevator_put_req_fn ) (struct request*) ;} ;


 int FUNC_0 (struct request*) ;

void FUNC_1(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct elevator_queue *VAR_2 = VAR_0->elevator;

 if (VAR_2->ops->elevator_put_req_fn)
  VAR_2->ops->elevator_put_req_fn(VAR_1);
}
