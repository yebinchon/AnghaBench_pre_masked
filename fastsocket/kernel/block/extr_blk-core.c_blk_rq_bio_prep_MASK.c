
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int cmd_flags; int rq_disk; struct bio* biotail; struct bio* bio; int __data_len; int buffer; int nr_phys_segments; } ;
struct bio {int bi_rw; TYPE_1__* bi_bdev; int bi_size; } ;
struct TYPE_2__ {int bd_disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct request_queue*,struct bio*) ;

void FUNC_3(struct request_queue *VAR_1, struct request *VAR_2,
       struct bio *VAR_3)
{

 VAR_2->cmd_flags |= VAR_3->bi_rw & VAR_0;

 if (FUNC_1(VAR_3)) {
  VAR_2->nr_phys_segments = FUNC_2(VAR_1, VAR_3);
  VAR_2->buffer = FUNC_0(VAR_3);
 }
 VAR_2->__data_len = VAR_3->bi_size;
 VAR_2->bio = VAR_2->biotail = VAR_3;

 if (VAR_3->bi_bdev)
  VAR_2->rq_disk = VAR_3->bi_bdev->bd_disk;
}
