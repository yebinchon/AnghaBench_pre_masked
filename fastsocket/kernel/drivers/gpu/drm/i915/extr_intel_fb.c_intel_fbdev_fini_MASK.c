
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int * fbdev; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_device *VAR_0)
{
 drm_i915_private_t *VAR_1 = VAR_0->dev_private;
 if (!VAR_1->fbdev)
  return;

 FUNC_0(VAR_0, VAR_1->fbdev);
 FUNC_1(VAR_1->fbdev);
 VAR_1->fbdev = ((void*)0);
}
