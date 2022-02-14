
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int dummy; } ;
struct thin_c {int lock; struct bio_list deferred_bio_list; scalar_t__ requeue_mode; struct pool* pool; } ;
struct pool {int (* process_bio ) (struct thin_c*,struct bio*) ;int (* process_discard ) (struct thin_c*,struct bio*) ;} ;
struct bio {int bi_rw; } ;


 int VAR_0 ;
 int FUNC_0 (struct thin_c*) ;
 int FUNC_1 (struct bio_list*,struct bio*) ;
 scalar_t__ FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct bio_list*) ;
 int FUNC_4 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_5 (struct bio_list*) ;
 scalar_t__ FUNC_6 (struct pool*) ;
 int FUNC_7 (struct thin_c*,struct bio_list*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct thin_c*,struct bio*) ;
 int FUNC_11 (struct thin_c*,struct bio*) ;

__attribute__((used)) static void FUNC_12(struct thin_c *VAR_1)
{
 struct pool *VAR_2 = VAR_1->pool;
 unsigned long VAR_3;
 struct bio *VAR_4;
 struct bio_list VAR_5;

 if (VAR_1->requeue_mode) {
  FUNC_7(VAR_1, &VAR_1->deferred_bio_list);
  return;
 }

 FUNC_3(&VAR_5);

 FUNC_8(&VAR_1->lock, VAR_3);

 if (FUNC_2(&VAR_1->deferred_bio_list)) {
  FUNC_9(&VAR_1->lock, VAR_3);
  return;
 }

 FUNC_0(VAR_1);

 FUNC_4(&VAR_5, &VAR_1->deferred_bio_list);
 FUNC_3(&VAR_1->deferred_bio_list);

 FUNC_9(&VAR_1->lock, VAR_3);

 while ((VAR_4 = FUNC_5(&VAR_5))) {





  if (FUNC_6(VAR_2)) {
   FUNC_8(&VAR_1->lock, VAR_3);
   FUNC_1(&VAR_1->deferred_bio_list, VAR_4);
   FUNC_4(&VAR_1->deferred_bio_list, &VAR_5);
   FUNC_9(&VAR_1->lock, VAR_3);
   break;
  }

  if (VAR_4->bi_rw & VAR_0)
   VAR_2->process_discard(VAR_1, VAR_4);
  else
   VAR_2->process_bio(VAR_1, VAR_4);
 }
}
