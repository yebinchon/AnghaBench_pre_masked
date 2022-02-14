
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int active_device; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_id; int encoder; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_crtc*,int,int,struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_5 (struct drm_crtc*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_8 (struct drm_crtc*) ;
 struct radeon_crtc* FUNC_9 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_10 (int ) ;

int FUNC_11(struct drm_crtc *VAR_2,
      struct drm_display_mode *VAR_3,
      struct drm_display_mode *VAR_4,
      int VAR_5, int VAR_6, struct drm_framebuffer *VAR_7)
{
 struct radeon_crtc *VAR_8 = FUNC_9(VAR_2);
 struct drm_device *VAR_9 = VAR_2->dev;
 struct radeon_device *VAR_10 = VAR_9->dev_private;
 struct radeon_encoder *VAR_11 =
  FUNC_10(VAR_8->encoder);
 bool VAR_12 = 0;

 if (VAR_11->active_device &
     (VAR_1 | VAR_0))
  VAR_12 = 1;

 FUNC_3(VAR_2, VAR_4);

 if (FUNC_1(VAR_10))
  FUNC_7(VAR_2, VAR_4);
 else if (FUNC_0(VAR_10)) {
  if (VAR_12)
   FUNC_4(VAR_2, VAR_4);
  else
   FUNC_7(VAR_2, VAR_4);
 } else {
  FUNC_4(VAR_2, VAR_4);
  if (VAR_8->crtc_id == 0)
   FUNC_7(VAR_2, VAR_4);
  FUNC_8(VAR_2);
 }
 FUNC_2(VAR_2, VAR_5, VAR_6, VAR_7);
 FUNC_5(VAR_2, VAR_3, VAR_4);
 FUNC_6(VAR_2);
 return 0;
}
