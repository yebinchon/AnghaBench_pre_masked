
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int raid_disks; TYPE_1__* mirrors; } ;
struct r1bio {int read_disk; int sectors; scalar_t__ sector; struct bio** bios; struct mddev* mddev; } ;
struct page {int dummy; } ;
struct mddev {int recovery; int resync_mismatches; struct r1conf* private; } ;
struct bio_vec {int bv_len; struct page* bv_page; scalar_t__ bv_offset; } ;
struct bio {int bi_flags; int bi_vcnt; int bi_size; struct bio_vec* bi_io_vec; int bi_bdev; scalar_t__ bi_sector; int * bi_next; scalar_t__ bi_phys_segments; scalar_t__ bi_idx; int * bi_end_io; } ;
struct TYPE_4__ {int bdev; scalar_t__ data_offset; } ;
struct TYPE_3__ {TYPE_2__* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (TYPE_2__*,struct mddev*) ;
 scalar_t__ FUNC_5 (int,int*) ;

__attribute__((used)) static int FUNC_6(struct r1bio *VAR_6)
{







 struct mddev *VAR_7 = VAR_6->mddev;
 struct r1conf *VAR_8 = VAR_7->private;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_8->raid_disks * 2; VAR_9++)
  if (VAR_6->bios[VAR_9]->bi_end_io == VAR_5 &&
      FUNC_5(VAR_1, &VAR_6->bios[VAR_9]->bi_flags)) {
   VAR_6->bios[VAR_9]->bi_end_io = ((void*)0);
   FUNC_4(VAR_8->mirrors[VAR_9].rdev, VAR_7);
   break;
  }
 VAR_6->read_disk = VAR_9;
 VAR_11 = (VAR_6->sectors + VAR_4 / 512 - 1) >> (VAR_3 - 9);
 for (VAR_10 = 0; VAR_10 < VAR_8->raid_disks * 2; VAR_10++) {
  int VAR_12;
  struct bio *VAR_13 = VAR_6->bios[VAR_9];
  struct bio *VAR_14 = VAR_6->bios[VAR_10];
  int VAR_15;

  if (VAR_6->bios[VAR_10]->bi_end_io != VAR_5)
   continue;

  if (FUNC_5(VAR_1, &VAR_14->bi_flags)) {
   for (VAR_12 = VAR_11; VAR_12-- ; ) {
    struct page *VAR_16, *VAR_17;
    VAR_16 = VAR_13->bi_io_vec[VAR_12].bv_page;
    VAR_17 = VAR_14->bi_io_vec[VAR_12].bv_page;
    if (FUNC_1(FUNC_3(VAR_16),
        FUNC_3(VAR_17),
        VAR_14->bi_io_vec[VAR_12].bv_len))
     break;
   }
  } else
   VAR_12 = 0;
  if (VAR_12 >= 0)
   FUNC_0(VAR_6->sectors, &VAR_7->resync_mismatches);
  if (VAR_12 < 0 || (FUNC_5(VAR_2, &VAR_7->recovery)
         && FUNC_5(VAR_1, &VAR_14->bi_flags))) {

   VAR_14->bi_end_io = ((void*)0);
   FUNC_4(VAR_8->mirrors[VAR_10].rdev, VAR_7);
   continue;
  }

  VAR_14->bi_vcnt = VAR_11;
  VAR_14->bi_size = VAR_6->sectors << 9;
  VAR_14->bi_idx = 0;
  VAR_14->bi_phys_segments = 0;
  VAR_14->bi_flags &= ~(VAR_0 - 1);
  VAR_14->bi_flags |= 1 << VAR_1;
  VAR_14->bi_next = ((void*)0);
  VAR_14->bi_sector = VAR_6->sector +
   VAR_8->mirrors[VAR_10].rdev->data_offset;
  VAR_14->bi_bdev = VAR_8->mirrors[VAR_10].rdev->bdev;
  VAR_15 = VAR_14->bi_size;
  for (VAR_12 = 0; VAR_12 < VAR_11 ; VAR_12++) {
   struct bio_vec *VAR_18;
   VAR_18 = &VAR_14->bi_io_vec[VAR_12];
   VAR_18->bv_offset = 0;
   if (VAR_15 > VAR_4)
    VAR_18->bv_len = VAR_4;
   else
    VAR_18->bv_len = VAR_15;
   VAR_15 -= VAR_4;
   FUNC_2(FUNC_3(VAR_18->bv_page),
          FUNC_3(VAR_13->bi_io_vec[VAR_12].bv_page),
          VAR_4);
  }
 }
 return 0;
}
