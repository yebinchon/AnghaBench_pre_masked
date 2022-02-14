
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int crtc_vsync_end; int crtc_vsync_start; int crtc_vblank_end; int crtc_vblank_start; int vdisplay; int crtc_vdisplay; int private_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct drm_display_mode *VAR_1,
    int VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_6 = VAR_1->crtc_vsync_end - VAR_1->crtc_vsync_start;
 VAR_5 = VAR_1->crtc_vblank_end - VAR_1->crtc_vblank_start;
 VAR_4 = (VAR_5 - VAR_6 + 1) / 2;

 VAR_3 = (VAR_1->vdisplay - VAR_2 + 1) / 2;

 VAR_1->crtc_vdisplay = VAR_2;
 VAR_1->crtc_vblank_start = VAR_2 + VAR_3;
 VAR_1->crtc_vblank_end = VAR_1->crtc_vblank_start + VAR_5;

 VAR_1->crtc_vsync_start = VAR_1->crtc_vblank_start + VAR_4;
 VAR_1->crtc_vsync_end = VAR_1->crtc_vsync_start + VAR_6;

 VAR_1->private_flags |= VAR_0;
}
