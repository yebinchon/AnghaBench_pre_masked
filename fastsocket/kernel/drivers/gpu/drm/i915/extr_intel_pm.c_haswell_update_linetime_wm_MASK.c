
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int crtc_hdisplay; int clock; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_1, int VAR_2,
     struct drm_display_mode *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_1->dev_private;
 u32 VAR_5;

 VAR_5 = FUNC_0(FUNC_2(VAR_2));
 VAR_5 &= ~VAR_0;




 VAR_5 |= FUNC_3(
  ((VAR_3->crtc_hdisplay * 1000) / VAR_3->clock) * 8);
 FUNC_1(FUNC_2(VAR_2), VAR_5);
}
