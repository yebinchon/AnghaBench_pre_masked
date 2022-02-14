
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_ring_buffer {int dummy; } ;
struct TYPE_2__ {scalar_t__ read_domains; scalar_t__ write_domain; } ;
struct drm_i915_gem_object {TYPE_1__ base; struct intel_ring_buffer* ring; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (struct drm_i915_gem_object*,scalar_t__,int,int) ;
 int FUNC_2 (struct drm_i915_gem_object*,int ) ;
 int FUNC_3 (struct drm_i915_gem_object*,struct intel_ring_buffer*) ;
 int FUNC_4 (struct drm_i915_gem_object*,scalar_t__,scalar_t__) ;

int
FUNC_5(struct drm_i915_gem_object *VAR_2,
         u32 VAR_3,
         struct intel_ring_buffer *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 if (VAR_4 != VAR_2->ring) {
  VAR_7 = FUNC_3(VAR_2, VAR_4);
  if (VAR_7)
   return VAR_7;
 }
 VAR_7 = FUNC_2(VAR_2, VAR_0);
 if (VAR_7)
  return VAR_7;





 VAR_7 = FUNC_1(VAR_2, VAR_3, 1, 0);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_2);

 VAR_6 = VAR_2->base.write_domain;
 VAR_5 = VAR_2->base.read_domains;




 VAR_2->base.write_domain = 0;
 VAR_2->base.read_domains |= VAR_1;

 FUNC_4(VAR_2,
         VAR_5,
         VAR_6);

 return 0;
}
