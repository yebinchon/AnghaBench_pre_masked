
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_gem_phys_object {int id; TYPE_3__* handle; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {struct drm_i915_gem_phys_object** phys_objs; } ;
struct TYPE_5__ {TYPE_1__ mm; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_6__ {int size; scalar_t__ vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct drm_device*,int,int) ;
 int FUNC_1 (struct drm_i915_gem_phys_object*) ;
 struct drm_i915_gem_phys_object* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3,
         int VAR_4, int VAR_5, int VAR_6)
{
 drm_i915_private_t *VAR_7 = VAR_3->dev_private;
 struct drm_i915_gem_phys_object *VAR_8;
 int VAR_9;

 if (VAR_7->mm.phys_objs[VAR_4 - 1] || !VAR_5)
  return 0;

 VAR_8 = FUNC_2(sizeof(struct drm_i915_gem_phys_object), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->id = VAR_4;

 VAR_8->handle = FUNC_0(VAR_3, VAR_5, VAR_6);
 if (!VAR_8->handle) {
  VAR_9 = -VAR_0;
  goto kfree_obj;
 }




 VAR_7->mm.phys_objs[VAR_4 - 1] = VAR_8;

 return 0;
kfree_obj:
 FUNC_1(VAR_8);
 return VAR_9;
}
