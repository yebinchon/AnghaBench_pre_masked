
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct mpconf {int raid_disks; TYPE_2__* multipaths; } ;
struct mddev {scalar_t__ degraded; struct mpconf* private; } ;
struct TYPE_4__ {TYPE_1__* rdev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2 (struct seq_file *VAR_1, struct mddev *VAR_2)
{
 struct mpconf *VAR_3 = VAR_2->private;
 int VAR_4;

 FUNC_0 (VAR_1, " [%d/%d] [", VAR_3->raid_disks,
      VAR_3->raid_disks - VAR_2->degraded);
 for (VAR_4 = 0; VAR_4 < VAR_3->raid_disks; VAR_4++)
  FUNC_0 (VAR_1, "%s",
          VAR_3->multipaths[VAR_4].rdev &&
          FUNC_1(VAR_0, &VAR_3->multipaths[VAR_4].rdev->flags) ? "U" : "_");
 FUNC_0 (VAR_1, "]");
}
