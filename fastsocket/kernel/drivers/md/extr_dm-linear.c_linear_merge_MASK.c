
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int (* merge_bvec_fn ) (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;} ;
struct linear_c {TYPE_1__* dev; } ;
struct dm_target {struct linear_c* private; } ;
struct bvec_merge_data {int bi_sector; int bi_bdev; } ;
struct bio_vec {int dummy; } ;
struct TYPE_2__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct dm_target*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_0, struct bvec_merge_data *VAR_1,
   struct bio_vec *VAR_2, int VAR_3)
{
 struct linear_c *VAR_4 = VAR_0->private;
 struct request_queue *VAR_5 = FUNC_0(VAR_4->dev->bdev);

 if (!VAR_5->merge_bvec_fn)
  return VAR_3;

 VAR_1->bi_bdev = VAR_4->dev->bdev;
 VAR_1->bi_sector = FUNC_1(VAR_0, VAR_1->bi_sector);

 return FUNC_2(VAR_3, VAR_5->merge_bvec_fn(VAR_5, VAR_1, VAR_2));
}
