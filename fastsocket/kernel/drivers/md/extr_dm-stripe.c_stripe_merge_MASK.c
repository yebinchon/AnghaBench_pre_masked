
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct stripe_c {TYPE_2__* stripe; } ;
struct request_queue {int (* merge_bvec_fn ) (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;} ;
struct dm_target {struct stripe_c* private; } ;
struct bvec_merge_data {scalar_t__ bi_sector; int bi_bdev; } ;
struct bio_vec {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ physical_start; TYPE_1__* dev; } ;
struct TYPE_3__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct stripe_c*,scalar_t__,size_t*,scalar_t__*) ;
 int FUNC_3 (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_0, struct bvec_merge_data *VAR_1,
   struct bio_vec *VAR_2, int VAR_3)
{
 struct stripe_c *VAR_4 = VAR_0->private;
 sector_t VAR_5 = VAR_1->bi_sector;
 uint32_t VAR_6;
 struct request_queue *VAR_7;

 FUNC_2(VAR_4, VAR_5, &VAR_6, &VAR_5);

 VAR_7 = FUNC_0(VAR_4->stripe[VAR_6].dev->bdev);
 if (!VAR_7->merge_bvec_fn)
  return VAR_3;

 VAR_1->bi_bdev = VAR_4->stripe[VAR_6].dev->bdev;
 VAR_1->bi_sector = VAR_4->stripe[VAR_6].physical_start + VAR_5;

 return FUNC_1(VAR_3, VAR_7->merge_bvec_fn(VAR_7, VAR_1, VAR_2));
}
