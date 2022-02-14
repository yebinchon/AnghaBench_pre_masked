
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_modeinfo {scalar_t__ hdisplay; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ hskew; scalar_t__ vdisplay; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ vtotal; scalar_t__ vscan; scalar_t__* name; int type; int flags; int vrefresh; int clock; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ hskew; scalar_t__ vdisplay; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ vtotal; scalar_t__ vscan; int name; int type; int flags; int vrefresh; int clock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_mode_modeinfo *VAR_2,
          const struct drm_display_mode *VAR_3)
{
 FUNC_0(VAR_3->hdisplay > VAR_1 || VAR_3->hsync_start > VAR_1 ||
      VAR_3->hsync_end > VAR_1 || VAR_3->htotal > VAR_1 ||
      VAR_3->hskew > VAR_1 || VAR_3->vdisplay > VAR_1 ||
      VAR_3->vsync_start > VAR_1 || VAR_3->vsync_end > VAR_1 ||
      VAR_3->vtotal > VAR_1 || VAR_3->vscan > VAR_1,
      "timing values too large for mode info\n");

 VAR_2->clock = VAR_3->clock;
 VAR_2->hdisplay = VAR_3->hdisplay;
 VAR_2->hsync_start = VAR_3->hsync_start;
 VAR_2->hsync_end = VAR_3->hsync_end;
 VAR_2->htotal = VAR_3->htotal;
 VAR_2->hskew = VAR_3->hskew;
 VAR_2->vdisplay = VAR_3->vdisplay;
 VAR_2->vsync_start = VAR_3->vsync_start;
 VAR_2->vsync_end = VAR_3->vsync_end;
 VAR_2->vtotal = VAR_3->vtotal;
 VAR_2->vscan = VAR_3->vscan;
 VAR_2->vrefresh = VAR_3->vrefresh;
 VAR_2->flags = VAR_3->flags;
 VAR_2->type = VAR_3->type;
 FUNC_1(VAR_2->name, VAR_3->name, VAR_0);
 VAR_2->name[VAR_0-1] = 0;
}
