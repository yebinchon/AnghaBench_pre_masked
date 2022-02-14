
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {scalar_t__ merge_bvec_fn; } ;
struct raid10_info {scalar_t__ recovery_disabled; TYPE_2__* rdev; scalar_t__ head_position; TYPE_2__* replacement; } ;
struct TYPE_3__ {int raid_disks; } ;
struct r10conf {int fullsync; struct raid10_info* mirrors; TYPE_1__ geo; } ;
struct mddev {scalar_t__ recovery_cp; int merge_check_needed; scalar_t__ recovery_disabled; scalar_t__ queue; scalar_t__ gendisk; struct r10conf* private; } ;
struct md_rdev {int saved_raid_disk; int raid_disk; int data_offset; int bdev; int flags; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct r10conf*,int,int) ;
 struct request_queue* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (struct r10conf*,int ) ;
 int FUNC_6 (struct md_rdev*,struct mddev*) ;
 int FUNC_7 (struct r10conf*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,struct md_rdev*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct r10conf*) ;

__attribute__((used)) static int FUNC_14(struct mddev *VAR_9, struct md_rdev *VAR_10)
{
 struct r10conf *VAR_11 = VAR_9->private;
 int VAR_12 = -VAR_1;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = VAR_11->geo.raid_disks - 1;
 struct request_queue *VAR_16 = FUNC_1(VAR_10->bdev);

 if (VAR_9->recovery_cp < VAR_4)



  return -VAR_0;
 if (VAR_10->saved_raid_disk < 0 && !FUNC_0(VAR_11, 1, -1))
  return -VAR_2;

 if (VAR_10->raid_disk >= 0)
  VAR_14 = VAR_15 = VAR_10->raid_disk;

 if (VAR_16->merge_bvec_fn) {
  FUNC_10(VAR_7, &VAR_10->flags);
  VAR_9->merge_check_needed = 1;
 }

 if (VAR_10->saved_raid_disk >= VAR_14 &&
     VAR_11->mirrors[VAR_10->saved_raid_disk].rdev == ((void*)0))
  VAR_13 = VAR_10->saved_raid_disk;
 else
  VAR_13 = VAR_14;
 for ( ; VAR_13 <= VAR_15 ; VAR_13++) {
  struct raid10_info *VAR_17 = &VAR_11->mirrors[VAR_13];
  if (VAR_17->recovery_disabled == VAR_9->recovery_disabled)
   continue;
  if (VAR_17->rdev) {
   if (!FUNC_12(VAR_8, &VAR_17->rdev->flags) ||
       VAR_17->replacement != ((void*)0))
    continue;
   FUNC_3(VAR_3, &VAR_10->flags);
   FUNC_10(VAR_6, &VAR_10->flags);
   VAR_10->raid_disk = VAR_13;
   VAR_12 = 0;
   if (VAR_9->gendisk)
    FUNC_4(VAR_9->gendisk, VAR_10->bdev,
        VAR_10->data_offset << 9);
   VAR_11->fullsync = 1;
   FUNC_9(VAR_17->replacement, VAR_10);
   break;
  }

  if (VAR_9->gendisk)
   FUNC_4(VAR_9->gendisk, VAR_10->bdev,
       VAR_10->data_offset << 9);

  VAR_17->head_position = 0;
  VAR_17->recovery_disabled = VAR_9->recovery_disabled - 1;
  VAR_10->raid_disk = VAR_13;
  VAR_12 = 0;
  if (VAR_10->saved_raid_disk != VAR_13)
   VAR_11->fullsync = 1;
  FUNC_9(VAR_17->rdev, VAR_10);
  break;
 }
 if (VAR_12 == 0 && FUNC_12(VAR_7, &VAR_10->flags)) {







  FUNC_11();
  FUNC_5(VAR_11, 0);
  FUNC_13(VAR_11);
  FUNC_3(VAR_7, &VAR_10->flags);
 }
 FUNC_6(VAR_10, VAR_9);
 if (VAR_9->queue && FUNC_2(FUNC_1(VAR_10->bdev)))
  FUNC_8(VAR_5, VAR_9->queue);

 FUNC_7(VAR_11);
 return VAR_12;
}
