
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {TYPE_1__* fence_regs; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;
struct TYPE_3__ {struct drm_i915_gem_object* obj; } ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int,struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_device*,int,struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_device*,int,struct drm_i915_gem_object*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_0, int VAR_1,
     struct drm_i915_gem_object *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_0->dev_private;




 if (FUNC_3(VAR_3->fence_regs[VAR_1].obj))
  FUNC_6();

 switch (FUNC_1(VAR_0)->gen) {
 case 7:
 case 6:
 case 5:
 case 4: FUNC_5(VAR_0, VAR_1, VAR_2); break;
 case 3: FUNC_4(VAR_0, VAR_1, VAR_2); break;
 case 2: FUNC_2(VAR_0, VAR_1, VAR_2); break;
 default: FUNC_0();
 }




 if (FUNC_3(VAR_2))
  FUNC_6();
}
