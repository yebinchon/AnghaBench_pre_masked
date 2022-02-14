
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_2__* dev_private; } ;
struct TYPE_4__ {int suspended; int active_list; } ;
struct TYPE_6__ {int reset_counter; } ;
struct TYPE_5__ {TYPE_1__ mm; TYPE_3__ gpu_error; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 drm_i915_private_t *VAR_4 = VAR_1->dev_private;
 int VAR_5;

 if (FUNC_3(VAR_1, VAR_0))
  return 0;

 if (FUNC_7(&VAR_4->gpu_error)) {
  FUNC_1("Reenabling wedged hardware, good luck\n");
  FUNC_2(&VAR_4->gpu_error.reset_counter, 0);
 }

 FUNC_9(&VAR_1->struct_mutex);
 VAR_4->mm.suspended = 0;

 VAR_5 = FUNC_6(VAR_1);
 if (VAR_5 != 0) {
  FUNC_10(&VAR_1->struct_mutex);
  return VAR_5;
 }

 FUNC_0(!FUNC_8(&VAR_4->mm.active_list));
 FUNC_10(&VAR_1->struct_mutex);

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5)
  goto cleanup_ringbuffer;

 return 0;

cleanup_ringbuffer:
 FUNC_9(&VAR_1->struct_mutex);
 FUNC_5(VAR_1);
 VAR_4->mm.suspended = 1;
 FUNC_10(&VAR_1->struct_mutex);

 return VAR_5;
}
