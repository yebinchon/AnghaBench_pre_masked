
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ mem_type; scalar_t__ start; scalar_t__ num_pages; } ;
struct ttm_buffer_object {TYPE_1__ mem; int bdev; } ;
struct nouveau_drm {int device; } ;
struct nouveau_device {scalar_t__ card_type; int pdev; } ;
struct TYPE_4__ {scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct nouveau_bo {TYPE_2__ placement; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_bo* FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (struct nouveau_bo*,int ,int ) ;
 int FUNC_3 (struct nouveau_bo*) ;
 int FUNC_4 (struct nouveau_bo*,int,int) ;
 struct nouveau_device* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct ttm_buffer_object *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_0(VAR_4->bdev);
 struct nouveau_bo *VAR_6 = FUNC_1(VAR_4);
 struct nouveau_device *VAR_7 = FUNC_5(VAR_5->device);
 u32 VAR_8 = FUNC_6(VAR_7->pdev, 1) >> VAR_1;




 if (VAR_4->mem.mem_type != VAR_3) {
  if (FUNC_5(VAR_5->device)->card_type < VAR_0 ||
      !FUNC_3(VAR_6))
   return 0;
 }


 if (VAR_4->mem.start + VAR_4->mem.num_pages < VAR_8)
  return 0;


 VAR_6->placement.fpfn = 0;
 VAR_6->placement.lpfn = VAR_8;
 FUNC_2(VAR_6, VAR_2, 0);
 return FUNC_4(VAR_6, 0, 0);
}
