
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct intel_ring_buffer {struct drm_device* dev; } ;
struct TYPE_4__ {int reset_counter; } ;
struct TYPE_3__ {int interruptible; } ;
struct drm_i915_private {TYPE_2__ gpu_error; TYPE_1__ mm; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_ring_buffer*,scalar_t__,int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_ring_buffer*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct intel_ring_buffer *VAR_0, uint32_t VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 bool VAR_4 = VAR_3->mm.interruptible;
 int VAR_5;

 FUNC_0(!FUNC_5(&VAR_2->struct_mutex));
 FUNC_0(VAR_1 == 0);

 VAR_5 = FUNC_4(&VAR_3->gpu_error, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_1);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0, VAR_1,
       FUNC_2(&VAR_3->gpu_error.reset_counter),
       VAR_4, ((void*)0));
}
