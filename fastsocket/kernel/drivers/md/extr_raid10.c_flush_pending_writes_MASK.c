
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ head; } ;
struct r10conf {int device_lock; int wait_barrier; TYPE_1__* mddev; scalar_t__ pending_count; int plug; TYPE_2__ pending_bio_list; } ;
struct bio {int bi_rw; int bi_bdev; struct bio* bi_next; } ;
struct TYPE_3__ {int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int ) ;
 struct bio* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct r10conf *VAR_1)
{




 int VAR_2 = 0;

 FUNC_7(&VAR_1->device_lock);

 if (VAR_1->pending_bio_list.head) {
  struct bio *VAR_3;
  VAR_3 = FUNC_2(&VAR_1->pending_bio_list);
  FUNC_6(&VAR_1->plug);
  VAR_1->pending_count = 0;
  FUNC_8(&VAR_1->device_lock);


  FUNC_3(VAR_1->mddev->bitmap);
  FUNC_10(&VAR_1->wait_barrier);

  while (VAR_3) {
   struct bio *VAR_4 = VAR_3->bi_next;
   VAR_3->bi_next = ((void*)0);
   if (FUNC_9((VAR_3->bi_rw & VAR_0) &&
       !FUNC_4(FUNC_0(VAR_3->bi_bdev))))

    FUNC_1(VAR_3, 0);
   else
    FUNC_5(VAR_3);
   VAR_3 = VAR_4;
  }
  VAR_2 = 1;
 } else
  FUNC_8(&VAR_1->device_lock);
 return VAR_2;
}
