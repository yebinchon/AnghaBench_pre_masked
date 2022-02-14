
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int) ;
 struct intel_crtc* FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->dev;
 struct drm_i915_private *VAR_10 = VAR_9->dev_private;
 struct intel_crtc *VAR_11 = FUNC_7(VAR_8);
 int VAR_12 = VAR_11->pipe;
 u32 VAR_13, VAR_14;


 VAR_13 = FUNC_1(VAR_12);
 VAR_14 = FUNC_3(VAR_13);
 if (FUNC_5(VAR_9)) {
  VAR_14 &= ~VAR_3;
  VAR_14 |= VAR_3 | VAR_7;
 } else {
  VAR_14 &= ~VAR_2;
  VAR_14 |= VAR_2 | VAR_7;
 }
 FUNC_4(VAR_13, VAR_14);

 VAR_13 = FUNC_0(VAR_12);
 VAR_14 = FUNC_3(VAR_13);
 if (FUNC_2(VAR_9)) {
  VAR_14 &= ~VAR_5;
  VAR_14 |= VAR_4;
 } else {
  VAR_14 &= ~VAR_2;
  VAR_14 |= VAR_2;
 }
 FUNC_4(VAR_13, VAR_14 | VAR_6);


 FUNC_6(VAR_13);
 FUNC_8(1000);


 if (FUNC_5(VAR_9))
  FUNC_4(VAR_13, FUNC_3(VAR_13) | VAR_1 |
      VAR_0);
}
