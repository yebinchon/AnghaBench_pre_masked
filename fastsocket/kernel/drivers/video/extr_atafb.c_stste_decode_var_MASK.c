
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int yres_virtual; int sync; int yoffset; } ;
struct TYPE_3__ {int sync; int mode; } ;
struct TYPE_4__ {TYPE_1__ st; } ;
struct atafb_par {int yres_virtual; int next_line; scalar_t__ screen_base; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_10,
       struct atafb_par *VAR_11)
{
 int VAR_12 = VAR_10->xres;
 int VAR_13 = VAR_10->yres;
 int VAR_14 = VAR_10->bits_per_pixel;
 int VAR_15;
 int VAR_16 = VAR_10->yres_virtual;

 if (VAR_5) {
  if (VAR_14 > 1 || VAR_12 > VAR_9 || VAR_13 > VAR_8)
   return -VAR_0;
  VAR_11->hw.st.mode = VAR_2;
  VAR_12 = VAR_9;
  VAR_13 = VAR_8;
  VAR_14 = 1;
 } else {
  if (VAR_14 > 4 || VAR_12 > VAR_9 || VAR_13 > VAR_8)
   return -VAR_0;
  if (VAR_14 > 2) {
   if (VAR_12 > VAR_9 / 2 || VAR_13 > VAR_8 / 2)
    return -VAR_0;
   VAR_11->hw.st.mode = VAR_3;
   VAR_12 = VAR_9 / 2;
   VAR_13 = VAR_8 / 2;
   VAR_14 = 4;
  } else if (VAR_14 > 1) {
   if (VAR_12 > VAR_9 || VAR_13 > VAR_8 / 2)
    return -VAR_0;
   VAR_11->hw.st.mode = VAR_4;
   VAR_12 = VAR_9;
   VAR_13 = VAR_8 / 2;
   VAR_14 = 2;
  } else
   return -VAR_0;
 }
 if (VAR_16 <= 0)
  VAR_16 = 0;
 else if (VAR_16 < VAR_13)
  VAR_16 = VAR_13;
 if (VAR_10->sync & VAR_1)
  VAR_11->hw.st.sync = (VAR_11->hw.st.sync & ~1) | 1;
 else
  VAR_11->hw.st.sync = (VAR_11->hw.st.sync & ~1);
 VAR_15 = VAR_12 * VAR_14 / 8;
 if (VAR_16 * VAR_15 > VAR_7 && VAR_7)
  return -VAR_0;
 if (VAR_13 * VAR_15 > VAR_7 && VAR_7)
  return -VAR_0;
 if (VAR_10->yoffset + VAR_13 > VAR_16 && VAR_16)
  return -VAR_0;
 VAR_11->yres_virtual = VAR_16;
 VAR_11->screen_base = VAR_6 + VAR_10->yoffset * VAR_15;
 VAR_11->next_line = VAR_15;
 return 0;
}
