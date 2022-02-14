
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dev; } ;
struct drm_i915_gem_object {TYPE_4__* pages; TYPE_3__ base; scalar_t__ has_dma_mapping; } ;
struct TYPE_8__ {int nents; int sgl; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;

int FUNC_1(struct drm_i915_gem_object *VAR_2)
{
 if (VAR_2->has_dma_mapping)
  return 0;

 if (!FUNC_0(&VAR_2->base.dev->pdev->dev,
   VAR_2->pages->sgl, VAR_2->pages->nents,
   VAR_1))
  return -VAR_0;

 return 0;
}
