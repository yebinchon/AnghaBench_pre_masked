
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int cursor_x; int cursor_y; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*,int) ;
 struct intel_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_0, int VAR_1, int VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_1(VAR_0);

 VAR_3->cursor_x = VAR_1;
 VAR_3->cursor_y = VAR_2;

 FUNC_0(VAR_0, 1);

 return 0;
}
