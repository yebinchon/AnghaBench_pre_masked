
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; int qd_idx; int state; scalar_t__ bm_seq; int sector; int stripe_lock; TYPE_1__* dev; } ;
struct r5conf {int chunk_sectors; int raid_disks; int max_degraded; int preread_active_stripes; scalar_t__ seq_flush; TYPE_2__* mddev; int wait_for_overlap; } ;
struct mddev {scalar_t__ reshape_position; int bitmap; struct r5conf* private; } ;
struct bio {int bi_sector; int bi_size; int bi_phys_segments; int * bi_next; } ;
typedef int sector_t ;
struct TYPE_4__ {scalar_t__ bitmap; } ;
struct TYPE_3__ {int flags; struct bio* towrite; scalar_t__ toread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int *) ;
 struct stripe_head* FUNC_7 (struct r5conf*,int,int ,int ,int ) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (struct bio*) ;
 int FUNC_11 (struct bio*) ;
 int FUNC_12 (struct stripe_head*) ;
 int FUNC_13 () ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_20(struct mddev *VAR_12, struct bio *VAR_13)
{
 struct r5conf *VAR_14 = VAR_12->private;
 sector_t VAR_15, VAR_16;
 struct stripe_head *VAR_17;
 int VAR_18;
 int VAR_19;

 if (VAR_12->reshape_position != VAR_0)

  return 0;

 VAR_15 = VAR_13->bi_sector & ~((sector_t)VAR_8-1);
 VAR_16 = VAR_13->bi_sector + (VAR_13->bi_size>>9);

 VAR_13->bi_next = ((void*)0);
 VAR_13->bi_phys_segments = 1;

 VAR_19 = VAR_14->chunk_sectors *
  (VAR_14->raid_disks - VAR_14->max_degraded);
 VAR_15 = FUNC_1(VAR_15,
            VAR_19);
 FUNC_14(VAR_16, VAR_19);

 VAR_15 *= VAR_14->chunk_sectors;
 VAR_16 *= VAR_14->chunk_sectors;

 for (; VAR_15 < VAR_16;
      VAR_15 += VAR_8) {
  FUNC_0(VAR_11);
  int VAR_20;
 again:
  VAR_17 = FUNC_7(VAR_14, VAR_15, 0, 0, 0);
  FUNC_9(&VAR_14->wait_for_overlap, &VAR_11,
    VAR_10);
  FUNC_15(VAR_2, &VAR_17->dev[VAR_17->pd_idx].flags);
  if (FUNC_19(VAR_9, &VAR_17->state)) {
   FUNC_12(VAR_17);
   FUNC_13();
   goto again;
  }
  FUNC_5(VAR_2, &VAR_17->dev[VAR_17->pd_idx].flags);
  FUNC_16(&VAR_17->stripe_lock);
  for (VAR_20 = 0; VAR_20 < VAR_14->raid_disks; VAR_20++) {
   if (VAR_20 == VAR_17->pd_idx || VAR_20 == VAR_17->qd_idx)
    continue;
   if (VAR_17->dev[VAR_20].towrite || VAR_17->dev[VAR_20].toread) {
    FUNC_15(VAR_2, &VAR_17->dev[VAR_20].flags);
    FUNC_17(&VAR_17->stripe_lock);
    FUNC_12(VAR_17);
    FUNC_13();
    goto again;
   }
  }
  FUNC_15(VAR_5, &VAR_17->state);
  FUNC_6(&VAR_14->wait_for_overlap, &VAR_11);
  for (VAR_20 = 0; VAR_20 < VAR_14->raid_disks; VAR_20++) {
   if (VAR_20 == VAR_17->pd_idx || VAR_20 == VAR_17->qd_idx)
    continue;
   VAR_17->dev[VAR_20].towrite = VAR_13;
   FUNC_15(VAR_1, &VAR_17->dev[VAR_20].flags);
   FUNC_11(VAR_13);
  }
  FUNC_17(&VAR_17->stripe_lock);
  if (VAR_14->mddev->bitmap) {
   for (VAR_20 = 0;
        VAR_20 < VAR_14->raid_disks - VAR_14->max_degraded;
        VAR_20++)
    FUNC_4(VAR_12->bitmap,
        VAR_17->sector,
        VAR_8,
        0);
   VAR_17->bm_seq = VAR_14->seq_flush + 1;
   FUNC_15(VAR_3, &VAR_17->state);
  }

  FUNC_15(VAR_6, &VAR_17->state);
  FUNC_5(VAR_4, &VAR_17->state);
  if (!FUNC_18(VAR_7, &VAR_17->state))
   FUNC_2(&VAR_14->preread_active_stripes);
  FUNC_12(VAR_17);
 }

 VAR_18 = FUNC_10(VAR_13);
 if (VAR_18 == 0) {
  FUNC_8(VAR_12);
  FUNC_3(VAR_13, 0);
 }

 return 0;
}
