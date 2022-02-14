
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {unsigned int tag_size; unsigned int sector_size; } ;
struct bio {unsigned int bi_size; int bi_bdev; } ;


 int FUNC_0 (int) ;
 struct blk_integrity* FUNC_1 (int ) ;

unsigned int FUNC_2(struct bio *VAR_0)
{
 struct blk_integrity *VAR_1 = FUNC_1(VAR_0->bi_bdev);

 FUNC_0(VAR_0->bi_size == 0);

 return VAR_1->tag_size * (VAR_0->bi_size / VAR_1->sector_size);
}
