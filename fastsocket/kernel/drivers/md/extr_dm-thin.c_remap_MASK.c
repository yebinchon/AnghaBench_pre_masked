
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool_dev; struct pool* pool; } ;
struct pool {int sectors_per_block_shift; int sectors_per_block; } ;
struct bio {int bi_sector; int bi_bdev; } ;
typedef int sector_t ;
typedef int dm_block_t ;
struct TYPE_2__ {int bdev; } ;


 scalar_t__ FUNC_0 (struct pool*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct thin_c *VAR_0, struct bio *VAR_1, dm_block_t VAR_2)
{
 struct pool *VAR_3 = VAR_0->pool;
 sector_t VAR_4 = VAR_1->bi_sector;

 VAR_1->bi_bdev = VAR_0->pool_dev->bdev;
 if (FUNC_0(VAR_3))
  VAR_1->bi_sector = (VAR_2 << VAR_3->sectors_per_block_shift) |
    (VAR_4 & (VAR_3->sectors_per_block - 1));
 else
  VAR_1->bi_sector = (VAR_2 * VAR_3->sectors_per_block) +
     FUNC_1(VAR_4, VAR_3->sectors_per_block);
}
