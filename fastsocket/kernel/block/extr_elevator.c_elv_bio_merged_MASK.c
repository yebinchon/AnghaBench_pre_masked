
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int (* elevator_bio_merged_fn ) (struct request_queue*,struct request*,struct bio*) ;} ;


 int FUNC_0 (struct request_queue*,struct request*,struct bio*) ;

void FUNC_1(struct request_queue *VAR_0, struct request *VAR_1,
   struct bio *VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_0->elevator;

 if (VAR_3->ops->elevator_bio_merged_fn)
  VAR_3->ops->elevator_bio_merged_fn(VAR_0, VAR_1, VAR_2);
}
