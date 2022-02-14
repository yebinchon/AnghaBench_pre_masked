
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {scalar_t__ reap_counter; } ;
struct dio {int bio_lock; struct bio* bio_list; } ;
struct bio {struct bio* bi_private; } ;


 int FUNC_0 (struct dio*,struct bio*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct dio *VAR_0, struct dio_submit *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->reap_counter++ >= 64) {
  while (VAR_0->bio_list) {
   unsigned long VAR_3;
   struct bio *VAR_4;
   int VAR_5;

   FUNC_1(&VAR_0->bio_lock, VAR_3);
   VAR_4 = VAR_0->bio_list;
   VAR_0->bio_list = VAR_4->bi_private;
   FUNC_2(&VAR_0->bio_lock, VAR_3);
   VAR_5 = FUNC_0(VAR_0, VAR_4);
   if (VAR_2 == 0)
    VAR_2 = VAR_5;
  }
  VAR_1->reap_counter = 0;
 }
 return VAR_2;
}
