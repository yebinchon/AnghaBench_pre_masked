
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raid_disks; int chunk_shift; } ;
struct r10conf {TYPE_2__ geo; TYPE_1__* mirrors; } ;
struct mddev {scalar_t__ delta_disks; int chunk_sectors; scalar_t__ reshape_backwards; int reshape_position; int new_layout; int layout; int gendisk; int array_sectors; int resync_max_sectors; int recovery; int recovery_cp; struct r10conf* private; } ;
struct md_rdev {int flags; } ;
typedef int sector_t ;
struct TYPE_3__ {struct md_rdev* replacement; struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mddev*,int ) ;
 int FUNC_2 (struct mddev*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mddev *VAR_4)
{
 struct r10conf *VAR_5 = VAR_4->private;

 if (FUNC_6(VAR_1, &VAR_4->recovery))
  return;

 if (VAR_4->delta_disks > 0) {
  sector_t VAR_6 = FUNC_2(VAR_4, 0, 0);
  FUNC_1(VAR_4, VAR_6);
  if (VAR_4->recovery_cp > VAR_4->resync_max_sectors) {
   VAR_4->recovery_cp = VAR_4->resync_max_sectors;
   FUNC_4(VAR_2, &VAR_4->recovery);
  }
  VAR_4->resync_max_sectors = VAR_6;
  FUNC_5(VAR_4->gendisk, VAR_4->array_sectors);
  FUNC_3(VAR_4->gendisk);
 } else {
  int VAR_7;
  for (VAR_7 = VAR_5->geo.raid_disks ;
       VAR_7 < VAR_5->geo.raid_disks - VAR_4->delta_disks;
       VAR_7++) {
   struct md_rdev *VAR_8 = VAR_5->mirrors[VAR_7].rdev;
   if (VAR_8)
    FUNC_0(VAR_0, &VAR_8->flags);
   VAR_8 = VAR_5->mirrors[VAR_7].replacement;
   if (VAR_8)
    FUNC_0(VAR_0, &VAR_8->flags);
  }
 }
 VAR_4->layout = VAR_4->new_layout;
 VAR_4->chunk_sectors = 1 << VAR_5->geo.chunk_shift;
 VAR_4->reshape_position = VAR_3;
 VAR_4->delta_disks = 0;
 VAR_4->reshape_backwards = 0;
}
