
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; int cpu_transcoder; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int flags; int crtc_vtotal; int crtc_vblank_end; int crtc_hsync_start; int crtc_htotal; int crtc_hdisplay; int crtc_hblank_start; int crtc_hblank_end; int crtc_hsync_end; int crtc_vdisplay; int crtc_vblank_start; int crtc_vsync_start; int crtc_vsync_end; int hdisplay; int vdisplay; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_2__* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct intel_crtc *VAR_4,
       struct drm_display_mode *VAR_5,
       struct drm_display_mode *VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->base.dev;
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;
 enum pipe VAR_9 = VAR_4->pipe;
 enum transcoder VAR_10 = VAR_4->cpu_transcoder;
 uint32_t VAR_11;

 if (!FUNC_6(VAR_7) && VAR_6->flags & VAR_0) {

  VAR_6->crtc_vtotal -= 1;
  VAR_6->crtc_vblank_end -= 1;
  VAR_11 = VAR_6->crtc_hsync_start
        - VAR_6->crtc_htotal / 2;
 } else {
  VAR_11 = 0;
 }

 if (FUNC_5(VAR_7)->gen > 3)
  FUNC_4(FUNC_11(VAR_10), VAR_11);

 FUNC_4(FUNC_2(VAR_10),
     (VAR_6->crtc_hdisplay - 1) |
     ((VAR_6->crtc_htotal - 1) << 16));
 FUNC_4(FUNC_0(VAR_10),
     (VAR_6->crtc_hblank_start - 1) |
     ((VAR_6->crtc_hblank_end - 1) << 16));
 FUNC_4(FUNC_1(VAR_10),
     (VAR_6->crtc_hsync_start - 1) |
     ((VAR_6->crtc_hsync_end - 1) << 16));

 FUNC_4(FUNC_12(VAR_10),
     (VAR_6->crtc_vdisplay - 1) |
     ((VAR_6->crtc_vtotal - 1) << 16));
 FUNC_4(FUNC_9(VAR_10),
     (VAR_6->crtc_vblank_start - 1) |
     ((VAR_6->crtc_vblank_end - 1) << 16));
 FUNC_4(FUNC_10(VAR_10),
     (VAR_6->crtc_vsync_start - 1) |
     ((VAR_6->crtc_vsync_end - 1) << 16));





 if (FUNC_7(VAR_7) && VAR_10 == VAR_3 &&
     (VAR_9 == VAR_1 || VAR_9 == VAR_2))
  FUNC_4(FUNC_12(VAR_9), FUNC_3(FUNC_12(VAR_10)));




 FUNC_4(FUNC_8(VAR_9),
     ((VAR_5->hdisplay - 1) << 16) | (VAR_5->vdisplay - 1));
}
