
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {scalar_t__ merge_bvec_fn; } ;
struct raid1_info {TYPE_1__* rdev; scalar_t__ head_position; } ;
struct r1conf {int raid_disks; scalar_t__ recovery_disabled; int fullsync; struct raid1_info* mirrors; } ;
struct mddev {scalar_t__ recovery_disabled; int merge_check_needed; scalar_t__ queue; scalar_t__ gendisk; struct r1conf* private; } ;
struct md_rdev {int raid_disk; int data_offset; scalar_t__ saved_raid_disk; int bdev; int flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct request_queue* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct r1conf*,int ) ;
 int FUNC_5 (struct md_rdev*,struct mddev*) ;
 int FUNC_6 (struct r1conf*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct r1conf*) ;

__attribute__((used)) static int FUNC_13(struct mddev *VAR_7, struct md_rdev *VAR_8)
{
 struct r1conf *VAR_9 = VAR_7->private;
 int VAR_10 = -VAR_1;
 int VAR_11 = 0;
 struct raid1_info *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = VAR_9->raid_disks - 1;
 struct request_queue *VAR_15 = FUNC_0(VAR_8->bdev);

 if (VAR_7->recovery_disabled == VAR_9->recovery_disabled)
  return -VAR_0;

 if (VAR_8->raid_disk >= 0)
  VAR_13 = VAR_14 = VAR_8->raid_disk;

 if (VAR_15->merge_bvec_fn) {
  FUNC_9(VAR_5, &VAR_8->flags);
  VAR_7->merge_check_needed = 1;
 }

 for (VAR_11 = VAR_13; VAR_11 <= VAR_14; VAR_11++) {
  VAR_12 = VAR_9->mirrors+VAR_11;
  if (!VAR_12->rdev) {

   if (VAR_7->gendisk)
    FUNC_3(VAR_7->gendisk, VAR_8->bdev,
        VAR_8->data_offset << 9);

   VAR_12->head_position = 0;
   VAR_8->raid_disk = VAR_11;
   VAR_10 = 0;



   if (VAR_8->saved_raid_disk < 0)
    VAR_9->fullsync = 1;
   FUNC_8(VAR_12->rdev, VAR_8);
   break;
  }
  if (FUNC_11(VAR_6, &VAR_12->rdev->flags) &&
      VAR_12[VAR_9->raid_disks].rdev == ((void*)0)) {

   FUNC_2(VAR_2, &VAR_8->flags);
   FUNC_9(VAR_4, &VAR_8->flags);
   VAR_8->raid_disk = VAR_11;
   VAR_10 = 0;
   VAR_9->fullsync = 1;
   FUNC_8(VAR_12[VAR_9->raid_disks].rdev, VAR_8);
   break;
  }
 }
 if (VAR_10 == 0 && FUNC_11(VAR_5, &VAR_8->flags)) {







  FUNC_10();
  FUNC_4(VAR_9, 0);
  FUNC_12(VAR_9);
  FUNC_2(VAR_5, &VAR_8->flags);
 }
 FUNC_5(VAR_8, VAR_7);
 if (VAR_7->queue && FUNC_1(FUNC_0(VAR_8->bdev)))
  FUNC_7(VAR_3, VAR_7->queue);
 FUNC_6(VAR_9);
 return VAR_10;
}
