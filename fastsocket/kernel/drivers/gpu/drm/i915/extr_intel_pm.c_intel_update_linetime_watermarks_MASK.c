
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* update_linetime_wm ) (struct drm_device*,int,struct drm_display_mode*) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct drm_device*,int,struct drm_display_mode*) ;

void FUNC_1(struct drm_device *VAR_0,
  int VAR_1, struct drm_display_mode *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_0->dev_private;

 if (VAR_3->display.update_linetime_wm)
  VAR_3->display.update_linetime_wm(VAR_0, VAR_1, VAR_2);
}
