
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int (* merge_bvec_fn ) (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;struct mddev* queuedata; } ;
struct r1conf {int raid_disks; TYPE_1__* mirrors; } ;
struct mddev {scalar_t__ merge_check_needed; struct r1conf* private; } ;
struct md_rdev {int bdev; scalar_t__ data_offset; int flags; } ;
struct bvec_merge_data {int bi_bdev; scalar_t__ bi_sector; } ;
struct bio_vec {int bv_len; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 struct md_rdev* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct request_queue *VAR_1,
    struct bvec_merge_data *VAR_2,
    struct bio_vec *VAR_3)
{
 struct mddev *VAR_4 = VAR_1->queuedata;
 struct r1conf *VAR_5 = VAR_4->private;
 sector_t VAR_6 = VAR_2->bi_sector + FUNC_1(VAR_2->bi_bdev);
 int VAR_7 = VAR_3->bv_len;

 if (VAR_4->merge_check_needed) {
  int VAR_8;
  FUNC_4();
  for (VAR_8 = 0; VAR_8 < VAR_5->raid_disks * 2; VAR_8++) {
   struct md_rdev *VAR_9 = FUNC_3(
    VAR_5->mirrors[VAR_8].rdev);
   if (VAR_9 && !FUNC_7(VAR_0, &VAR_9->flags)) {
    struct request_queue *VAR_10 =
     FUNC_0(VAR_9->bdev);
    if (VAR_10->merge_bvec_fn) {
     VAR_2->bi_sector = VAR_6 +
      VAR_9->data_offset;
     VAR_2->bi_bdev = VAR_9->bdev;
     VAR_7 = FUNC_2(VAR_7, VAR_10->merge_bvec_fn(
         VAR_10, VAR_2, VAR_3));
    }
   }
  }
  FUNC_5();
 }
 return VAR_7;

}
