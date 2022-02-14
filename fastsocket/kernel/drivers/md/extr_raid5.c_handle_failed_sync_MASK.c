
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_head_state {scalar_t__ replacing; scalar_t__ syncing; } ;
struct stripe_head {size_t pd_idx; int sector; TYPE_1__* dev; int state; } ;
struct r5conf {int raid_disks; TYPE_3__* mddev; int recovery_disabled; TYPE_2__* disks; int wait_for_overlap; } ;
struct md_rdev {int flags; } ;
struct TYPE_6__ {int recovery_disabled; int recovery; } ;
struct TYPE_5__ {struct md_rdev* replacement; struct md_rdev* rdev; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (struct md_rdev*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct r5conf *VAR_6, struct stripe_head *VAR_7,
     struct stripe_head_state *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;

 FUNC_0(VAR_5, &VAR_7->state);
 if (FUNC_3(VAR_3, &VAR_7->dev[VAR_7->pd_idx].flags))
  FUNC_5(&VAR_6->wait_for_overlap);
 VAR_8->syncing = 0;
 VAR_8->replacing = 0;







 if (FUNC_4(VAR_2, &VAR_6->mddev->recovery)) {



  for (VAR_10 = 0; VAR_10 < VAR_6->raid_disks; VAR_10++) {
   struct md_rdev *VAR_11 = VAR_6->disks[VAR_10].rdev;
   if (VAR_11
       && !FUNC_4(VAR_0, &VAR_11->flags)
       && !FUNC_4(VAR_1, &VAR_11->flags)
       && !FUNC_2(VAR_11, VAR_7->sector,
         VAR_4, 0))
    VAR_9 = 1;
   VAR_11 = VAR_6->disks[VAR_10].replacement;
   if (VAR_11
       && !FUNC_4(VAR_0, &VAR_11->flags)
       && !FUNC_4(VAR_1, &VAR_11->flags)
       && !FUNC_2(VAR_11, VAR_7->sector,
         VAR_4, 0))
    VAR_9 = 1;
  }
  if (VAR_9)
   VAR_6->recovery_disabled =
    VAR_6->mddev->recovery_disabled;
 }
 FUNC_1(VAR_6->mddev, VAR_4, !VAR_9);
}
