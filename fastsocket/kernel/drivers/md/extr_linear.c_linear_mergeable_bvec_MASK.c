
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int (* merge_bvec_fn ) (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;struct mddev* queuedata; } ;
struct mddev {int dummy; } ;
struct dev_info {unsigned long end_sector; TYPE_1__* rdev; } ;
struct bvec_merge_data {int bi_size; unsigned long bi_sector; int bi_bdev; } ;
struct bio_vec {int bv_len; } ;
typedef unsigned long sector_t ;
struct TYPE_2__ {unsigned long sectors; int bdev; } ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;
 struct dev_info* FUNC_6 (struct mddev*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct request_queue *VAR_1,
     struct bvec_merge_data *VAR_2,
     struct bio_vec *VAR_3)
{
 struct mddev *VAR_4 = VAR_1->queuedata;
 struct dev_info *VAR_5;
 unsigned long VAR_6, VAR_7 = VAR_2->bi_size >> 9;
 sector_t VAR_8 = VAR_2->bi_sector + FUNC_1(VAR_2->bi_bdev);
 int VAR_9 = VAR_3->bv_len;
 struct request_queue *VAR_10;

 FUNC_3();
 VAR_5 = FUNC_6(VAR_4, VAR_8);
 VAR_6 = VAR_5->end_sector - VAR_8;
 VAR_10 = FUNC_0(VAR_5->rdev->bdev);
 if (VAR_10->merge_bvec_fn) {
  VAR_2->bi_bdev = VAR_5->rdev->bdev;
  VAR_2->bi_sector -= VAR_5->end_sector - VAR_5->rdev->sectors;
  VAR_9 = FUNC_2(VAR_9, VAR_10->merge_bvec_fn(VAR_10, VAR_2,
            VAR_3));
 }
 FUNC_4();

 if (VAR_6 < VAR_7)
  VAR_6 = 0;
 else
  VAR_6 -= VAR_7;

 if (VAR_6 <= (VAR_0 >> 9 ) && VAR_7 == 0)
  return VAR_9;

 if (VAR_6 > (VAR_9 >> 9))
  return VAR_9;
 else
  return VAR_6 << 9;
}
