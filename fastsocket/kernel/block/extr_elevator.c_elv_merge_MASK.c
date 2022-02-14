
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct request* last_merge; struct elevator_queue* elevator; } ;
struct request {int dummy; } ;
struct elevator_queue {TYPE_1__* ops; } ;
struct bio {int bi_sector; } ;
struct TYPE_2__ {int (* elevator_merge_fn ) (struct request_queue*,struct request**,struct bio*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request*,struct bio*) ;
 scalar_t__ FUNC_2 (struct request*,struct bio*) ;
 struct request* FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (struct request_queue*,struct request**,struct bio*) ;

int FUNC_5(struct request_queue *VAR_2, struct request **VAR_3, struct bio *VAR_4)
{
 struct elevator_queue *VAR_5 = VAR_2->elevator;
 struct request *VAR_6;
 int VAR_7;




 if (VAR_2->last_merge && FUNC_2(VAR_2->last_merge, VAR_4)) {
  VAR_7 = FUNC_1(VAR_2->last_merge, VAR_4);
  if (VAR_7 != VAR_1) {
   *VAR_3 = VAR_2->last_merge;
   return VAR_7;
  }
 }

 if (FUNC_0(VAR_2))
  return VAR_1;




 VAR_6 = FUNC_3(VAR_2, VAR_4->bi_sector);
 if (VAR_6 && FUNC_2(VAR_6, VAR_4)) {
  *VAR_3 = VAR_6;
  return VAR_0;
 }

 if (VAR_5->ops->elevator_merge_fn)
  return VAR_5->ops->elevator_merge_fn(VAR_2, VAR_3, VAR_4);

 return VAR_1;
}
