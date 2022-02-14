
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int private_flags; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 struct intel_crtc* FUNC_15 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_16(struct drm_crtc *VAR_3,
          const struct drm_display_mode *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 struct intel_crtc *VAR_7 = FUNC_15(VAR_3);
 int VAR_8 = VAR_7->pipe;
 uint16_t VAR_9 = 0x7800;
 if (VAR_4->private_flags & VAR_2)
  VAR_9 = ((235 - 16) * (1 << 12) / 255) & 0xff8;






 FUNC_0(FUNC_7(VAR_8), VAR_9 << 16);
 FUNC_0(FUNC_4(VAR_8), 0);

 FUNC_0(FUNC_5(VAR_8), VAR_9);
 FUNC_0(FUNC_2(VAR_8), 0);

 FUNC_0(FUNC_6(VAR_8), 0);
 FUNC_0(FUNC_3(VAR_8), VAR_9 << 16);

 FUNC_0(FUNC_12(VAR_8), 0);
 FUNC_0(FUNC_14(VAR_8), 0);
 FUNC_0(FUNC_13(VAR_8), 0);

 if (FUNC_1(VAR_5)->gen > 6) {
  uint16_t VAR_10 = 0;

  if (VAR_4->private_flags & VAR_2)
   VAR_10 = (16 * (1 << 13) / 255) & 0x1fff;

  FUNC_0(FUNC_9(VAR_8), VAR_10);
  FUNC_0(FUNC_11(VAR_8), VAR_10);
  FUNC_0(FUNC_10(VAR_8), VAR_10);

  FUNC_0(FUNC_8(VAR_8), 0);
 } else {
  uint32_t VAR_11 = VAR_1;

  if (VAR_4->private_flags & VAR_2)
   VAR_11 |= VAR_0;

  FUNC_0(FUNC_8(VAR_8), VAR_11);
 }
}
