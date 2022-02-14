
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int import_attach; } ;
struct drm_i915_gem_object {int has_dma_mapping; int pages; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_gem_object *VAR_1)
{
 FUNC_0(VAR_1->base.import_attach,
     VAR_1->pages, VAR_0);
 VAR_1->has_dma_mapping = 0;
}
