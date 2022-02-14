
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int chunk_mask; } ;
struct r10conf {void* reshape_progress; int reshape_safe; int offset_diff; int copies; TYPE_1__* mirrors; TYPE_4__ geo; int r10buf_pool; scalar_t__ reshape_checkpoint; TYPE_4__ prev; } ;
struct r10bio {int sector; scalar_t__ state; int sectors; size_t read_slot; int remaining; TYPE_3__* devs; struct bio* master_bio; struct mddev* mddev; } ;
struct page {int dummy; } ;
struct mddev {int curr_resync_completed; int reshape_position; scalar_t__ flags; scalar_t__ recovery; scalar_t__ reshape_backwards; int sb_wait; int thread; int kobj; struct r10conf* private; } ;
struct md_rdev {scalar_t__ flags; scalar_t__ new_data_offset; int bdev; scalar_t__ data_offset; } ;
struct bio {int bi_flags; int bi_size; struct bio* bi_next; int bi_bdev; scalar_t__ bi_vcnt; TYPE_2__* bi_io_vec; scalar_t__ bi_idx; int bi_rw; int bi_end_io; struct r10bio* bi_private; scalar_t__ bi_sector; } ;
typedef int sector_t ;
struct TYPE_9__ {size_t devnum; struct bio* bio; scalar_t__ addr; struct bio* repl_bio; } ;
struct TYPE_8__ {struct page* bv_page; } ;
struct TYPE_7__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_4__*,struct r10bio*) ;
 int FUNC_2 (struct r10conf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct bio*,struct page*,int,int ) ;
 struct bio* FUNC_6 (int ,int ,struct mddev*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int,TYPE_4__*) ;
 int FUNC_8 (struct bio*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,TYPE_4__*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 struct r10bio* FUNC_13 (int ,int ) ;
 void* FUNC_14 (struct mddev*,int ,int ) ;
 int FUNC_15 (struct r10conf*,int) ;
 struct md_rdev* FUNC_16 (struct r10conf*,struct r10bio*,int*) ;
 int FUNC_17 (int ,scalar_t__*) ;
 int FUNC_18 (int *,int *,char*) ;
 scalar_t__ FUNC_19 (int ,scalar_t__*) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (struct r10conf*) ;
 int FUNC_22 (int ,int) ;

__attribute__((used)) static sector_t FUNC_23(struct mddev *VAR_19, sector_t VAR_20,
    int *VAR_21)
{
 struct r10conf *VAR_22 = VAR_19->private;
 struct r10bio *VAR_23;
 sector_t VAR_24, VAR_25, VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 struct md_rdev *VAR_30;
 int VAR_31 = 0;
 struct bio *VAR_32;
 struct bio *VAR_33, *VAR_34;
 int VAR_35 = 0;

 if (VAR_20 == 0) {

  if (VAR_19->reshape_backwards &&
      VAR_22->reshape_progress < FUNC_14(VAR_19, 0, 0)) {
   VAR_20 = (FUNC_14(VAR_19, 0, 0)
         - VAR_22->reshape_progress);
  } else if (!VAR_19->reshape_backwards &&
      VAR_22->reshape_progress > 0)
   VAR_20 = VAR_22->reshape_progress;
  if (VAR_20) {
   VAR_19->curr_resync_completed = VAR_20;
   FUNC_18(&VAR_19->kobj, ((void*)0), "sync_completed");
   *VAR_21 = 1;
   return VAR_20;
  }
 }





 if (VAR_19->reshape_backwards) {



  VAR_24 = FUNC_7(VAR_22->reshape_progress - 1,
      &VAR_22->geo);




  VAR_25 = FUNC_10(VAR_22->reshape_safe - 1,
     &VAR_22->prev);

  if (VAR_24 + VAR_22->offset_diff < VAR_25)
   VAR_31 = 1;

  VAR_26 = VAR_22->reshape_progress - 1;
  VAR_20 = VAR_26 & ~(sector_t)(VAR_22->geo.chunk_mask
            & VAR_22->prev.chunk_mask);
  if (VAR_20 + VAR_13/512 < VAR_26)
   VAR_20 = VAR_26 + 1 - VAR_13/512;
 } else {



  VAR_24 = FUNC_10(VAR_22->reshape_progress, &VAR_22->geo);




  VAR_25 = FUNC_7(VAR_22->reshape_safe, &VAR_22->prev);




  if (VAR_24 > VAR_25 + VAR_22->offset_diff)
   VAR_31 = 1;

  VAR_20 = VAR_22->reshape_progress;
  VAR_26 = VAR_20 | (VAR_22->geo.chunk_mask
         & VAR_22->prev.chunk_mask);

  if (VAR_20 + VAR_13/512 <= VAR_26)
   VAR_26 = VAR_20 + VAR_13/512 - 1;
 }

 if (VAR_31 ||
     FUNC_20(VAR_18, VAR_22->reshape_checkpoint + 10*VAR_6)) {

  FUNC_21(VAR_22);
  VAR_19->reshape_position = VAR_22->reshape_progress;
  if (VAR_19->reshape_backwards)
   VAR_19->curr_resync_completed = FUNC_14(VAR_19, 0, 0)
    - VAR_22->reshape_progress;
  else
   VAR_19->curr_resync_completed = VAR_22->reshape_progress;
  VAR_22->reshape_checkpoint = VAR_18;
  FUNC_17(VAR_7, &VAR_19->flags);
  FUNC_12(VAR_19->thread);
  FUNC_22(VAR_19->sb_wait, VAR_19->flags == 0 ||
      FUNC_9());
  VAR_22->reshape_safe = VAR_19->reshape_position;
  FUNC_2(VAR_22);
 }

read_more:

 VAR_23 = FUNC_13(VAR_22->r10buf_pool, VAR_5);
 FUNC_15(VAR_22, VAR_35 != 0);
 FUNC_4(&VAR_23->remaining, 0);
 VAR_23->mddev = VAR_19;
 VAR_23->sector = VAR_20;
 FUNC_17(VAR_10, &VAR_23->state);
 VAR_23->sectors = VAR_26 - VAR_20 + 1;
 VAR_30 = FUNC_16(VAR_22, VAR_23, &VAR_27);
 FUNC_0(!FUNC_19(VAR_11, &VAR_23->state));

 if (!VAR_30) {




  FUNC_17(VAR_8, &VAR_19->recovery);
  return VAR_35;
 }

 VAR_34 = FUNC_6(VAR_4, VAR_14, VAR_19);

 VAR_34->bi_bdev = VAR_30->bdev;
 VAR_34->bi_sector = (VAR_23->devs[VAR_23->read_slot].addr
          + VAR_30->data_offset);
 VAR_34->bi_private = VAR_23;
 VAR_34->bi_end_io = VAR_17;
 VAR_34->bi_rw = VAR_12;
 VAR_34->bi_flags &= ~(VAR_0 - 1);
 VAR_34->bi_flags |= 1 << VAR_2;
 VAR_34->bi_vcnt = 0;
 VAR_34->bi_idx = 0;
 VAR_34->bi_size = 0;
 VAR_23->master_bio = VAR_34;
 VAR_23->read_slot = VAR_23->devs[VAR_23->read_slot].devnum;


 FUNC_1(&VAR_22->geo, VAR_23);

 VAR_32 = VAR_34;
 VAR_34->bi_next = ((void*)0);

 for (VAR_29 = 0; VAR_29 < VAR_22->copies*2; VAR_29++) {
  struct bio *VAR_36;
  int VAR_37 = VAR_23->devs[VAR_29/2].devnum;
  struct md_rdev *VAR_38;
  if (VAR_29&1) {
   VAR_38 = VAR_22->mirrors[VAR_37].replacement;
   VAR_36 = VAR_23->devs[VAR_29/2].repl_bio;
  } else {
   VAR_38 = VAR_22->mirrors[VAR_37].rdev;
   VAR_36 = VAR_23->devs[VAR_29/2].bio;
  }
  if (!VAR_38 || FUNC_19(VAR_3, &VAR_38->flags))
   continue;
  VAR_36->bi_bdev = VAR_38->bdev;
  VAR_36->bi_sector = VAR_23->devs[VAR_29/2].addr + VAR_38->new_data_offset;
  VAR_36->bi_private = VAR_23;
  VAR_36->bi_end_io = VAR_16;
  VAR_36->bi_rw = VAR_15;
  VAR_36->bi_flags &= ~(VAR_0 - 1);
  VAR_36->bi_flags |= 1 << VAR_2;
  VAR_36->bi_next = VAR_32;
  VAR_36->bi_vcnt = 0;
  VAR_36->bi_idx = 0;
  VAR_36->bi_size = 0;
  VAR_32 = VAR_36;
 }



 VAR_28 = 0;
 for (VAR_29 = 0 ; VAR_29 < VAR_27; VAR_29 += VAR_9 >> 9) {
  struct page *VAR_39 = VAR_23->devs[0].bio->bi_io_vec[VAR_29/(VAR_9>>9)].bv_page;
  int VAR_40 = (VAR_27 - VAR_29) << 9;
  if (VAR_40 > VAR_9)
   VAR_40 = VAR_9;
  for (VAR_33 = VAR_32; VAR_33 ; VAR_33 = VAR_33->bi_next) {
   struct bio *VAR_41;
   if (FUNC_5(VAR_33, VAR_39, VAR_40, 0))
    continue;


   for (VAR_41 = VAR_32;
        VAR_41 && VAR_41 != VAR_33;
        VAR_41 = VAR_41->bi_next) {

    VAR_41->bi_vcnt--;
    VAR_41->bi_size -= VAR_40;
    VAR_41->bi_flags &= ~(1<<VAR_1);
   }
   goto bio_full;
  }
  VAR_20 += VAR_40 >> 9;
  VAR_28 += VAR_40 >> 9;
 }
bio_full:
 VAR_23->sectors = VAR_28;


 FUNC_11(VAR_34->bi_bdev, VAR_23->sectors);
 FUNC_3(&VAR_23->remaining);
 VAR_34->bi_next = ((void*)0);
 FUNC_8(VAR_34);
 VAR_20 += VAR_28;
 VAR_35 += VAR_28;
 if (VAR_20 <= VAR_26)
  goto read_more;




 if (VAR_19->reshape_backwards)
  VAR_22->reshape_progress -= VAR_35;
 else
  VAR_22->reshape_progress += VAR_35;

 return VAR_35;
}
