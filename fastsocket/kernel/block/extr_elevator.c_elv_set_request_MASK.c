
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {int ** elevator_private; } ;
struct elevator_queue {TYPE_1__* ops; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* elevator_set_req_fn ) (struct request_queue*,struct request*,int ) ;} ;


 int FUNC_0 (struct request_queue*,struct request*,int ) ;

int FUNC_1(struct request_queue *VAR_0, struct request *VAR_1, gfp_t VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_0->elevator;

 if (VAR_3->ops->elevator_set_req_fn)
  return VAR_3->ops->elevator_set_req_fn(VAR_0, VAR_1, VAR_2);

 VAR_1->elevator_private[0] = ((void*)0);
 return 0;
}
