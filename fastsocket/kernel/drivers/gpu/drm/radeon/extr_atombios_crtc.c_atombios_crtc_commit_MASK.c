
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_crtc {int in_mode_set; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc*,int ) ;
 int FUNC_1 (struct drm_crtc*,int ) ;
 struct radeon_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_2)
{
 struct radeon_crtc *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);
 VAR_3->in_mode_set = 0;
}
