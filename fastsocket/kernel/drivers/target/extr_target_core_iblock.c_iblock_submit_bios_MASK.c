
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int (* unplug_fn ) (struct request_queue*) ;} ;
struct bio_list {int dummy; } ;
struct bio {int bi_bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 struct bio* FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int,struct bio*) ;

__attribute__((used)) static void FUNC_4(struct bio_list *VAR_0, int VAR_1)
{
 struct bio *VAR_2;
 struct request_queue *VAR_3 = ((void*)0);

 while ((VAR_2 = FUNC_1(VAR_0))) {
  FUNC_3(VAR_1, VAR_2);
  VAR_3 = FUNC_0(VAR_2->bi_bdev);
 }

 if (VAR_3 && VAR_3->unplug_fn)
  VAR_3->unplug_fn(VAR_3);
}
