
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_gem_phys_object {TYPE_3__* handle; scalar_t__ cur_obj; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {struct drm_i915_gem_phys_object** phys_objs; } ;
struct TYPE_5__ {TYPE_1__ mm; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_6__ {int size; scalar_t__ vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,TYPE_3__*) ;
 int FUNC_1 (struct drm_device*,scalar_t__) ;
 int FUNC_2 (struct drm_i915_gem_phys_object*) ;
 int FUNC_3 (unsigned long,int) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_1, int VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_1->dev_private;
 struct drm_i915_gem_phys_object *VAR_4;

 if (!VAR_3->mm.phys_objs[VAR_2 - 1])
  return;

 VAR_4 = VAR_3->mm.phys_objs[VAR_2 - 1];
 if (VAR_4->cur_obj) {
  FUNC_1(VAR_1, VAR_4->cur_obj);
 }




 FUNC_0(VAR_1, VAR_4->handle);
 FUNC_2(VAR_4);
 VAR_3->mm.phys_objs[VAR_2 - 1] = ((void*)0);
}
