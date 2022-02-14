
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_i915_private {int backlight_enabled; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int ) ;

void FUNC_5(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;

 VAR_6->backlight_enabled = 0;
 FUNC_4(VAR_5, 0);

 if (FUNC_3(VAR_5)->gen >= 4) {
  uint32_t VAR_7, VAR_8;

  VAR_7 = FUNC_0(VAR_5) ? VAR_0 : VAR_1;

  FUNC_2(VAR_7, FUNC_1(VAR_7) & ~VAR_4);

  if (FUNC_0(VAR_5)) {
   VAR_8 = FUNC_1(VAR_2);
   VAR_8 &= ~VAR_3;
   FUNC_2(VAR_2, VAR_8);
  }
 }
}
