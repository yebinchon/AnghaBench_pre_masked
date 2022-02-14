
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_framebuffer*,int,int,int ) ;
 int FUNC_3 (struct drm_crtc*,struct drm_framebuffer*,int,int,int ) ;
 int FUNC_4 (struct drm_crtc*,struct drm_framebuffer*,int,int,int ) ;

int FUNC_5(struct drm_crtc *VAR_0, int VAR_1, int VAR_2,
      struct drm_framebuffer *VAR_3)
{
 struct drm_device *VAR_4 = VAR_0->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;

 if (FUNC_1(VAR_5))
  return FUNC_3(VAR_0, VAR_3, VAR_1, VAR_2, 0);
 else if (FUNC_0(VAR_5))
  return FUNC_2(VAR_0, VAR_3, VAR_1, VAR_2, 0);
 else
  return FUNC_4(VAR_0, VAR_3, VAR_1, VAR_2, 0);
}
