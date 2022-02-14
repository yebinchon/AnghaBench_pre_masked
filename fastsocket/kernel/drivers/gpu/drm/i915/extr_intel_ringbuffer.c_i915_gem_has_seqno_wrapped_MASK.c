
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {scalar_t__ last_seqno; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;



__attribute__((used)) static inline bool FUNC_0(struct drm_device *VAR_0,
           u32 VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;
 return VAR_2->last_seqno < VAR_1;
}
