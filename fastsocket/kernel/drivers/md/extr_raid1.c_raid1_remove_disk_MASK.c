
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid1_info {struct md_rdev* rdev; } ;
struct r1conf {int raid_disks; scalar_t__ recovery_disabled; struct raid1_info* mirrors; } ;
struct mddev {scalar_t__ recovery_disabled; int degraded; struct r1conf* private; } ;
struct md_rdev {int raid_disk; int flags; int nr_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct r1conf*,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct r1conf*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct r1conf*) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_5, struct md_rdev *VAR_6)
{
 struct r1conf *VAR_7 = VAR_5->private;
 int VAR_8 = 0;
 int VAR_9 = VAR_6->raid_disk;
 struct raid1_info *VAR_10 = VAR_7->mirrors + VAR_9;

 if (VAR_6 != VAR_10->rdev)
  VAR_10 = VAR_7->mirrors + VAR_7->raid_disks + VAR_9;

 FUNC_4(VAR_7);
 if (VAR_6 == VAR_10->rdev) {
  if (FUNC_6(VAR_2, &VAR_6->flags) ||
      FUNC_0(&VAR_6->nr_pending)) {
   VAR_8 = -VAR_0;
   goto abort;
  }



  if (!FUNC_6(VAR_1, &VAR_6->flags) &&
      VAR_5->recovery_disabled != VAR_7->recovery_disabled &&
      VAR_5->degraded < VAR_7->raid_disks) {
   VAR_8 = -VAR_0;
   goto abort;
  }
  VAR_10->rdev = ((void*)0);
  FUNC_5();
  if (FUNC_0(&VAR_6->nr_pending)) {

   VAR_8 = -VAR_0;
   VAR_10->rdev = VAR_6;
   goto abort;
  } else if (VAR_7->mirrors[VAR_7->raid_disks + VAR_9].rdev) {




   struct md_rdev *VAR_11 =
    VAR_7->mirrors[VAR_7->raid_disks + VAR_9].rdev;
   FUNC_2(VAR_7, 0);
   FUNC_1(VAR_3, &VAR_11->flags);
   VAR_10->rdev = VAR_11;
   VAR_7->mirrors[VAR_7->raid_disks + VAR_9].rdev = ((void*)0);
   FUNC_7(VAR_7);
   FUNC_1(VAR_4, &VAR_6->flags);
  } else
   FUNC_1(VAR_4, &VAR_6->flags);
  VAR_8 = FUNC_3(VAR_5);
 }
abort:

 FUNC_4(VAR_7);
 return VAR_8;
}
