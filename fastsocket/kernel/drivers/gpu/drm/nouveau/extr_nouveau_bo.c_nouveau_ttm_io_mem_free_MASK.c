
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_reg {struct nouveau_mem* mm_node; } ;
struct ttm_bo_device {int dummy; } ;
struct TYPE_2__ {int node; } ;
struct nouveau_mem {TYPE_1__ bar_vma; } ;
struct nouveau_drm {int device; } ;
struct nouveau_bar {int (* unmap ) (struct nouveau_bar*,TYPE_1__*) ;} ;


 struct nouveau_bar* FUNC_0 (int ) ;
 struct nouveau_drm* FUNC_1 (struct ttm_bo_device*) ;
 int FUNC_2 (struct nouveau_bar*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct ttm_bo_device *VAR_0, struct ttm_mem_reg *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_1(VAR_0);
 struct nouveau_bar *VAR_3 = FUNC_0(VAR_2->device);
 struct nouveau_mem *VAR_4 = VAR_1->mm_node;

 if (!VAR_4->bar_vma.node)
  return;

 VAR_3->unmap(VAR_3, &VAR_4->bar_vma);
}
