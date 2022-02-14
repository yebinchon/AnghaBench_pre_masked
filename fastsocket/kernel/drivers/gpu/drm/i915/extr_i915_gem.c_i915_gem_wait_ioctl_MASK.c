
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct timespec {int dummy; } ;
struct intel_ring_buffer {int dummy; } ;
struct drm_i915_gem_wait {scalar_t__ timeout_ns; int bo_handle; } ;
struct drm_i915_gem_object {scalar_t__ last_read_seqno; int base; struct intel_ring_buffer* ring; scalar_t__ active; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_2__* dev_private; } ;
struct TYPE_3__ {int reset_counter; } ;
struct TYPE_4__ {TYPE_1__ gpu_error; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_ring_buffer*,scalar_t__,unsigned int,int,struct timespec*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int *) ;
 struct timespec FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct timespec*) ;
 int FUNC_10 (struct timespec*) ;
 struct drm_i915_gem_object* FUNC_11 (int ) ;

int
FUNC_12(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_i915_private_t *VAR_5 = VAR_2->dev_private;
 struct drm_i915_gem_wait *VAR_6 = VAR_3;
 struct drm_i915_gem_object *VAR_7;
 struct intel_ring_buffer *VAR_8 = ((void*)0);
 struct timespec VAR_9, *VAR_10 = ((void*)0);
 unsigned VAR_11;
 u32 VAR_12 = 0;
 int VAR_13 = 0;

 if (VAR_6->timeout_ns >= 0) {
  VAR_9 = FUNC_8(VAR_6->timeout_ns);
  VAR_10 = &VAR_9;
 }

 VAR_13 = FUNC_6(VAR_2);
 if (VAR_13)
  return VAR_13;

 VAR_7 = FUNC_11(FUNC_3(VAR_2, VAR_4, VAR_6->bo_handle));
 if (&VAR_7->base == ((void*)0)) {
  FUNC_7(&VAR_2->struct_mutex);
  return -VAR_0;
 }


 VAR_13 = FUNC_5(VAR_7);
 if (VAR_13)
  goto out;

 if (VAR_7->active) {
  VAR_12 = VAR_7->last_read_seqno;
  VAR_8 = VAR_7->ring;
 }

 if (VAR_12 == 0)
   goto out;




 if (!VAR_6->timeout_ns) {
  VAR_13 = -VAR_1;
  goto out;
 }

 FUNC_4(&VAR_7->base);
 VAR_11 = FUNC_2(&VAR_5->gpu_error.reset_counter);
 FUNC_7(&VAR_2->struct_mutex);

 VAR_13 = FUNC_1(VAR_8, VAR_12, VAR_11, 1, VAR_10);
 if (VAR_10) {
  FUNC_0(!FUNC_10(VAR_10));
  VAR_6->timeout_ns = FUNC_9(VAR_10);
 }
 return VAR_13;

out:
 FUNC_4(&VAR_7->base);
 FUNC_7(&VAR_2->struct_mutex);
 return VAR_13;
}
