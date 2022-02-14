
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_ring_buffer {struct drm_i915_gem_object* last_context_obj; } ;
struct i915_hw_context {int is_initialized; struct drm_i915_gem_object* obj; struct intel_ring_buffer* ring; } ;
struct TYPE_3__ {int read_domains; } ;
struct drm_i915_gem_object {scalar_t__ pin_count; int dirty; TYPE_1__ base; struct intel_ring_buffer* ring; int cache_level; int has_global_gtt_mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct drm_i915_gem_object*,int ) ;
 int FUNC_5 (struct drm_i915_gem_object*,struct intel_ring_buffer*) ;
 int FUNC_6 (struct drm_i915_gem_object*,int ,int,int) ;
 int FUNC_7 (struct drm_i915_gem_object*,int) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_9 (struct i915_hw_context*) ;
 int FUNC_10 (struct intel_ring_buffer*,struct i915_hw_context*,int ) ;

__attribute__((used)) static int FUNC_11(struct i915_hw_context *VAR_4)
{
 struct intel_ring_buffer *VAR_5 = VAR_4->ring;
 struct drm_i915_gem_object *VAR_6 = VAR_5->last_context_obj;
 u32 VAR_7 = 0;
 int VAR_8;

 FUNC_0(VAR_6 != ((void*)0) && VAR_6->pin_count == 0);

 if (VAR_6 == VAR_4->obj)
  return 0;

 VAR_8 = FUNC_6(VAR_4->obj, VAR_0, 0, 0);
 if (VAR_8)
  return VAR_8;






 VAR_8 = FUNC_7(VAR_4->obj, 0);
 if (VAR_8) {
  FUNC_8(VAR_4->obj);
  return VAR_8;
 }

 if (!VAR_4->obj->has_global_gtt_mapping)
  FUNC_4(VAR_4->obj, VAR_4->obj->cache_level);

 if (!VAR_4->is_initialized || FUNC_9(VAR_4))
  VAR_7 |= VAR_3;
 else if (FUNC_1(VAR_6 == VAR_4->obj))
  VAR_7 |= VAR_2;

 VAR_8 = FUNC_10(VAR_5, VAR_4, VAR_7);
 if (VAR_8) {
  FUNC_8(VAR_4->obj);
  return VAR_8;
 }







 if (VAR_6 != ((void*)0)) {
  VAR_6->base.read_domains = VAR_1;
  FUNC_5(VAR_6, VAR_5);







  VAR_6->dirty = 1;
  FUNC_0(VAR_6->ring != VAR_5);
  FUNC_8(VAR_6);

  FUNC_3(&VAR_6->base);
 }

 FUNC_2(&VAR_4->obj->base);
 VAR_5->last_context_obj = VAR_4->obj;
 VAR_4->is_initialized = 1;

 return 0;
}
