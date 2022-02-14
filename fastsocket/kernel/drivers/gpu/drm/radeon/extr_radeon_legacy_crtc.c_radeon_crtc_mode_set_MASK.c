
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_crtc {scalar_t__ crtc_id; scalar_t__ rmx_type; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_crtc*,int,int,struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_5 (struct drm_crtc*,struct drm_display_mode*) ;
 struct radeon_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_7(struct drm_crtc *VAR_1,
     struct drm_display_mode *VAR_2,
     struct drm_display_mode *VAR_3,
     int VAR_4, int VAR_5, struct drm_framebuffer *VAR_6)
{
 struct radeon_crtc *VAR_7 = FUNC_6(VAR_1);


 FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_1, VAR_3);
 FUNC_5(VAR_1, VAR_3);
 FUNC_3(VAR_1, VAR_3);
 if (VAR_7->crtc_id == 0) {
  FUNC_2(VAR_1, VAR_3);
 } else {
  if (VAR_7->rmx_type != VAR_0) {



   FUNC_0("Mode need scaling but only first crtc can do that.\n");
  }
 }
 return 0;
}
