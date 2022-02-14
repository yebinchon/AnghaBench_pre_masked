
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_pin {int offset; int alignment; int handle; } ;
struct drm_i915_gem_object {scalar_t__ madv; scalar_t__ user_pin_count; int base; int gtt_offset; struct drm_file* pin_filp; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,int ,int,int) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *) ;
 struct drm_i915_gem_object* FUNC_7 (int ) ;

int
FUNC_8(struct drm_device *VAR_3, void *VAR_4,
     struct drm_file *VAR_5)
{
 struct drm_i915_gem_pin *VAR_6 = VAR_4;
 struct drm_i915_gem_object *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_7(FUNC_1(VAR_3, VAR_5, VAR_6->handle));
 if (&VAR_7->base == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto unlock;
 }

 if (VAR_7->madv != VAR_2) {
  FUNC_0("Attempting to pin a purgeable buffer\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_7->pin_filp != ((void*)0) && VAR_7->pin_filp != VAR_5) {
  FUNC_0("Already pinned in i915_gem_pin_ioctl(): %d\n",
     VAR_6->handle);
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_7->user_pin_count == 0) {
  VAR_8 = FUNC_4(VAR_7, VAR_6->alignment, 1, 0);
  if (VAR_8)
   goto out;
 }

 VAR_7->user_pin_count++;
 VAR_7->pin_filp = VAR_5;




 FUNC_3(VAR_7);
 VAR_6->offset = VAR_7->gtt_offset;
out:
 FUNC_2(&VAR_7->base);
unlock:
 FUNC_6(&VAR_3->struct_mutex);
 return VAR_8;
}
