
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {int raid_disks; scalar_t__ recovery_disabled; int fullsync; struct disk_info* disks; } ;
struct mddev {scalar_t__ recovery_disabled; struct r5conf* private; } ;
struct md_rdev {int saved_raid_disk; int raid_disk; int flags; } ;
struct disk_info {TYPE_1__* replacement; TYPE_1__* rdev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct r5conf*) ;
 int FUNC_2 (struct r5conf*) ;
 int FUNC_3 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct mddev *VAR_6, struct md_rdev *VAR_7)
{
 struct r5conf *VAR_8 = VAR_6->private;
 int VAR_9 = -VAR_1;
 int VAR_10;
 struct disk_info *VAR_11;
 int VAR_12 = 0;
 int VAR_13 = VAR_8->raid_disks - 1;

 if (VAR_6->recovery_disabled == VAR_8->recovery_disabled)
  return -VAR_0;

 if (VAR_7->saved_raid_disk < 0 && FUNC_1(VAR_8))

  return -VAR_2;

 if (VAR_7->raid_disk >= 0)
  VAR_12 = VAR_13 = VAR_7->raid_disk;





 if (VAR_7->saved_raid_disk >= 0 &&
     VAR_7->saved_raid_disk >= VAR_12 &&
     VAR_8->disks[VAR_7->saved_raid_disk].rdev == ((void*)0))
  VAR_12 = VAR_7->saved_raid_disk;

 for (VAR_10 = VAR_12; VAR_10 <= VAR_13; VAR_10++) {
  VAR_11 = VAR_8->disks + VAR_10;
  if (VAR_11->rdev == ((void*)0)) {
   FUNC_0(VAR_3, &VAR_7->flags);
   VAR_7->raid_disk = VAR_10;
   VAR_9 = 0;
   if (VAR_7->saved_raid_disk != VAR_10)
    VAR_8->fullsync = 1;
   FUNC_3(VAR_11->rdev, VAR_7);
   goto out;
  }
 }
 for (VAR_10 = VAR_12; VAR_10 <= VAR_13; VAR_10++) {
  VAR_11 = VAR_8->disks + VAR_10;
  if (FUNC_5(VAR_5, &VAR_11->rdev->flags) &&
      VAR_11->replacement == ((void*)0)) {
   FUNC_0(VAR_3, &VAR_7->flags);
   FUNC_4(VAR_4, &VAR_7->flags);
   VAR_7->raid_disk = VAR_10;
   VAR_9 = 0;
   VAR_8->fullsync = 1;
   FUNC_3(VAR_11->replacement, VAR_7);
   break;
  }
 }
out:
 FUNC_2(VAR_8);
 return VAR_9;
}
