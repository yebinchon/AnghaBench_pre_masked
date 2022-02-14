
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int crtc_hsync_end; int crtc_hsync_start; int crtc_hblank_end; int crtc_hblank_start; int hdisplay; int crtc_hdisplay; int private_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct drm_display_mode *VAR_1,
      int VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_6 = VAR_1->crtc_hsync_end - VAR_1->crtc_hsync_start;
 VAR_5 = VAR_1->crtc_hblank_end - VAR_1->crtc_hblank_start;
 VAR_4 = (VAR_5 - VAR_6 + 1) / 2;

 VAR_3 = (VAR_1->hdisplay - VAR_2 + 1) / 2;
 VAR_3 += VAR_3 & 1;

 VAR_1->crtc_hdisplay = VAR_2;
 VAR_1->crtc_hblank_start = VAR_2 + VAR_3;
 VAR_1->crtc_hblank_end = VAR_1->crtc_hblank_start + VAR_5;

 VAR_1->crtc_hsync_start = VAR_1->crtc_hblank_start + VAR_4;
 VAR_1->crtc_hsync_end = VAR_1->crtc_hsync_start + VAR_6;

 VAR_1->private_flags |= VAR_0;
}
