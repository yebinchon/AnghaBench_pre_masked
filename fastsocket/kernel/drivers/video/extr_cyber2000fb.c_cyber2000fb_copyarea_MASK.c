
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct fb_copyarea {int width; int height; unsigned long sx; unsigned long sy; unsigned long dx; unsigned long dy; } ;
struct TYPE_3__ {int accel_flags; unsigned long xres_virtual; int bits_per_pixel; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct cfb_info {TYPE_2__ fb; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (unsigned long,int ,struct cfb_info*) ;
 int FUNC_2 (unsigned long,int ,struct cfb_info*) ;
 int FUNC_3 (unsigned int,int ,struct cfb_info*) ;

__attribute__((used)) static void
FUNC_4(struct fb_info *VAR_16, const struct fb_copyarea *VAR_17)
{
 struct cfb_info *VAR_18 = (struct cfb_info *)VAR_16;
 unsigned int VAR_19 = VAR_4;
 unsigned long VAR_20, VAR_21;

 if (!(VAR_18->fb.var.accel_flags & VAR_15)) {
  FUNC_0(VAR_16, VAR_17);
  return;
 }

 FUNC_1(0, VAR_8, VAR_18);
 FUNC_3(VAR_17->width - 1, VAR_12, VAR_18);
 FUNC_3(VAR_17->height - 1, VAR_11, VAR_18);

 VAR_20 = VAR_17->sx + VAR_17->sy * VAR_18->fb.var.xres_virtual;
 VAR_21 = VAR_17->dx + VAR_17->dy * VAR_18->fb.var.xres_virtual;

 if (VAR_17->sx < VAR_17->dx) {
  VAR_20 += VAR_17->width - 1;
  VAR_21 += VAR_17->width - 1;
  VAR_19 |= VAR_2;
 }

 if (VAR_17->sy < VAR_17->dy) {
  VAR_20 += (VAR_17->height - 1) * VAR_18->fb.var.xres_virtual;
  VAR_21 += (VAR_17->height - 1) * VAR_18->fb.var.xres_virtual;
  VAR_19 |= VAR_3;
 }

 if (VAR_18->fb.var.bits_per_pixel == 24) {
  FUNC_1(VAR_21, VAR_14, VAR_18);
  VAR_20 *= 3;
  VAR_21 *= 3;
 }
 FUNC_2(VAR_20, VAR_13, VAR_18);
 FUNC_2(VAR_21, VAR_9, VAR_18);
 FUNC_3(VAR_5, VAR_10, VAR_18);
 FUNC_3(VAR_19, VAR_7, VAR_18);
 FUNC_3(VAR_1 | VAR_0,
      VAR_6, VAR_18);
}
