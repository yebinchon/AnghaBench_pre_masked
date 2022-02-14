
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct fb_copyarea {int dy; int sy; int sx; int dx; int width; int height; } ;
struct atyfb_par {int accel_flags; scalar_t__ asleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,struct atyfb_par*) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_2 (int,int,int,int,struct atyfb_par*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,struct atyfb_par*) ;

void FUNC_5(struct fb_info *VAR_8, const struct fb_copyarea *VAR_9)
{
 struct atyfb_par *VAR_10 = (struct atyfb_par *) VAR_8->par;
 u32 VAR_11 = VAR_9->dy, VAR_12 = VAR_9->sy, VAR_13 = VAR_2;
 u32 VAR_14 = VAR_9->sx, VAR_15 = VAR_9->dx, VAR_16 = VAR_9->width, VAR_17 = 0;

 if (VAR_10->asleep)
  return;
 if (!VAR_9->width || !VAR_9->height)
  return;
 if (!VAR_10->accel_flags) {
  FUNC_1(VAR_8, VAR_9);
  return;
 }

 if (VAR_8->var.bits_per_pixel == 24) {


  VAR_14 *= 3;
  VAR_15 *= 3;
  VAR_16 *= 3;
 }

 if (VAR_9->sy < VAR_9->dy) {
  VAR_11 += VAR_9->height - 1;
  VAR_12 += VAR_9->height - 1;
 } else
  VAR_13 |= VAR_4;

 if (VAR_14 < VAR_15) {
  VAR_15 += VAR_16 - 1;
  VAR_14 += VAR_16 - 1;
 } else
  VAR_13 |= VAR_3;

 if (VAR_8->var.bits_per_pixel == 24) {
  VAR_17 = FUNC_3(VAR_15, VAR_13);
 }

 FUNC_4(4, VAR_10);
 FUNC_0(VAR_0, VAR_5, VAR_10);
 FUNC_0(VAR_7, (VAR_14 << 16) | VAR_12, VAR_10);
 FUNC_0(VAR_6, (VAR_16 << 16) | VAR_9->height, VAR_10);
 FUNC_0(VAR_1, VAR_13 | VAR_17, VAR_10);
 FUNC_2(VAR_15, VAR_11, VAR_16, VAR_9->height, VAR_10);
}
