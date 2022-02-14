
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dma_buf* export_dma_buf; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct dma_buf {struct drm_i915_gem_object* priv; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct dma_buf *VAR_0)
{
 struct drm_i915_gem_object *VAR_1 = VAR_0->priv;

 if (VAR_1->base.export_dma_buf == VAR_0) {

  VAR_1->base.export_dma_buf = ((void*)0);
  FUNC_0(&VAR_1->base);
 }
}
