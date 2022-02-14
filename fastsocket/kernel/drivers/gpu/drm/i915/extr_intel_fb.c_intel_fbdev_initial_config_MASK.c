
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {TYPE_1__* fbdev; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_3__ {int helper; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(struct drm_device *VAR_0)
{
 drm_i915_private_t *VAR_1 = VAR_0->dev_private;


 FUNC_0(&VAR_1->fbdev->helper, 32);
}
