
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ lpfn; int num_placement; } ;
struct radeon_bo {int pin_count; TYPE_2__* rdev; TYPE_3__ placement; int tbo; int * placements; } ;
struct TYPE_4__ {scalar_t__ vram_start; scalar_t__ gtt_start; scalar_t__ visible_vram_size; scalar_t__ gtt_size; } ;
struct TYPE_5__ {int dev; TYPE_1__ mc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,struct radeon_bo*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct radeon_bo*) ;
 int FUNC_4 (struct radeon_bo*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_3__*,int,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct radeon_bo *VAR_3, u32 VAR_4, u64 VAR_5,
        u64 *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_3->pin_count) {
  VAR_3->pin_count++;
  if (VAR_6)
   *VAR_6 = FUNC_3(VAR_3);

  if (VAR_5 != 0) {
   u64 VAR_9;

   if (VAR_4 == VAR_1)
    VAR_9 = VAR_3->rdev->mc.vram_start;
   else
    VAR_9 = VAR_3->rdev->mc.gtt_start;
   FUNC_0(VAR_5 <
         (FUNC_3(VAR_3) - VAR_9));
  }

  return 0;
 }
 FUNC_4(VAR_3, VAR_4);
 if (VAR_4 == VAR_1) {

  VAR_3->placement.lpfn = VAR_3->rdev->mc.visible_vram_size >> VAR_0;
 }
 if (VAR_5) {
  u64 VAR_10 = VAR_5 >> VAR_0;

  if (!VAR_3->placement.lpfn)
   VAR_3->placement.lpfn = VAR_3->rdev->mc.gtt_size >> VAR_0;

  if (VAR_10 < VAR_3->placement.lpfn)
   VAR_3->placement.lpfn = VAR_10;
 }
 for (VAR_8 = 0; VAR_8 < VAR_3->placement.num_placement; VAR_8++)
  VAR_3->placements[VAR_8] |= VAR_2;
 VAR_7 = FUNC_5(&VAR_3->tbo, &VAR_3->placement, 0, 0);
 if (FUNC_2(VAR_7 == 0)) {
  VAR_3->pin_count = 1;
  if (VAR_6 != ((void*)0))
   *VAR_6 = FUNC_3(VAR_3);
 }
 if (FUNC_6(VAR_7 != 0))
  FUNC_1(VAR_3->rdev->dev, "%p pin failed\n", VAR_3);
 return VAR_7;
}
