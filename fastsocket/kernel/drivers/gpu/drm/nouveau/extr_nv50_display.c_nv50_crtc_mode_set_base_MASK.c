
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {int dummy; } ;
struct nouveau_crtc {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int fb; int dev; } ;


 int FUNC_0 (struct nouveau_drm*,char*) ;
 struct nouveau_crtc* FUNC_1 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_crtc*,int ,int,int,int) ;
 int FUNC_4 (struct drm_crtc*,struct drm_framebuffer*) ;
 int FUNC_5 (struct drm_crtc*,int ,int *,int) ;
 int FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static int
FUNC_7(struct drm_crtc *VAR_0, int VAR_1, int VAR_2,
   struct drm_framebuffer *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_2(VAR_0->dev);
 struct nouveau_crtc *VAR_5 = FUNC_1(VAR_0);
 int VAR_6;

 if (!VAR_0->fb) {
  FUNC_0(VAR_4, "No FB bound\n");
  return 0;
 }

 VAR_6 = FUNC_4(VAR_0, VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_6(VAR_0);
 FUNC_3(VAR_5, VAR_0->fb, VAR_1, VAR_2, 1);
 FUNC_5(VAR_0, VAR_0->fb, ((void*)0), 1);
 return 0;
}
