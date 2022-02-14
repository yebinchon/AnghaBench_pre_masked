
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_3__* dev_private; } ;
struct TYPE_5__ {int param; int value; } ;
typedef TYPE_2__ drm_i915_setparam_t ;
struct TYPE_4__ {int allow_batchbuffer; } ;
struct TYPE_6__ {int fence_reg_start; int num_fence_regs; TYPE_1__ dri1; } ;
typedef TYPE_3__ drm_i915_private_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;





__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 drm_i915_private_t *VAR_4 = VAR_1->dev_private;
 drm_i915_setparam_t *VAR_5 = VAR_2;

 if (!VAR_4) {
  FUNC_1("called with no initialization\n");
  return -VAR_0;
 }

 switch (VAR_5->param) {
 case 128:
  break;
 case 129:
  break;
 case 131:
  VAR_4->dri1.allow_batchbuffer = VAR_5->value ? 1 : 0;
  break;
 case 130:
  if (VAR_5->value > VAR_4->num_fence_regs ||
      VAR_5->value < 0)
   return -VAR_0;

  VAR_4->fence_reg_start = VAR_5->value;
  break;
 default:
  FUNC_0("unknown parameter %d\n",
     VAR_5->param);
  return -VAR_0;
 }

 return 0;
}
