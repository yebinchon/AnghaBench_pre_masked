
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* update_sprite_wm ) (struct drm_device*,int,int ,int) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct drm_device*,int,int ,int) ;

void FUNC_1(struct drm_device *VAR_0, int VAR_1,
        uint32_t VAR_2, int VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_0->dev_private;

 if (VAR_4->display.update_sprite_wm)
  VAR_4->display.update_sprite_wm(VAR_0, VAR_1, VAR_2,
         VAR_3);
}
