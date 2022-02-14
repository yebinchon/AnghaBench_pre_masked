
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_modeinfo {scalar_t__ clock; scalar_t__ vrefresh; int name; int type; int flags; int vscan; int vtotal; int vsync_end; int vsync_start; int vdisplay; int hskew; int htotal; int hsync_end; int hsync_start; int hdisplay; } ;
struct drm_display_mode {scalar_t__ clock; scalar_t__ vrefresh; scalar_t__* name; int type; int flags; int vscan; int vtotal; int vsync_end; int vsync_start; int vdisplay; int hskew; int htotal; int hsync_end; int hsync_start; int hdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct drm_display_mode *VAR_3,
      const struct drm_mode_modeinfo *VAR_4)
{
 if (VAR_4->clock > VAR_2 || VAR_4->vrefresh > VAR_2)
  return -VAR_1;

 VAR_3->clock = VAR_4->clock;
 VAR_3->hdisplay = VAR_4->hdisplay;
 VAR_3->hsync_start = VAR_4->hsync_start;
 VAR_3->hsync_end = VAR_4->hsync_end;
 VAR_3->htotal = VAR_4->htotal;
 VAR_3->hskew = VAR_4->hskew;
 VAR_3->vdisplay = VAR_4->vdisplay;
 VAR_3->vsync_start = VAR_4->vsync_start;
 VAR_3->vsync_end = VAR_4->vsync_end;
 VAR_3->vtotal = VAR_4->vtotal;
 VAR_3->vscan = VAR_4->vscan;
 VAR_3->vrefresh = VAR_4->vrefresh;
 VAR_3->flags = VAR_4->flags;
 VAR_3->type = VAR_4->type;
 FUNC_0(VAR_3->name, VAR_4->name, VAR_0);
 VAR_3->name[VAR_0-1] = 0;

 return 0;
}
