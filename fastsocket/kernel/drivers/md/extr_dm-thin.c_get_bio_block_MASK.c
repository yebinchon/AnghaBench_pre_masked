
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; } ;
struct pool {int sectors_per_block_shift; int sectors_per_block; } ;
struct bio {int bi_sector; } ;
typedef int sector_t ;
typedef int dm_block_t ;


 scalar_t__ FUNC_0 (struct pool*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static dm_block_t FUNC_2(struct thin_c *VAR_0, struct bio *VAR_1)
{
 struct pool *VAR_2 = VAR_0->pool;
 sector_t VAR_3 = VAR_1->bi_sector;

 if (FUNC_0(VAR_2))
  VAR_3 >>= VAR_2->sectors_per_block_shift;
 else
  (void) FUNC_1(VAR_3, VAR_2->sectors_per_block);

 return VAR_3;
}
