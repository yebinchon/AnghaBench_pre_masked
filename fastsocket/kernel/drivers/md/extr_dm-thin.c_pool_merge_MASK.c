
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int (* merge_bvec_fn ) (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;} ;
struct pool_c {TYPE_1__* data_dev; } ;
struct dm_target {struct pool_c* private; } ;
struct bvec_merge_data {int bi_bdev; } ;
struct bio_vec {int dummy; } ;
struct TYPE_2__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_0, struct bvec_merge_data *VAR_1,
        struct bio_vec *VAR_2, int VAR_3)
{
 struct pool_c *VAR_4 = VAR_0->private;
 struct request_queue *VAR_5 = FUNC_0(VAR_4->data_dev->bdev);

 if (!VAR_5->merge_bvec_fn)
  return VAR_3;

 VAR_1->bi_bdev = VAR_4->data_dev->bdev;

 return FUNC_1(VAR_3, VAR_5->merge_bvec_fn(VAR_5, VAR_1, VAR_2));
}
