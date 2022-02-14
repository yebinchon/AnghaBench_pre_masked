
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {scalar_t__ fullsync; int raid_disks; int recovery_disabled; TYPE_1__* mirrors; scalar_t__ next_resync; int r1buf_pool; scalar_t__ nr_waiting; } ;
struct r1bio {int read_disk; struct bio** bios; int remaining; scalar_t__ sectors; scalar_t__ state; scalar_t__ sector; struct mddev* mddev; } ;
struct page {int dummy; } ;
struct mddev {scalar_t__ dev_sectors; scalar_t__ curr_resync; scalar_t__ recovery_cp; scalar_t__ resync_max; scalar_t__ recovery; int * bitmap; int recovery_disabled; scalar_t__ flags; struct r1conf* private; } ;
struct md_rdev {scalar_t__ data_offset; int bdev; int nr_pending; scalar_t__ flags; } ;
struct bio {int bi_flags; int bi_comp_cpu; size_t bi_vcnt; void* bi_end_io; int bi_bdev; scalar_t__ bi_size; TYPE_2__* bi_io_vec; struct r1bio* bi_private; scalar_t__ bi_sector; void* bi_rw; scalar_t__ bi_phys_segments; scalar_t__ bi_idx; int * bi_next; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {struct page* bv_page; } ;
struct TYPE_3__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (struct bio*,struct page*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__*,int) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__*,int) ;
 int FUNC_8 (struct r1conf*) ;
 void* VAR_20 ;
 void* VAR_21 ;
 int FUNC_9 (struct bio*) ;
 scalar_t__ FUNC_10 (struct r1conf*) ;
 scalar_t__ FUNC_11 (struct md_rdev*,scalar_t__,int,scalar_t__*,int*) ;
 int FUNC_12 (int ,scalar_t__) ;
 struct r1bio* FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct r1bio*) ;
 int FUNC_16 (struct r1conf*) ;
 struct md_rdev* FUNC_17 (struct md_rdev*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (struct md_rdev*,scalar_t__,int,int ) ;
 int FUNC_21 (int ,scalar_t__*) ;
 scalar_t__ FUNC_22 (int ,scalar_t__*) ;

__attribute__((used)) static sector_t FUNC_23(struct mddev *VAR_22, sector_t VAR_23, int *VAR_24, int VAR_25)
{
 struct r1conf *VAR_26 = VAR_22->private;
 struct r1bio *VAR_27;
 struct bio *VAR_28;
 sector_t VAR_29, VAR_30;
 int VAR_31 = -1;
 int VAR_32;
 int VAR_33 = -1;
 int VAR_34 = 0, VAR_35 = 0;
 sector_t VAR_36;
 int VAR_37 = 0;
 int VAR_38 = VAR_16;
 int VAR_39 = 0;

 if (!VAR_26->r1buf_pool)
  if (FUNC_10(VAR_26))
   return 0;

 VAR_29 = VAR_22->dev_sectors;
 if (VAR_23 >= VAR_29) {





  if (VAR_22->curr_resync < VAR_29)
   FUNC_6(VAR_22->bitmap, VAR_22->curr_resync,
      &VAR_36, 1);
  else
   VAR_26->fullsync = 0;

  FUNC_4(VAR_22->bitmap);
  FUNC_8(VAR_26);
  return 0;
 }

 if (VAR_22->bitmap == ((void*)0) &&
     VAR_22->recovery_cp == VAR_11 &&
     !FUNC_22(VAR_9, &VAR_22->recovery) &&
     VAR_26->fullsync == 0) {
  *VAR_24 = 1;
  return VAR_29 - VAR_23;
 }



 if (!FUNC_7(VAR_22->bitmap, VAR_23, &VAR_36, 1) &&
     !VAR_26->fullsync && !FUNC_22(VAR_9, &VAR_22->recovery)) {

  *VAR_24 = 1;
  return VAR_36;
 }





 if (!VAR_25 && VAR_26->nr_waiting)
  FUNC_14(1000);

 FUNC_5(VAR_22->bitmap, VAR_23);
 VAR_27 = FUNC_13(VAR_26->r1buf_pool, VAR_4);
 FUNC_16(VAR_26);

 VAR_26->next_resync = VAR_23;

 FUNC_18();
 VAR_27->mddev = VAR_22;
 VAR_27->sector = VAR_23;
 VAR_27->state = 0;
 FUNC_21(VAR_13, &VAR_27->state);

 for (VAR_32 = 0; VAR_32 < VAR_26->raid_disks * 2; VAR_32++) {
  struct md_rdev *VAR_40;
  VAR_28 = VAR_27->bios[VAR_32];


  VAR_28->bi_next = ((void*)0);
  VAR_28->bi_flags &= ~(VAR_0-1);
  VAR_28->bi_flags |= 1 << VAR_2;
  VAR_28->bi_comp_cpu = -1;
  VAR_28->bi_rw = VAR_14;
  VAR_28->bi_vcnt = 0;
  VAR_28->bi_idx = 0;
  VAR_28->bi_phys_segments = 0;
  VAR_28->bi_size = 0;
  VAR_28->bi_end_io = ((void*)0);
  VAR_28->bi_private = ((void*)0);

  VAR_40 = FUNC_17(VAR_26->mirrors[VAR_32].rdev);
  if (VAR_40 == ((void*)0) ||
      FUNC_22(VAR_3, &VAR_40->flags)) {
   if (VAR_32 < VAR_26->raid_disks)
    VAR_37 = 1;
  } else if (!FUNC_22(VAR_5, &VAR_40->flags)) {
   VAR_28->bi_rw = VAR_17;
   VAR_28->bi_end_io = VAR_21;
   VAR_34 ++;
  } else {

   sector_t VAR_41 = VAR_11;
   int VAR_42;

   if (FUNC_11(VAR_40, VAR_23, VAR_38,
     &VAR_41, &VAR_42)) {
    if (VAR_41 > VAR_23)
     VAR_38 = VAR_41 - VAR_23;
    else {
     VAR_42 -= (VAR_23 - VAR_41);
     if (VAR_39 == 0 ||
         VAR_39 > VAR_42)
      VAR_39 = VAR_42;
    }
   }
   if (VAR_23 < VAR_41) {
    if (FUNC_22(VAR_19, &VAR_40->flags)) {
     if (VAR_33 < 0)
      VAR_33 = VAR_32;
    } else {
     if (VAR_31 < 0)
      VAR_31 = VAR_32;
    }
    VAR_28->bi_rw = VAR_14;
    VAR_28->bi_end_io = VAR_20;
    VAR_35++;
   } else if (!FUNC_22(VAR_18, &VAR_40->flags) &&
    FUNC_22(VAR_10, &VAR_22->recovery) &&
    !FUNC_22(VAR_7, &VAR_22->recovery)) {






    VAR_28->bi_rw = VAR_17;
    VAR_28->bi_end_io = VAR_21;
    VAR_34++;
   }
  }
  if (VAR_28->bi_end_io) {
   FUNC_1(&VAR_40->nr_pending);
   VAR_28->bi_sector = VAR_23 + VAR_40->data_offset;
   VAR_28->bi_bdev = VAR_40->bdev;
   VAR_28->bi_private = VAR_27;
  }
 }
 FUNC_19();
 if (VAR_31 < 0)
  VAR_31 = VAR_33;
 VAR_27->read_disk = VAR_31;

 if (VAR_35 == 0 && VAR_39 > 0) {



  int VAR_43 = 1;
  for (VAR_32 = 0 ; VAR_32 < VAR_26->raid_disks * 2 ; VAR_32++)
   if (VAR_27->bios[VAR_32]->bi_end_io == VAR_21) {
    struct md_rdev *VAR_44 = VAR_26->mirrors[VAR_32].rdev;
    VAR_43 = FUNC_20(VAR_44, VAR_23,
       VAR_39, 0
     ) && VAR_43;
   }
  FUNC_21(VAR_6, &VAR_22->flags);
  *VAR_24 = 1;
  FUNC_15(VAR_27);

  if (!VAR_43) {





   VAR_26->recovery_disabled = VAR_22->recovery_disabled;
   FUNC_21(VAR_8, &VAR_22->recovery);
   return 0;
  } else
   return VAR_39;

 }
 if (VAR_39 > 0 && VAR_39 < VAR_38) {


  VAR_38 = VAR_39;
 }

 if (FUNC_22(VAR_10, &VAR_22->recovery) && VAR_35 > 0)

  VAR_34 += VAR_35-1;

 if (VAR_34 == 0 || VAR_35 == 0) {



  sector_t VAR_45;
  if (VAR_39 > 0)
   VAR_29 = VAR_23 + VAR_39;
  VAR_45 = VAR_29 - VAR_23;
  *VAR_24 = 1;
  FUNC_15(VAR_27);
  return VAR_45;
 }

 if (VAR_29 > VAR_22->resync_max)
  VAR_29 = VAR_22->resync_max;
 if (VAR_29 > VAR_23 + VAR_38)
  VAR_29 = VAR_23 + VAR_38;
 VAR_30 = 0;
 VAR_36 = 0;
 do {
  struct page *VAR_46;
  int VAR_47 = VAR_12;
  if (VAR_23 + (VAR_47>>9) > VAR_29)
   VAR_47 = (VAR_29 - VAR_23) << 9;
  if (VAR_47 == 0)
   break;
  if (VAR_36 == 0) {
   if (!FUNC_7(VAR_22->bitmap, VAR_23,
            &VAR_36, VAR_37) &&
       !VAR_26->fullsync &&
       !FUNC_22(VAR_9, &VAR_22->recovery))
    break;
   FUNC_0(VAR_36 < (VAR_12>>9));
   if ((VAR_47 >> 9) > VAR_36)
    VAR_47 = VAR_36<<9;
  }

  for (VAR_32 = 0 ; VAR_32 < VAR_26->raid_disks * 2; VAR_32++) {
   VAR_28 = VAR_27->bios[VAR_32];
   if (VAR_28->bi_end_io) {
    VAR_46 = VAR_28->bi_io_vec[VAR_28->bi_vcnt].bv_page;
    if (FUNC_3(VAR_28, VAR_46, VAR_47, 0) == 0) {

     VAR_28->bi_io_vec[VAR_28->bi_vcnt].bv_page = VAR_46;
     while (VAR_32 > 0) {
      VAR_32--;
      VAR_28 = VAR_27->bios[VAR_32];
      if (VAR_28->bi_end_io==((void*)0))
       continue;

      VAR_28->bi_vcnt--;
      VAR_28->bi_size -= VAR_47;
      VAR_28->bi_flags &= ~(1<< VAR_1);
     }
     goto bio_full;
    }
   }
  }
  VAR_30 += VAR_47>>9;
  VAR_23 += VAR_47>>9;
  VAR_36 -= (VAR_47>>9);
 } while (VAR_27->bios[VAR_31]->bi_vcnt < VAR_15);
 bio_full:
 VAR_27->sectors = VAR_30;




 if (FUNC_22(VAR_9, &VAR_22->recovery)) {
  FUNC_2(&VAR_27->remaining, VAR_35);
  for (VAR_32 = 0; VAR_32 < VAR_26->raid_disks * 2 && VAR_35; VAR_32++) {
   VAR_28 = VAR_27->bios[VAR_32];
   if (VAR_28->bi_end_io == VAR_20) {
    VAR_35--;
    FUNC_12(VAR_28->bi_bdev, VAR_30);
    FUNC_9(VAR_28);
   }
  }
 } else {
  FUNC_2(&VAR_27->remaining, 1);
  VAR_28 = VAR_27->bios[VAR_27->read_disk];
  FUNC_12(VAR_28->bi_bdev, VAR_30);
  FUNC_9(VAR_28);

 }
 return VAR_30;
}
