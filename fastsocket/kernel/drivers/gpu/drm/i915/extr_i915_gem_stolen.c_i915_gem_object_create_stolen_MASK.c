
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_mm_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ stolen_base; int stolen; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ) ;
 struct drm_i915_gem_object* FUNC_1 (struct drm_device*,struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_2 (struct drm_mm_node*,int ,int) ;
 int FUNC_3 (struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_4 (int *,int ,int,int ) ;

struct drm_i915_gem_object *
FUNC_5(struct drm_device *VAR_0, u32 VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;
 struct drm_i915_gem_object *VAR_3;
 struct drm_mm_node *VAR_4;

 if (VAR_2->mm.stolen_base == 0)
  return ((void*)0);

 FUNC_0("creating stolen object: size=%x\n", VAR_1);
 if (VAR_1 == 0)
  return ((void*)0);

 VAR_4 = FUNC_4(&VAR_2->mm.stolen, VAR_1, 4096, 0);
 if (VAR_4)
  VAR_4 = FUNC_2(VAR_4, VAR_1, 4096);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0, VAR_4);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_4);
 return ((void*)0);
}
