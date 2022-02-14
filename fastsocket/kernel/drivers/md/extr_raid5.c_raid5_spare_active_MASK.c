
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5conf {int raid_disks; int device_lock; struct disk_info* disks; } ;
struct mddev {int degraded; struct r5conf* private; } ;
struct disk_info {TYPE_2__* rdev; TYPE_1__* replacement; } ;
struct TYPE_4__ {scalar_t__ recovery_offset; int sysfs_state; int flags; } ;
struct TYPE_3__ {scalar_t__ recovery_offset; int sysfs_state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 (struct r5conf*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct mddev *VAR_3)
{
 int VAR_4;
 struct r5conf *VAR_5 = VAR_3->private;
 struct disk_info *VAR_6;
 int VAR_7 = 0;
 unsigned long VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_5->raid_disks; VAR_4++) {
  VAR_6 = VAR_5->disks + VAR_4;
  if (VAR_6->replacement
      && VAR_6->replacement->recovery_offset == VAR_2
      && !FUNC_8(VAR_0, &VAR_6->replacement->flags)
      && !FUNC_7(VAR_1, &VAR_6->replacement->flags)) {

   if (!VAR_6->rdev
       || !FUNC_6(VAR_1, &VAR_6->rdev->flags))
    VAR_7++;
   if (VAR_6->rdev) {




    FUNC_2(VAR_0, &VAR_6->rdev->flags);
    FUNC_5(
     VAR_6->rdev->sysfs_state);
   }
   FUNC_5(VAR_6->replacement->sysfs_state);
  } else if (VAR_6->rdev
      && VAR_6->rdev->recovery_offset == VAR_2
      && !FUNC_8(VAR_0, &VAR_6->rdev->flags)
      && !FUNC_7(VAR_1, &VAR_6->rdev->flags)) {
   VAR_7++;
   FUNC_5(VAR_6->rdev->sysfs_state);
  }
 }
 FUNC_3(&VAR_5->device_lock, VAR_8);
 VAR_3->degraded = FUNC_0(VAR_5);
 FUNC_4(&VAR_5->device_lock, VAR_8);
 FUNC_1(VAR_5);
 return VAR_7;
}
