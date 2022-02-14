
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_6__ {int size; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_drm {int device; } ;
struct TYPE_9__ {int fpfn; int lpfn; } ;
struct TYPE_7__ {int num_pages; } ;
struct TYPE_8__ {TYPE_2__ mem; int bdev; } ;
struct nouveau_bo {int tile_flags; TYPE_4__ placement; TYPE_3__ bo; scalar_t__ tile_mode; } ;
struct TYPE_10__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_fb* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_bo *VAR_4, uint32_t VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_0(VAR_4->bo.bdev);
 struct nouveau_fb *VAR_7 = FUNC_1(VAR_6->device);
 u32 VAR_8 = VAR_7->ram.size >> VAR_2;

 if (FUNC_2(VAR_6->device)->card_type == VAR_1 &&
     VAR_4->tile_mode && (VAR_5 & VAR_3) &&
     VAR_4->bo.mem.num_pages < VAR_8 / 4) {






  if (VAR_4->tile_flags & VAR_0) {
   VAR_4->placement.fpfn = VAR_8 / 2;
   VAR_4->placement.lpfn = ~0;
  } else {
   VAR_4->placement.fpfn = 0;
   VAR_4->placement.lpfn = VAR_8 / 2;
  }
 }
}
