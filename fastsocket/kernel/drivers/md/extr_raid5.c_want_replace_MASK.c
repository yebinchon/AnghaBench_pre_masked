
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_head {scalar_t__ sector; TYPE_3__* raid_conf; } ;
struct md_rdev {scalar_t__ recovery_offset; TYPE_1__* mddev; int flags; } ;
struct TYPE_6__ {TYPE_2__* disks; } ;
struct TYPE_5__ {struct md_rdev* replacement; } ;
struct TYPE_4__ {scalar_t__ recovery_cp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct stripe_head *VAR_2, int VAR_3)
{
 struct md_rdev *VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_2->raid_conf->disks[VAR_3].replacement;
 if (VAR_4
     && !FUNC_0(VAR_0, &VAR_4->flags)
     && !FUNC_0(VAR_1, &VAR_4->flags)
     && (VAR_4->recovery_offset <= VAR_2->sector
  || VAR_4->mddev->recovery_cp <= VAR_2->sector))
  VAR_5 = 1;

 return VAR_5;
}
