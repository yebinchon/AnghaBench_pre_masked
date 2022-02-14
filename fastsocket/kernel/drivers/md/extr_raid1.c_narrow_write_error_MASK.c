
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r1conf {TYPE_1__* mirrors; } ;
struct r1bio {int sectors; int sector; int behind_page_count; TYPE_3__* master_bio; struct bio_vec* behind_bvecs; int state; struct mddev* mddev; } ;
struct mddev {struct r1conf* private; } ;
struct TYPE_5__ {int shift; } ;
struct md_rdev {int bdev; scalar_t__ data_offset; TYPE_2__ badblocks; } ;
struct bio_vec {int * bv_page; } ;
struct bio {int bi_sector; int bi_vcnt; int bi_size; int bi_idx; int bi_bdev; int bi_rw; int bi_io_vec; } ;
typedef int sector_t ;
struct TYPE_6__ {int bi_vcnt; int bi_idx; struct bio_vec* bi_io_vec; } ;
struct TYPE_4__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_0 (int ,int,struct mddev*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int,int) ;
 int FUNC_3 (int ,struct bio_vec*,int) ;
 scalar_t__ FUNC_4 (struct md_rdev*,int,int,int ) ;
 scalar_t__ FUNC_5 (int ,struct bio*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct r1bio *VAR_3, int VAR_4)
{
 struct mddev *VAR_5 = VAR_3->mddev;
 struct r1conf *VAR_6 = VAR_5->private;
 struct md_rdev *VAR_7 = VAR_6->mirrors[VAR_4].rdev;
 int VAR_8, VAR_9;
 struct bio_vec *VAR_10;
 int VAR_11;
 sector_t VAR_12;
 int VAR_13;
 int VAR_14 = VAR_3->sectors;
 int VAR_15 = 1;

 if (VAR_7->badblocks.shift < 0)
  return 0;

 VAR_11 = 1 << VAR_7->badblocks.shift;
 VAR_12 = VAR_3->sector;
 VAR_13 = ((VAR_12 + VAR_11)
     & ~(sector_t)(VAR_11 - 1))
  - VAR_12;

 if (FUNC_6(VAR_1, &VAR_3->state)) {
  VAR_8 = VAR_3->behind_page_count;
  VAR_10 = VAR_3->behind_bvecs;
  VAR_9 = 0;
  while (VAR_10[VAR_9].bv_page == ((void*)0))
   VAR_9++;
 } else {
  VAR_8 = VAR_3->master_bio->bi_vcnt;
  VAR_10 = VAR_3->master_bio->bi_io_vec;
  VAR_9 = VAR_3->master_bio->bi_idx;
 }
 while (VAR_14) {
  struct bio *VAR_16;
  if (VAR_13 > VAR_14)
   VAR_13 = VAR_14;


  VAR_16 = FUNC_0(VAR_0, VAR_8, VAR_5);
  FUNC_3(VAR_16->bi_io_vec, VAR_10, VAR_8 * sizeof(struct bio_vec));
  VAR_16->bi_sector = VAR_3->sector;
  VAR_16->bi_rw = VAR_2;
  VAR_16->bi_vcnt = VAR_8;
  VAR_16->bi_size = VAR_3->sectors << 9;
  VAR_16->bi_idx = VAR_9;

  FUNC_2(VAR_16, VAR_12 - VAR_3->sector, VAR_13);
  VAR_16->bi_sector += VAR_7->data_offset;
  VAR_16->bi_bdev = VAR_7->bdev;
  if (FUNC_5(VAR_2, VAR_16) == 0)

   VAR_15 = FUNC_4(VAR_7, VAR_12,
      VAR_13, 0)
    && VAR_15;

  FUNC_1(VAR_16);
  VAR_14 -= VAR_13;
  VAR_12 += VAR_13;
  VAR_13 = VAR_11;
 }
 return VAR_15;
}
