
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int raid_disks; scalar_t__ reshape_progress; scalar_t__ recovery_disabled; struct disk_info* disks; } ;
struct mddev {scalar_t__ recovery_disabled; struct r5conf* private; } ;
struct md_rdev {int raid_disk; int flags; int nr_pending; } ;
struct disk_info {struct md_rdev* replacement; struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct r5conf*) ;
 int FUNC_3 (struct r5conf*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_6, struct md_rdev *VAR_7)
{
 struct r5conf *VAR_8 = VAR_6->private;
 int VAR_9 = 0;
 int VAR_10 = VAR_7->raid_disk;
 struct md_rdev **VAR_11;
 struct disk_info *VAR_12 = VAR_8->disks + VAR_10;

 FUNC_3(VAR_8);
 if (VAR_7 == VAR_12->rdev)
  VAR_11 = &VAR_12->rdev;
 else if (VAR_7 == VAR_12->replacement)
  VAR_11 = &VAR_12->replacement;
 else
  return 0;

 if (VAR_10 >= VAR_8->raid_disks &&
     VAR_8->reshape_progress == VAR_3)
  FUNC_1(VAR_2, &VAR_7->flags);

 if (FUNC_6(VAR_2, &VAR_7->flags) ||
     FUNC_0(&VAR_7->nr_pending)) {
  VAR_9 = -VAR_0;
  goto abort;
 }



 if (!FUNC_6(VAR_1, &VAR_7->flags) &&
     VAR_6->recovery_disabled != VAR_8->recovery_disabled &&
     !FUNC_2(VAR_8) &&
     (!VAR_12->replacement || VAR_12->replacement == VAR_7) &&
     VAR_10 < VAR_8->raid_disks) {
  VAR_9 = -VAR_0;
  goto abort;
 }
 *VAR_11 = ((void*)0);
 FUNC_5();
 if (FUNC_0(&VAR_7->nr_pending)) {

  VAR_9 = -VAR_0;
  *VAR_11 = VAR_7;
 } else if (VAR_12->replacement) {

  VAR_12->rdev = VAR_12->replacement;
  FUNC_1(VAR_4, &VAR_12->replacement->flags);
  FUNC_4();


  VAR_12->replacement = ((void*)0);
  FUNC_1(VAR_5, &VAR_7->flags);
 } else



  FUNC_1(VAR_5, &VAR_7->flags);
abort:

 FUNC_3(VAR_8);
 return VAR_9;
}
