
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio {int refcount; int bio_lock; struct bio* bio_list; int * waiter; } ;
struct bio {struct bio* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct bio *FUNC_4(struct dio *VAR_2)
{
 unsigned long VAR_3;
 struct bio *VAR_4 = ((void*)0);

 FUNC_2(&VAR_2->bio_lock, VAR_3);







 while (VAR_2->refcount > 1 && VAR_2->bio_list == ((void*)0)) {
  FUNC_0(VAR_0);
  VAR_2->waiter = VAR_1;
  FUNC_3(&VAR_2->bio_lock, VAR_3);
  FUNC_1();

  FUNC_2(&VAR_2->bio_lock, VAR_3);
  VAR_2->waiter = ((void*)0);
 }
 if (VAR_2->bio_list) {
  VAR_4 = VAR_2->bio_list;
  VAR_2->bio_list = VAR_4->bi_private;
 }
 FUNC_3(&VAR_2->bio_lock, VAR_3);
 return VAR_4;
}
