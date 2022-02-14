
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_4, int VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct drm_i915_private *VAR_7 = VAR_6->dev_private;
 u32 VAR_8;

 FUNC_0("eDP PLL enable for clock %d\n", VAR_5);
 VAR_8 = FUNC_1(VAR_0);
 VAR_8 &= ~VAR_3;

 if (VAR_5 < 200000) {



  FUNC_0("160MHz cpu eDP clock, might need ilk devA w/a\n");
  VAR_8 |= VAR_1;
 } else {
  VAR_8 |= VAR_2;
 }

 FUNC_2(VAR_0, VAR_8);

 FUNC_3(VAR_0);
 FUNC_4(500);
}
