
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;

__attribute__((used)) static inline u32
FUNC_2(struct drm_device *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  struct drm_i915_private *VAR_3 = VAR_2->dev_private;
  return (FUNC_0(VAR_0) & VAR_1) + 2;
 } else
  return 27;
}
