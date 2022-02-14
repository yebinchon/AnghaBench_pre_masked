
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int bdev; } ;
struct ttm_mem_reg {int mm_node; } ;
struct nouveau_mem {int dummy; } ;
struct TYPE_2__ {int (* put ) (struct nouveau_fb*,struct nouveau_mem**) ;} ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_drm {int device; } ;


 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_fb* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_fb*,struct nouveau_mem**) ;

__attribute__((used)) static void
FUNC_4(struct ttm_mem_type_manager *VAR_0,
    struct ttm_mem_reg *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_0->bdev);
 struct nouveau_fb *VAR_3 = FUNC_1(VAR_2->device);
 FUNC_2(VAR_1->mm_node);
 VAR_3->ram.put(VAR_3, (struct nouveau_mem **)&VAR_1->mm_node);
}
