
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sync_off_width_high; int v_sync_off_width; int v_sync_off_high; int dtd_flags; scalar_t__ h_sync_width; scalar_t__ h_sync_off; } ;
struct TYPE_3__ {int h_high; int v_high; int clock; scalar_t__ v_blank; scalar_t__ v_active; scalar_t__ h_blank; scalar_t__ h_active; } ;
struct intel_sdvo_dtd {TYPE_2__ part2; TYPE_1__ part1; } ;
struct drm_display_mode {int clock; int flags; scalar_t__ vtotal; scalar_t__ vdisplay; scalar_t__ vsync_end; scalar_t__ vsync_start; scalar_t__ htotal; scalar_t__ hdisplay; scalar_t__ hsync_end; scalar_t__ hsync_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct drm_display_mode * VAR_6,
      const struct intel_sdvo_dtd *VAR_7)
{
 VAR_6->hdisplay = VAR_7->part1.h_active;
 VAR_6->hdisplay += ((VAR_7->part1.h_high >> 4) & 0x0f) << 8;
 VAR_6->hsync_start = VAR_6->hdisplay + VAR_7->part2.h_sync_off;
 VAR_6->hsync_start += (VAR_7->part2.sync_off_width_high & 0xc0) << 2;
 VAR_6->hsync_end = VAR_6->hsync_start + VAR_7->part2.h_sync_width;
 VAR_6->hsync_end += (VAR_7->part2.sync_off_width_high & 0x30) << 4;
 VAR_6->htotal = VAR_6->hdisplay + VAR_7->part1.h_blank;
 VAR_6->htotal += (VAR_7->part1.h_high & 0xf) << 8;

 VAR_6->vdisplay = VAR_7->part1.v_active;
 VAR_6->vdisplay += ((VAR_7->part1.v_high >> 4) & 0x0f) << 8;
 VAR_6->vsync_start = VAR_6->vdisplay;
 VAR_6->vsync_start += (VAR_7->part2.v_sync_off_width >> 4) & 0xf;
 VAR_6->vsync_start += (VAR_7->part2.sync_off_width_high & 0x0c) << 2;
 VAR_6->vsync_start += VAR_7->part2.v_sync_off_high & 0xc0;
 VAR_6->vsync_end = VAR_6->vsync_start +
  (VAR_7->part2.v_sync_off_width & 0xf);
 VAR_6->vsync_end += (VAR_7->part2.sync_off_width_high & 0x3) << 4;
 VAR_6->vtotal = VAR_6->vdisplay + VAR_7->part1.v_blank;
 VAR_6->vtotal += (VAR_7->part1.v_high & 0xf) << 8;

 VAR_6->clock = VAR_7->part1.clock * 10;

 VAR_6->flags &= ~(VAR_1 | VAR_2);
 if (VAR_7->part2.dtd_flags & VAR_4)
  VAR_6->flags |= VAR_0;
 if (VAR_7->part2.dtd_flags & VAR_3)
  VAR_6->flags |= VAR_1;
 if (VAR_7->part2.dtd_flags & VAR_5)
  VAR_6->flags |= VAR_2;
}
