
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int htotal; unsigned int hdisplay; unsigned int vtotal; unsigned int vdisplay; unsigned int hsync_start; unsigned int vsync_start; unsigned int hsync_end; unsigned int vsync_end; unsigned int crtc_hdisplay; unsigned int crtc_vdisplay; unsigned int crtc_htotal; unsigned int crtc_hsync_start; unsigned int crtc_hsync_end; unsigned int crtc_vtotal; unsigned int crtc_vsync_start; unsigned int crtc_vsync_end; int flags; int clock; } ;
struct radeon_encoder {struct drm_display_mode native_mode; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

void FUNC_3(struct drm_encoder *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct radeon_encoder *VAR_3 = FUNC_2(VAR_1);
 struct drm_device *VAR_4 = VAR_1->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct drm_display_mode *VAR_6 = &VAR_3->native_mode;
 unsigned VAR_7 = VAR_6->htotal - VAR_6->hdisplay;
 unsigned VAR_8 = VAR_6->vtotal - VAR_6->vdisplay;
 unsigned VAR_9 = VAR_6->hsync_start - VAR_6->hdisplay;
 unsigned VAR_10 = VAR_6->vsync_start - VAR_6->vdisplay;
 unsigned VAR_11 = VAR_6->hsync_end - VAR_6->hsync_start;
 unsigned VAR_12 = VAR_6->vsync_end - VAR_6->vsync_start;

 VAR_2->clock = VAR_6->clock;
 VAR_2->flags = VAR_6->flags;

 if (FUNC_0(VAR_5)) {
  VAR_2->hdisplay = VAR_6->hdisplay;
  VAR_2->vdisplay = VAR_6->vdisplay;
 }

 VAR_2->htotal = VAR_6->hdisplay + VAR_7;
 VAR_2->hsync_start = VAR_6->hdisplay + VAR_9;
 VAR_2->hsync_end = VAR_2->hsync_start + VAR_11;

 VAR_2->vtotal = VAR_6->vdisplay + VAR_8;
 VAR_2->vsync_start = VAR_6->vdisplay + VAR_10;
 VAR_2->vsync_end = VAR_2->vsync_start + VAR_12;

 FUNC_1(VAR_2, VAR_0);

 if (FUNC_0(VAR_5)) {
  VAR_2->crtc_hdisplay = VAR_6->hdisplay;
  VAR_2->crtc_vdisplay = VAR_6->vdisplay;
 }

 VAR_2->crtc_htotal = VAR_2->crtc_hdisplay + VAR_7;
 VAR_2->crtc_hsync_start = VAR_2->crtc_hdisplay + VAR_9;
 VAR_2->crtc_hsync_end = VAR_2->crtc_hsync_start + VAR_11;

 VAR_2->crtc_vtotal = VAR_2->crtc_vdisplay + VAR_8;
 VAR_2->crtc_vsync_start = VAR_2->crtc_vdisplay + VAR_10;
 VAR_2->crtc_vsync_end = VAR_2->crtc_vsync_start + VAR_12;

}
