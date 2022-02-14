
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_crtc {int cursor_visible; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_6, u32 VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct drm_i915_private *VAR_9 = VAR_8->dev_private;
 struct intel_crtc *VAR_10 = FUNC_2(VAR_6);
 bool VAR_11 = VAR_7 != 0;
 u32 VAR_12;

 if (VAR_10->cursor_visible == VAR_11)
  return;

 VAR_12 = FUNC_0(VAR_5);
 if (VAR_11) {



  FUNC_1(VAR_4, VAR_7);

  VAR_12 &= ~(VAR_2);

  VAR_12 |= VAR_0 |
   VAR_3 |
   VAR_1;
 } else
  VAR_12 &= ~(VAR_0 | VAR_3);
 FUNC_1(VAR_5, VAR_12);

 VAR_10->cursor_visible = VAR_11;
}
