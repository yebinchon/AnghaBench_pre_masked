
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_node {int size; int start; } ;
struct TYPE_2__ {void* read_domains; void* write_domain; } ;
struct drm_i915_gem_object {int has_dma_mapping; int pages_pin_count; int cache_level; TYPE_1__ base; struct drm_mm_node* stolen; int * pages; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*,TYPE_1__*,int ) ;
 struct drm_i915_gem_object* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*,int *) ;
 int VAR_2 ;
 int * FUNC_4 (struct drm_device*,int ,int ) ;

__attribute__((used)) static struct drm_i915_gem_object *
FUNC_5(struct drm_device *VAR_3,
          struct drm_mm_node *VAR_4)
{
 struct drm_i915_gem_object *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_3, &VAR_5->base, VAR_4->size))
  goto cleanup;

 FUNC_3(VAR_5, &VAR_2);

 VAR_5->pages = FUNC_4(VAR_3,
        VAR_4->start, VAR_4->size);
 if (VAR_5->pages == ((void*)0))
  goto cleanup;

 VAR_5->has_dma_mapping = 1;
 VAR_5->pages_pin_count = 1;
 VAR_5->stolen = VAR_4;

 VAR_5->base.write_domain = VAR_1;
 VAR_5->base.read_domains = VAR_1;
 VAR_5->cache_level = VAR_0;

 return VAR_5;

cleanup:
 FUNC_2(VAR_5);
 return ((void*)0);
}
