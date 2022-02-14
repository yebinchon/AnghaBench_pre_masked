
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct drm_i915_gem_object {TYPE_3__* pages; int has_dma_mapping; TYPE_1__ base; } ;
struct drm_device {TYPE_2__* pdev; struct drm_i915_private* dev_private; } ;
struct TYPE_6__ {int nents; int sgl; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*,int) ;

void FUNC_3(struct drm_i915_gem_object *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 bool VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if (!VAR_1->has_dma_mapping)
  FUNC_0(&VAR_2->pdev->dev,
        VAR_1->pages->sgl, VAR_1->pages->nents,
        VAR_0);

 FUNC_2(VAR_3, VAR_4);
}
