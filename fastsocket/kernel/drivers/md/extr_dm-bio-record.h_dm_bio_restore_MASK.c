
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_bio_details {TYPE_2__* bi_io_vec; int bi_flags; int bi_idx; int bi_size; int bi_bdev; int bi_sector; } ;
struct bio {unsigned int bi_vcnt; TYPE_1__* bi_io_vec; int bi_flags; int bi_idx; int bi_size; int bi_bdev; int bi_sector; } ;
struct TYPE_4__ {int bv_offset; int bv_len; } ;
struct TYPE_3__ {int bv_offset; int bv_len; } ;



__attribute__((used)) static inline void FUNC_0(struct dm_bio_details *VAR_0, struct bio *VAR_1)
{
 unsigned VAR_2;

 VAR_1->bi_sector = VAR_0->bi_sector;
 VAR_1->bi_bdev = VAR_0->bi_bdev;
 VAR_1->bi_size = VAR_0->bi_size;
 VAR_1->bi_idx = VAR_0->bi_idx;
 VAR_1->bi_flags = VAR_0->bi_flags;

 for (VAR_2 = 0; VAR_2 < VAR_1->bi_vcnt; VAR_2++) {
  VAR_1->bi_io_vec[VAR_2].bv_len = VAR_0->bi_io_vec[VAR_2].bv_len;
  VAR_1->bi_io_vec[VAR_2].bv_offset = VAR_0->bi_io_vec[VAR_2].bv_offset;
 }
}
