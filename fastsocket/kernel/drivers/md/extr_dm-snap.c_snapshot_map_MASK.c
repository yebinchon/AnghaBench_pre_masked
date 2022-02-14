
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union map_info {int ptr; } ;
struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {int lock; TYPE_2__* origin; TYPE_3__* store; int complete; int valid; TYPE_1__* cow; } ;
struct dm_exception {int dummy; } ;
struct dm_snap_pending_exception {int started; int snapshot_bios; struct dm_exception e; } ;
struct bio {int bi_rw; int bi_size; int bi_bdev; int bi_sector; } ;
typedef int chunk_t ;
struct TYPE_6__ {int chunk_size; } ;
struct TYPE_5__ {int bdev; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct dm_snap_pending_exception* FUNC_0 (struct dm_snapshot*,struct dm_snap_pending_exception*,int ) ;
 int FUNC_1 (struct dm_snapshot*,int ) ;
 struct dm_snap_pending_exception* FUNC_2 (struct dm_snapshot*,int ) ;
 struct dm_snap_pending_exception* FUNC_3 (struct dm_snapshot*) ;
 int FUNC_4 (int *,struct bio*) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 struct dm_exception* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dm_snap_pending_exception*) ;
 int FUNC_9 (struct dm_snapshot*,struct dm_exception*,struct bio*,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (struct dm_snap_pending_exception*) ;
 int FUNC_12 (struct dm_snap_pending_exception*,struct bio*) ;
 int FUNC_13 (struct dm_snapshot*,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct dm_target *VAR_7, struct bio *VAR_8,
   union map_info *VAR_9)
{
 struct dm_exception *VAR_10;
 struct dm_snapshot *VAR_11 = VAR_7->private;
 int VAR_12 = VAR_1;
 chunk_t VAR_13;
 struct dm_snap_pending_exception *VAR_14 = ((void*)0);

 if (VAR_8->bi_rw & VAR_0) {
  VAR_8->bi_bdev = VAR_11->cow->bdev;
  return VAR_1;
 }

 VAR_13 = FUNC_10(VAR_11->store, VAR_8->bi_sector);



 if (!VAR_11->valid)
  return -VAR_3;



 FUNC_7(&VAR_11->lock);

 if (!VAR_11->valid) {
  VAR_12 = -VAR_3;
  goto out_unlock;
 }


 VAR_10 = FUNC_6(&VAR_11->complete, VAR_13);
 if (VAR_10) {
  FUNC_9(VAR_11, VAR_10, VAR_8, VAR_13);
  goto out_unlock;
 }






 if (FUNC_5(VAR_8) == VAR_6) {
  VAR_14 = FUNC_2(VAR_11, VAR_13);
  if (!VAR_14) {
   FUNC_14(&VAR_11->lock);
   VAR_14 = FUNC_3(VAR_11);
   FUNC_7(&VAR_11->lock);

   if (!VAR_11->valid) {
    FUNC_8(VAR_14);
    VAR_12 = -VAR_3;
    goto out_unlock;
   }

   VAR_10 = FUNC_6(&VAR_11->complete, VAR_13);
   if (VAR_10) {
    FUNC_8(VAR_14);
    FUNC_9(VAR_11, VAR_10, VAR_8, VAR_13);
    goto out_unlock;
   }

   VAR_14 = FUNC_0(VAR_11, VAR_14, VAR_13);
   if (!VAR_14) {
    FUNC_1(VAR_11, -VAR_4);
    VAR_12 = -VAR_3;
    goto out_unlock;
   }
  }

  FUNC_9(VAR_11, &VAR_14->e, VAR_8, VAR_13);

  VAR_12 = VAR_2;

  if (!VAR_14->started &&
      VAR_8->bi_size == (VAR_11->store->chunk_size << VAR_5)) {
   VAR_14->started = 1;
   FUNC_14(&VAR_11->lock);
   FUNC_12(VAR_14, VAR_8);
   goto out;
  }

  FUNC_4(&VAR_14->snapshot_bios, VAR_8);

  if (!VAR_14->started) {

   VAR_14->started = 1;
   FUNC_14(&VAR_11->lock);
   FUNC_11(VAR_14);
   goto out;
  }
 } else {
  VAR_8->bi_bdev = VAR_11->origin->bdev;
  VAR_9->ptr = FUNC_13(VAR_11, VAR_13);
 }

out_unlock:
 FUNC_14(&VAR_11->lock);
out:
 return VAR_12;
}
