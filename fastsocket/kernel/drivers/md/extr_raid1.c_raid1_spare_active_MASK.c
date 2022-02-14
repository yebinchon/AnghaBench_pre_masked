
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int raid_disks; int device_lock; TYPE_1__* mirrors; } ;
struct mddev {int degraded; struct r1conf* private; } ;
struct md_rdev {scalar_t__ recovery_offset; int sysfs_state; int flags; } ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct r1conf*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_3)
{
 int VAR_4;
 struct r1conf *VAR_5 = VAR_3->private;
 int VAR_6 = 0;
 unsigned long VAR_7;






 for (VAR_4 = 0; VAR_4 < VAR_5->raid_disks; VAR_4++) {
  struct md_rdev *VAR_8 = VAR_5->mirrors[VAR_4].rdev;
  struct md_rdev *VAR_9 = VAR_5->mirrors[VAR_5->raid_disks + VAR_4].rdev;
  if (VAR_9
      && VAR_9->recovery_offset == VAR_2
      && !FUNC_7(VAR_0, &VAR_9->flags)
      && !FUNC_6(VAR_1, &VAR_9->flags)) {

   if (!VAR_8 ||
       !FUNC_5(VAR_1, &VAR_8->flags))
    VAR_6++;
   if (VAR_8) {




    FUNC_1(VAR_0, &VAR_8->flags);
    FUNC_4(
     VAR_8->sysfs_state);
   }
  }
  if (VAR_8
      && VAR_8->recovery_offset == VAR_2
      && !FUNC_7(VAR_0, &VAR_8->flags)
      && !FUNC_6(VAR_1, &VAR_8->flags)) {
   VAR_6++;
   FUNC_4(VAR_8->sysfs_state);
  }
 }
 FUNC_2(&VAR_5->device_lock, VAR_7);
 VAR_3->degraded -= VAR_6;
 FUNC_3(&VAR_5->device_lock, VAR_7);

 FUNC_0(VAR_5);
 return VAR_6;
}
