
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {int struct_mutex; TYPE_3__* dev_private; } ;
struct TYPE_5__ {int suspended; int retire_work; } ;
struct TYPE_4__ {int hangcheck_timer; } ;
struct TYPE_6__ {TYPE_2__ mm; TYPE_1__ gpu_error; } ;
typedef TYPE_3__ drm_i915_private_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(struct drm_device *VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 FUNC_9(&VAR_1->struct_mutex);

 if (VAR_2->mm.suspended) {
  FUNC_10(&VAR_1->struct_mutex);
  return 0;
 }

 VAR_3 = FUNC_7(VAR_1);
 if (VAR_3) {
  FUNC_10(&VAR_1->struct_mutex);
  return VAR_3;
 }
 FUNC_6(VAR_1);


 if (!FUNC_2(VAR_1, VAR_0))
  FUNC_4(VAR_1);

 FUNC_5(VAR_1);





 VAR_2->mm.suspended = 1;
 FUNC_1(&VAR_2->gpu_error.hangcheck_timer);

 FUNC_8(VAR_1);
 FUNC_3(VAR_1);

 FUNC_10(&VAR_1->struct_mutex);


 FUNC_0(&VAR_2->mm.retire_work);

 return 0;
}
