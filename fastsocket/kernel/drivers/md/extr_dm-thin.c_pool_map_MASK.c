
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union map_info {int dummy; } map_info ;
struct pool_c {TYPE_1__* data_dev; struct pool* pool; } ;
struct pool {int lock; } ;
struct dm_target {struct pool_c* private; } ;
struct bio {int bi_bdev; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_1, struct bio *VAR_2,
      union map_info *VAR_3)
{
 int VAR_4;
 struct pool_c *VAR_5 = VAR_1->private;
 struct pool *VAR_6 = VAR_5->pool;
 unsigned long VAR_7;




 FUNC_0(&VAR_6->lock, VAR_7);
 VAR_2->bi_bdev = VAR_5->data_dev->bdev;
 VAR_4 = VAR_0;
 FUNC_1(&VAR_6->lock, VAR_7);

 return VAR_4;
}
