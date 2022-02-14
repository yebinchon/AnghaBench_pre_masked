
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union map_info {int * ptr; int target_request_nr; } ;
struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {scalar_t__ first_merging_chunk; scalar_t__ num_merging_chunks; int lock; TYPE_2__* origin; int bios_queued_during_merge; int complete; int valid; int store; TYPE_1__* cow; } ;
struct dm_exception {int dummy; } ;
struct bio {int bi_rw; int bi_bdev; int bi_sector; } ;
typedef scalar_t__ chunk_t ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 struct dm_exception* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dm_snapshot*,struct dm_exception*,struct bio*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int * FUNC_7 (struct dm_snapshot*,scalar_t__) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dm_target *VAR_4, struct bio *VAR_5,
         union map_info *VAR_6)
{
 struct dm_exception *VAR_7;
 struct dm_snapshot *VAR_8 = VAR_4->private;
 int VAR_9 = VAR_1;
 chunk_t VAR_10;

 if (VAR_5->bi_rw & VAR_0) {
  if (!VAR_6->target_request_nr)
   VAR_5->bi_bdev = VAR_8->origin->bdev;
  else
   VAR_5->bi_bdev = VAR_8->cow->bdev;
  VAR_6->ptr = ((void*)0);
  return VAR_1;
 }

 VAR_10 = FUNC_6(VAR_8->store, VAR_5->bi_sector);

 FUNC_4(&VAR_8->lock);


 if (!VAR_8->valid)
  goto redirect_to_origin;


 VAR_7 = FUNC_2(&VAR_8->complete, VAR_10);
 if (VAR_7) {

  if (FUNC_1(VAR_5) == VAR_3 &&
      VAR_10 >= VAR_8->first_merging_chunk &&
      VAR_10 < (VAR_8->first_merging_chunk +
        VAR_8->num_merging_chunks)) {
   VAR_5->bi_bdev = VAR_8->origin->bdev;
   FUNC_0(&VAR_8->bios_queued_during_merge, VAR_5);
   VAR_9 = VAR_2;
   goto out_unlock;
  }

  FUNC_5(VAR_8, VAR_7, VAR_5, VAR_10);

  if (FUNC_1(VAR_5) == VAR_3)
   VAR_6->ptr = FUNC_7(VAR_8, VAR_10);
  goto out_unlock;
 }

redirect_to_origin:
 VAR_5->bi_bdev = VAR_8->origin->bdev;

 if (FUNC_1(VAR_5) == VAR_3) {
  FUNC_8(&VAR_8->lock);
  return FUNC_3(VAR_8->origin, VAR_5);
 }

out_unlock:
 FUNC_8(&VAR_8->lock);

 return VAR_9;
}
