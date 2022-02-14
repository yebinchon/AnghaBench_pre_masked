
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_placement; } ;
struct radeon_bo {TYPE_1__* rdev; TYPE_2__ placement; int tbo; int * placements; scalar_t__ pin_count; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct radeon_bo*) ;
 int FUNC_1 (int ,char*,struct radeon_bo*) ;
 int FUNC_2 (int *,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct radeon_bo *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1->pin_count) {
  FUNC_1(VAR_1->rdev->dev, "%p unpin not necessary\n", VAR_1);
  return 0;
 }
 VAR_1->pin_count--;
 if (VAR_1->pin_count)
  return 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->placement.num_placement; VAR_3++)
  VAR_1->placements[VAR_3] &= ~VAR_0;
 VAR_2 = FUNC_2(&VAR_1->tbo, &VAR_1->placement, 0, 0);
 if (FUNC_3(VAR_2 != 0))
  FUNC_0(VAR_1->rdev->dev, "%p validate failed for unpin\n", VAR_1);
 return VAR_2;
}
