
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_dvo_timing {scalar_t__ hactive_hi; scalar_t__ hactive_lo; scalar_t__ hsync_off_hi; scalar_t__ hsync_off_lo; scalar_t__ hsync_pulse_width; scalar_t__ hblank_hi; scalar_t__ hblank_lo; scalar_t__ vactive_hi; scalar_t__ vactive_lo; scalar_t__ vsync_off; scalar_t__ vsync_pulse_width; scalar_t__ vblank_hi; scalar_t__ vblank_lo; } ;



__attribute__((used)) static bool
FUNC_0(const struct lvds_dvo_timing *VAR_0,
      const struct lvds_dvo_timing *VAR_1)
{
 if (VAR_0->hactive_hi != VAR_1->hactive_hi ||
     VAR_0->hactive_lo != VAR_1->hactive_lo)
  return 0;

 if (VAR_0->hsync_off_hi != VAR_1->hsync_off_hi ||
     VAR_0->hsync_off_lo != VAR_1->hsync_off_lo)
  return 0;

 if (VAR_0->hsync_pulse_width != VAR_1->hsync_pulse_width)
  return 0;

 if (VAR_0->hblank_hi != VAR_1->hblank_hi ||
     VAR_0->hblank_lo != VAR_1->hblank_lo)
  return 0;

 if (VAR_0->vactive_hi != VAR_1->vactive_hi ||
     VAR_0->vactive_lo != VAR_1->vactive_lo)
  return 0;

 if (VAR_0->vsync_off != VAR_1->vsync_off)
  return 0;

 if (VAR_0->vsync_pulse_width != VAR_1->vsync_pulse_width)
  return 0;

 if (VAR_0->vblank_hi != VAR_1->vblank_hi ||
     VAR_0->vblank_lo != VAR_1->vblank_lo)
  return 0;

 return 1;
}
