
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_display_mode*,int,int,struct drm_framebuffer*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct drm_crtc *VAR_0,
       struct drm_display_mode *VAR_1,
       int VAR_2, int VAR_3, struct drm_framebuffer *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5 == 0)
  FUNC_1(VAR_0->dev);

 return VAR_5;
}
