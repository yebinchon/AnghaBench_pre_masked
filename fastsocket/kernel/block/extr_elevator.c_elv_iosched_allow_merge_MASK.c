
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {struct request_queue* q; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int (* elevator_allow_merge_fn ) (struct request_queue*,struct request*,struct bio*) ;} ;


 int FUNC_0 (struct request_queue*,struct request*,struct bio*) ;

__attribute__((used)) static int FUNC_1(struct request *VAR_0, struct bio *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0->q;
 struct elevator_queue *VAR_3 = VAR_2->elevator;

 if (VAR_3->ops->elevator_allow_merge_fn)
  return VAR_3->ops->elevator_allow_merge_fn(VAR_2, VAR_0, VAR_1);

 return 1;
}
