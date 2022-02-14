
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; int hsync_end; int hsync_start; } ;


 int FUNC_0 (struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_1(struct drm_display_mode *VAR_0)
{
 if (VAR_0->hdisplay == 1368 && VAR_0->vdisplay == 768) {
  VAR_0->hdisplay = 1366;
  VAR_0->hsync_start--;
  VAR_0->hsync_end--;
  FUNC_0(VAR_0);
 }
}
