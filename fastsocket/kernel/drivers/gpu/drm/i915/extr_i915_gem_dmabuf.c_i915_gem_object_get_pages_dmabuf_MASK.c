
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_2__ {int import_attach; } ;
struct drm_i915_gem_object {int has_dma_mapping; struct sg_table* pages; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sg_table*) ;
 int FUNC_1 (struct sg_table*) ;
 struct sg_table* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_gem_object *VAR_1)
{
 struct sg_table *VAR_2;

 VAR_2 = FUNC_2(VAR_1->base.import_attach, VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->pages = VAR_2;
 VAR_1->has_dma_mapping = 1;
 return 0;
}
