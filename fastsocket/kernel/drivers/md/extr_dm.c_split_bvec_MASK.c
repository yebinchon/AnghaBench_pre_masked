
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {unsigned int bv_offset; int bv_len; } ;
struct bio_set {int dummy; } ;
struct bio {int bi_vcnt; int bi_flags; int bi_size; struct bio_vec* bi_io_vec; int bi_rw; int bi_bdev; int bi_sector; int bi_destructor; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ,int,struct bio_set*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,struct bio*,int ,struct bio_set*) ;
 int FUNC_3 (struct bio*,int ,unsigned int) ;
 int FUNC_4 (struct bio*,unsigned short,unsigned int) ;
 int VAR_2 ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static struct bio *FUNC_6(struct bio *VAR_3, sector_t VAR_4,
         unsigned short VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, struct bio_set *VAR_8)
{
 struct bio *VAR_9;
 struct bio_vec *VAR_10 = VAR_3->bi_io_vec + VAR_5;

 VAR_9 = FUNC_0(VAR_1, 1, VAR_8);
 VAR_9->bi_destructor = VAR_2;
 *VAR_9->bi_io_vec = *VAR_10;

 VAR_9->bi_sector = VAR_4;
 VAR_9->bi_bdev = VAR_3->bi_bdev;
 VAR_9->bi_rw = VAR_3->bi_rw;
 VAR_9->bi_vcnt = 1;
 VAR_9->bi_size = FUNC_5(VAR_7);
 VAR_9->bi_io_vec->bv_offset = VAR_6;
 VAR_9->bi_io_vec->bv_len = VAR_9->bi_size;
 VAR_9->bi_flags |= 1 << VAR_0;

 if (FUNC_1(VAR_3)) {
  FUNC_2(VAR_9, VAR_3, VAR_1, VAR_8);
  FUNC_3(VAR_9,
       FUNC_4(VAR_3, VAR_5, VAR_6), VAR_7);
 }

 return VAR_9;
}
