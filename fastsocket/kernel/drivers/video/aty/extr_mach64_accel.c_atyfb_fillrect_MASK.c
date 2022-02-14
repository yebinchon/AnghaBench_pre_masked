
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct fb_fillrect {int color; int dx; int width; int height; int dy; } ;
struct atyfb_par {int accel_flags; scalar_t__ asleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,struct atyfb_par*) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_2 (int,int ,int,int ,struct atyfb_par*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,struct atyfb_par*) ;

void FUNC_5(struct fb_info *VAR_9, const struct fb_fillrect *VAR_10)
{
 struct atyfb_par *VAR_11 = (struct atyfb_par *) VAR_9->par;
 u32 VAR_12 = VAR_10->color, VAR_13 = VAR_10->dx, VAR_14 = VAR_10->width, VAR_15 = 0;

 if (VAR_11->asleep)
  return;
 if (!VAR_10->width || !VAR_10->height)
  return;
 if (!VAR_11->accel_flags) {
  FUNC_1(VAR_9, VAR_10);
  return;
 }

 VAR_12 |= (VAR_10->color << 8);
 VAR_12 |= (VAR_10->color << 16);

 if (VAR_9->var.bits_per_pixel == 24) {


  VAR_13 *= 3;
  VAR_14 *= 3;
  VAR_15 = FUNC_3(VAR_13, VAR_5);
 }

 FUNC_4(3, VAR_11);
 FUNC_0(VAR_1, VAR_12, VAR_11);
 FUNC_0(VAR_2,
      VAR_0 | VAR_7 | VAR_8,
      VAR_11);
 FUNC_0(VAR_3,
      VAR_4 | VAR_6 |
      VAR_5 | VAR_15, VAR_11);
 FUNC_2(VAR_13, VAR_10->dy, VAR_14, VAR_10->height, VAR_11);
}
