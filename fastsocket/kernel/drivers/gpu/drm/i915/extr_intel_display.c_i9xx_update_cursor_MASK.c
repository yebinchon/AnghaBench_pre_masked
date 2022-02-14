
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct intel_crtc {int pipe; int cursor_visible; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct intel_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_5, u32 VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;
 struct intel_crtc *VAR_9 = FUNC_4(VAR_5);
 int VAR_10 = VAR_9->pipe;
 bool VAR_11 = VAR_6 != 0;

 if (VAR_9->cursor_visible != VAR_11) {
  uint32_t VAR_12 = FUNC_2(FUNC_1(VAR_10));
  if (VAR_6) {
   VAR_12 &= ~(VAR_0 | VAR_4);
   VAR_12 |= VAR_1 | VAR_3;
   VAR_12 |= VAR_10 << 28;
  } else {
   VAR_12 &= ~(VAR_0 | VAR_3);
   VAR_12 |= VAR_2;
  }
  FUNC_3(FUNC_1(VAR_10), VAR_12);

  VAR_9->cursor_visible = VAR_11;
 }

 FUNC_3(FUNC_0(VAR_10), VAR_6);
}
