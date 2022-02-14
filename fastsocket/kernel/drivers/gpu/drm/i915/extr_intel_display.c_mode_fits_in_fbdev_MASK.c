
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_private {TYPE_2__* fbdev; } ;
struct TYPE_6__ {int size; } ;
struct drm_i915_gem_object {TYPE_3__ base; } ;
struct drm_framebuffer {int* pitches; int bits_per_pixel; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {struct drm_framebuffer base; struct drm_i915_gem_object* obj; } ;
struct TYPE_5__ {TYPE_1__ ifb; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_1(struct drm_device *VAR_0,
     struct drm_display_mode *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;
 struct drm_i915_gem_object *VAR_3;
 struct drm_framebuffer *VAR_4;

 if (VAR_2->fbdev == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_2->fbdev->ifb.obj;
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_4 = &VAR_2->fbdev->ifb.base;
 if (VAR_4->pitches[0] < FUNC_0(VAR_1->hdisplay,
              VAR_4->bits_per_pixel))
  return ((void*)0);

 if (VAR_3->base.size < VAR_1->vdisplay * VAR_4->pitches[0])
  return ((void*)0);

 return VAR_4;
}
