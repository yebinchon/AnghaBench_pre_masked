
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio {int bi_max_vecs; int bi_flags; int bi_idx; int bi_size; int bi_vcnt; int bi_rw; int bi_bdev; int bi_sector; int bi_io_vec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct bio *VAR_1, struct bio *VAR_2)
{
 FUNC_0(VAR_1->bi_io_vec, VAR_2->bi_io_vec,
  VAR_2->bi_max_vecs * sizeof(struct bio_vec));





 VAR_1->bi_sector = VAR_2->bi_sector;
 VAR_1->bi_bdev = VAR_2->bi_bdev;
 VAR_1->bi_flags |= 1 << VAR_0;
 VAR_1->bi_rw = VAR_2->bi_rw;
 VAR_1->bi_vcnt = VAR_2->bi_vcnt;
 VAR_1->bi_size = VAR_2->bi_size;
 VAR_1->bi_idx = VAR_2->bi_idx;
}
