
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct request* last_merge; struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* elevator_merged_fn ) (struct request_queue*,struct request*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*,int) ;

void FUNC_2(struct request_queue *VAR_1, struct request *VAR_2, int VAR_3)
{
 struct elevator_queue *VAR_4 = VAR_1->elevator;

 if (VAR_4->ops->elevator_merged_fn)
  VAR_4->ops->elevator_merged_fn(VAR_1, VAR_2, VAR_3);

 if (VAR_3 == VAR_0)
  FUNC_0(VAR_1, VAR_2);

 VAR_1->last_merge = VAR_2;
}
