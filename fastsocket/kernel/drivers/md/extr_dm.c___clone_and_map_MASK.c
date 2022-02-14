
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target_io {int dummy; } ;
struct dm_target {int dummy; } ;
struct clone_info {scalar_t__ sector; scalar_t__ sector_count; size_t idx; TYPE_1__* md; int map; struct bio* bio; } ;
struct bio_vec {scalar_t__ bv_offset; int bv_len; } ;
struct bio {int bi_rw; int bi_vcnt; struct bio_vec* bi_io_vec; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int bs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clone_info*) ;
 int FUNC_1 (struct clone_info*,struct dm_target*) ;
 int FUNC_2 (struct dm_target*,struct bio*,struct dm_target_io*) ;
 struct dm_target_io* FUNC_3 (struct clone_info*,struct dm_target*) ;
 struct bio* FUNC_4 (struct bio*,scalar_t__,int,int,scalar_t__,int ) ;
 struct dm_target* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct dm_target*) ;
 scalar_t__ FUNC_7 (scalar_t__,struct dm_target*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 struct bio* FUNC_9 (struct bio*,scalar_t__,int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct clone_info *VAR_2)
{
 struct bio *VAR_3, *VAR_4 = VAR_2->bio;
 struct dm_target *VAR_5;
 sector_t VAR_6 = 0, VAR_7;
 struct dm_target_io *VAR_8;

 if (FUNC_12(VAR_4->bi_rw & VAR_0))
  return FUNC_0(VAR_2);

 VAR_5 = FUNC_5(VAR_2->map, VAR_2->sector);
 if (!FUNC_6(VAR_5))
  return -VAR_1;

 VAR_7 = FUNC_7(VAR_2->sector, VAR_5);

 if (VAR_2->sector_count <= VAR_7) {




  FUNC_1(VAR_2, VAR_5);

 } else if (FUNC_11(VAR_4->bi_io_vec[VAR_2->idx].bv_len) <= VAR_7) {




  int VAR_9;
  sector_t VAR_10 = VAR_7;
  sector_t VAR_11;

  for (VAR_9 = VAR_2->idx; VAR_10 && (VAR_9 < VAR_4->bi_vcnt); VAR_9++) {
   VAR_11 = FUNC_11(VAR_4->bi_io_vec[VAR_9].bv_len);

   if (VAR_11 > VAR_10)
    break;

   VAR_10 -= VAR_11;
   VAR_6 += VAR_11;
  }

  VAR_8 = FUNC_3(VAR_2, VAR_5);
  VAR_3 = FUNC_4(VAR_4, VAR_2->sector, VAR_2->idx, VAR_9 - VAR_2->idx, VAR_6,
      VAR_2->md->bs);
  FUNC_2(VAR_5, VAR_3, VAR_8);

  VAR_2->sector += VAR_6;
  VAR_2->sector_count -= VAR_6;
  VAR_2->idx = VAR_9;

 } else {



  struct bio_vec *VAR_12 = VAR_4->bi_io_vec + VAR_2->idx;
  sector_t VAR_13 = FUNC_11(VAR_12->bv_len);
  unsigned int VAR_14 = 0;

  do {
   if (VAR_14) {
    VAR_5 = FUNC_5(VAR_2->map, VAR_2->sector);
    if (!FUNC_6(VAR_5))
     return -VAR_1;

    VAR_7 = FUNC_7(VAR_2->sector, VAR_5);
   }

   VAR_6 = FUNC_8(VAR_13, VAR_7);

   VAR_8 = FUNC_3(VAR_2, VAR_5);
   VAR_3 = FUNC_9(VAR_4, VAR_2->sector, VAR_2->idx,
        VAR_12->bv_offset + VAR_14, VAR_6,
        VAR_2->md->bs);

   FUNC_2(VAR_5, VAR_3, VAR_8);

   VAR_2->sector += VAR_6;
   VAR_2->sector_count -= VAR_6;
   VAR_14 += FUNC_10(VAR_6);
  } while (VAR_13 -= VAR_6);

  VAR_2->idx++;
 }

 return 0;
}
