
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int interruptible; } ;
struct drm_i915_private {TYPE_3__ mm; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_8__ {struct drm_i915_gem_object* obj; } ;
struct TYPE_5__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct drm_i915_gem_object*) ;
 TYPE_4__* FUNC_1 (struct drm_framebuffer*) ;

__attribute__((used)) static int
FUNC_2(struct drm_framebuffer *VAR_0)
{
 struct drm_i915_gem_object *VAR_1 = FUNC_1(VAR_0)->obj;
 struct drm_i915_private *VAR_2 = VAR_1->base.dev->dev_private;
 bool VAR_3 = VAR_2->mm.interruptible;
 int VAR_4;
 VAR_2->mm.interruptible = 0;
 VAR_4 = FUNC_0(VAR_1);
 VAR_2->mm.interruptible = VAR_3;

 return VAR_4;
}
