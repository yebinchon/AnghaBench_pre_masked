
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u64 ;
struct TYPE_5__ {scalar_t__ mappable_end; } ;
struct drm_i915_private {TYPE_1__ gtt; } ;
struct TYPE_6__ {scalar_t__ key; } ;
struct TYPE_7__ {TYPE_2__ hash; } ;
struct TYPE_8__ {scalar_t__ size; TYPE_3__ map_list; } ;
struct drm_i915_gem_object {scalar_t__ madv; TYPE_4__ base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 struct drm_i915_gem_object* FUNC_6 (int ) ;

int
FUNC_7(struct drm_file *VAR_5,
    struct drm_device *VAR_6,
    uint32_t VAR_7,
    uint64_t *VAR_8)
{
 struct drm_i915_private *VAR_9 = VAR_6->dev_private;
 struct drm_i915_gem_object *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_6(FUNC_1(VAR_6, VAR_5, VAR_7));
 if (&VAR_10->base == ((void*)0)) {
  VAR_11 = -VAR_2;
  goto unlock;
 }

 if (VAR_10->base.size > VAR_9->gtt.mappable_end) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_10->madv != VAR_3) {
  FUNC_0("Attempting to mmap a purgeable buffer\n");
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11)
  goto out;

 *VAR_8 = (u64)VAR_10->base.map_list.hash.key << VAR_4;

out:
 FUNC_2(&VAR_10->base);
unlock:
 FUNC_5(&VAR_6->struct_mutex);
 return VAR_11;
}
