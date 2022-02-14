
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {scalar_t__ cfb_size; scalar_t__ compressed_llb; scalar_t__ compressed_fb; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;

 if (VAR_1->cfb_size == 0)
  return;

 if (VAR_1->compressed_fb)
  FUNC_0(VAR_1->compressed_fb);

 if (VAR_1->compressed_llb)
  FUNC_0(VAR_1->compressed_llb);

 VAR_1->cfb_size = 0;
}
