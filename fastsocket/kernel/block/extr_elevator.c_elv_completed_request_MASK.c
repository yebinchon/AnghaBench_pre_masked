
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int * in_flight; struct elevator_queue* elevator; } ;
struct request {int cmd_flags; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* elevator_completed_req_fn ) (struct request_queue*,struct request*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 size_t FUNC_1 (struct request*) ;
 int FUNC_2 (struct request_queue*,struct request*) ;

void FUNC_3(struct request_queue *VAR_1, struct request *VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_1->elevator;




 if (FUNC_0(VAR_2)) {
  VAR_1->in_flight[FUNC_1(VAR_2)]--;
  if ((VAR_2->cmd_flags & VAR_0) &&
      VAR_3->ops->elevator_completed_req_fn)
   VAR_3->ops->elevator_completed_req_fn(VAR_1, VAR_2);
 }
}
