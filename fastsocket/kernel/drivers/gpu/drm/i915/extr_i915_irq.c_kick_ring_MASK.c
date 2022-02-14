
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int name; struct drm_device* dev; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_3(struct intel_ring_buffer *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 u32 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 & VAR_0) {
  FUNC_0("Kicking stuck wait on %s\n",
     VAR_1->name);
  FUNC_2(VAR_1, VAR_4);
  return 1;
 }
 return 0;
}
