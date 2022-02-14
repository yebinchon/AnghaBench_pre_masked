
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct radeon_crtc {int in_mode_set; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_crtc*,int ) ;
 int FUNC_2 (struct drm_crtc*,int ) ;
 int FUNC_3 (struct drm_crtc*,int ) ;
 struct radeon_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_3)
{
 struct radeon_crtc *VAR_4 = FUNC_4(VAR_3);
 struct drm_device *VAR_5 = VAR_3->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;

 VAR_4->in_mode_set = 1;


 if (FUNC_0(VAR_6))
  FUNC_3(VAR_3, VAR_0);

 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_2);
}
