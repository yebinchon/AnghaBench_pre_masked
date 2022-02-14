
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_framebuffer {int nvbo; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct nouveau_framebuffer* FUNC_2 (struct drm_framebuffer*) ;

__attribute__((used)) static int
FUNC_3(struct drm_crtc *VAR_1, struct drm_framebuffer *VAR_2)
{
 struct nouveau_framebuffer *VAR_3 = FUNC_2(VAR_1->fb);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->nvbo, VAR_0);
 if (VAR_4)
  return VAR_4;

 if (VAR_2) {
  VAR_3 = FUNC_2(VAR_2);
  FUNC_1(VAR_3->nvbo);
 }

 return 0;
}
