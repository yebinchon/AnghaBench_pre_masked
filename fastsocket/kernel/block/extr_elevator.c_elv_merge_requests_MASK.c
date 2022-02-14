
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct request* last_merge; int nr_sorted; struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* elevator_merge_req_fn ) (struct request_queue*,struct request*,struct request*) ;} ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*) ;
 int FUNC_2 (struct request_queue*,struct request*,struct request*) ;

void FUNC_3(struct request_queue *VAR_0, struct request *VAR_1,
        struct request *VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_0->elevator;

 if (VAR_3->ops->elevator_merge_req_fn)
  VAR_3->ops->elevator_merge_req_fn(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_2);

 VAR_0->nr_sorted--;
 VAR_0->last_merge = VAR_1;
}
