
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int pci_device; TYPE_1__* pdev; TYPE_4__* dev_private; } ;
struct TYPE_10__ {int aliasing_ppgtt; } ;
struct TYPE_9__ {int allow_batchbuffer; } ;
struct TYPE_11__ {int num_fence_regs; int fence_reg_start; TYPE_3__ mm; int * ring; int overlay; TYPE_2__ dri1; } ;
typedef TYPE_4__ drm_i915_private_t ;
struct TYPE_12__ {int param; int value; } ;
typedef TYPE_5__ drm_i915_getparam_t ;
struct TYPE_13__ {int gen; } ;
struct TYPE_8__ {int irq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct drm_device*) ;
 TYPE_7__* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (TYPE_4__*) ;
 size_t VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_5, void *VAR_6,
    struct drm_file *VAR_7)
{
 drm_i915_private_t *VAR_8 = VAR_5->dev_private;
 drm_i915_getparam_t *VAR_9 = VAR_6;
 int VAR_10;

 if (!VAR_8) {
  FUNC_2("called with no initialization\n");
  return -VAR_3;
 }

 switch (VAR_9->param) {
 case 130:
  VAR_10 = VAR_5->pdev->irq ? 1 : 0;
  break;
 case 152:
  VAR_10 = VAR_8->dri1.allow_batchbuffer ? 1 : 0;
  break;
 case 129:
  VAR_10 = FUNC_5(VAR_8);
  break;
 case 151:
  VAR_10 = VAR_5->pci_device;
  break;
 case 142:
  VAR_10 = 1;
  break;
 case 128:
  VAR_10 = VAR_8->num_fence_regs - VAR_8->fence_reg_start;
  break;
 case 139:
  VAR_10 = VAR_8->overlay ? 1 : 0;
  break;
 case 138:
  VAR_10 = 1;
  break;
 case 146:

  VAR_10 = 1;
  break;
 case 148:
  VAR_10 = FUNC_8(&VAR_8->ring[VAR_4]);
  break;
 case 149:
  VAR_10 = FUNC_8(&VAR_8->ring[VAR_0]);
  break;
 case 134:
  VAR_10 = 1;
  break;
 case 147:
  VAR_10 = 1;
  break;
 case 145:
  VAR_10 = FUNC_4(VAR_5)->gen >= 4;
  break;
 case 135:
  VAR_10 = 1;
  break;
 case 141:
  VAR_10 = 1;
  break;
 case 140:
  VAR_10 = FUNC_3(VAR_5);
  break;
 case 150:
  VAR_10 = VAR_8->mm.aliasing_ppgtt ? 1 : 0;
  break;
 case 131:
  VAR_10 = 1;
  break;
 case 132:
  VAR_10 = FUNC_7(VAR_5);
  break;
 case 136:
  VAR_10 = 1;
  break;
 case 133:
  VAR_10 = FUNC_6(VAR_1);
  break;
 case 137:
  VAR_10 = 1;
  break;
 case 143:
  VAR_10 = 1;
  break;
 case 144:
  VAR_10 = 1;
  break;
 default:
  FUNC_1("Unknown parameter %d\n",
     VAR_9->param);
  return -VAR_3;
 }

 if (FUNC_0(VAR_9->value, &VAR_10, sizeof(int))) {
  FUNC_2("DRM_COPY_TO_USER failed\n");
  return -VAR_2;
 }

 return 0;
}
