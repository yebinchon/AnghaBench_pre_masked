
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_crtc {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum mode_set_atomic { ____Placeholder_mode_set_atomic } mode_set_atomic ;


 struct nouveau_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct nouveau_crtc*,struct drm_framebuffer*,int,int,int) ;
 int FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static int
FUNC_3(struct drm_crtc *VAR_0,
          struct drm_framebuffer *VAR_1, int VAR_2, int VAR_3,
          enum mode_set_atomic VAR_4)
{
 struct nouveau_crtc *VAR_5 = FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3, 1);
 return 0;
}
