
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct fb_info {int dummy; } ;
struct fb_fillrect {unsigned long color; unsigned long dx; unsigned long dy; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_3__ {int accel_flags; int bits_per_pixel; unsigned long xres_virtual; } ;
struct TYPE_4__ {TYPE_1__ var; scalar_t__ pseudo_palette; } ;
struct cfb_info {TYPE_2__ fb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (unsigned long,int ,struct cfb_info*) ;
 int FUNC_2 (unsigned long,int ,struct cfb_info*) ;
 int FUNC_3 (scalar_t__,int ,struct cfb_info*) ;

__attribute__((used)) static void
FUNC_4(struct fb_info *VAR_13, const struct fb_fillrect *VAR_14)
{
 struct cfb_info *VAR_15 = (struct cfb_info *)VAR_13;
 unsigned long VAR_16, VAR_17;

 if (!(VAR_15->fb.var.accel_flags & VAR_12)) {
  FUNC_0(VAR_13, VAR_14);
  return;
 }

 FUNC_1(0, VAR_5, VAR_15);
 FUNC_3(VAR_14->width - 1, VAR_10, VAR_15);
 FUNC_3(VAR_14->height - 1, VAR_9, VAR_15);

 VAR_17 = VAR_14->color;
 if (VAR_15->fb.var.bits_per_pixel > 8)
  VAR_17 = ((u32 *)VAR_15->fb.pseudo_palette)[VAR_17];
 FUNC_2(VAR_17, VAR_7, VAR_15);

 VAR_16 = VAR_14->dx + VAR_14->dy * VAR_15->fb.var.xres_virtual;
 if (VAR_15->fb.var.bits_per_pixel == 24) {
  FUNC_1(VAR_16, VAR_11, VAR_15);
  VAR_16 *= 3;
 }

 FUNC_2(VAR_16, VAR_6, VAR_15);
 FUNC_1(VAR_2, VAR_8, VAR_15);
 FUNC_3(VAR_1, VAR_4, VAR_15);
 FUNC_3(VAR_0, VAR_3, VAR_15);
}
