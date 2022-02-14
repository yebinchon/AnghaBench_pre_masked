
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int vdisplay; int hdisplay; } ;



__attribute__((used)) static bool FUNC_0(const struct drm_display_mode *VAR_0)
{

 if ((VAR_0->vdisplay == 480 && VAR_0->hdisplay == 720) ||
     (VAR_0->vdisplay == 576) ||
     (VAR_0->vdisplay == 720) ||
     (VAR_0->vdisplay == 1080))
  return 1;
 else
  return 0;
}
