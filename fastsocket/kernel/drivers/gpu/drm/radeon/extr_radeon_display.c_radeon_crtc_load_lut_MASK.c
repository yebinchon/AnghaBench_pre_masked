
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {int enabled; struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_crtc*) ;

void FUNC_7(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct radeon_device *VAR_2 = VAR_1->dev_private;

 if (!VAR_0->enabled)
  return;

 if (FUNC_2(VAR_2))
  FUNC_5(VAR_0);
 else if (FUNC_1(VAR_2))
  FUNC_4(VAR_0);
 else if (FUNC_0(VAR_2))
  FUNC_3(VAR_0);
 else
  FUNC_6(VAR_0);
}
