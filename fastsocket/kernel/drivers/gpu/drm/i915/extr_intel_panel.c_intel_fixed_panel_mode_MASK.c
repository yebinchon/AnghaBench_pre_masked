
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; int vtotal; int vsync_end; int vsync_start; int vdisplay; int htotal; int hsync_end; int hsync_start; int hdisplay; } ;



void
FUNC_0(struct drm_display_mode *VAR_0,
         struct drm_display_mode *VAR_1)
{
 VAR_1->hdisplay = VAR_0->hdisplay;
 VAR_1->hsync_start = VAR_0->hsync_start;
 VAR_1->hsync_end = VAR_0->hsync_end;
 VAR_1->htotal = VAR_0->htotal;

 VAR_1->vdisplay = VAR_0->vdisplay;
 VAR_1->vsync_start = VAR_0->vsync_start;
 VAR_1->vsync_end = VAR_0->vsync_end;
 VAR_1->vtotal = VAR_0->vtotal;

 VAR_1->clock = VAR_0->clock;
}
