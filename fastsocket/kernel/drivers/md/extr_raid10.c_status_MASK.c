
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int near_copies; int raid_disks; int far_copies; scalar_t__ far_offset; } ;
struct r10conf {TYPE_3__* mirrors; TYPE_1__ geo; } ;
struct mddev {int chunk_sectors; scalar_t__ degraded; struct r10conf* private; } ;
struct TYPE_6__ {TYPE_2__* rdev; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, struct mddev *VAR_2)
{
 struct r10conf *VAR_3 = VAR_2->private;
 int VAR_4;

 if (VAR_3->geo.near_copies < VAR_3->geo.raid_disks)
  FUNC_0(VAR_1, " %dK chunks", VAR_2->chunk_sectors / 2);
 if (VAR_3->geo.near_copies > 1)
  FUNC_0(VAR_1, " %d near-copies", VAR_3->geo.near_copies);
 if (VAR_3->geo.far_copies > 1) {
  if (VAR_3->geo.far_offset)
   FUNC_0(VAR_1, " %d offset-copies", VAR_3->geo.far_copies);
  else
   FUNC_0(VAR_1, " %d far-copies", VAR_3->geo.far_copies);
 }
 FUNC_0(VAR_1, " [%d/%d] [", VAR_3->geo.raid_disks,
     VAR_3->geo.raid_disks - VAR_2->degraded);
 for (VAR_4 = 0; VAR_4 < VAR_3->geo.raid_disks; VAR_4++)
  FUNC_0(VAR_1, "%s",
         VAR_3->mirrors[VAR_4].rdev &&
         FUNC_1(VAR_0, &VAR_3->mirrors[VAR_4].rdev->flags) ? "U" : "_");
 FUNC_0(VAR_1, "]");
}
