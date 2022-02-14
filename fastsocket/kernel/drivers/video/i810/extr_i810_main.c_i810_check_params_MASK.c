
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int size; } ;
struct i810fb_par {TYPE_1__ fb; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int yres_virtual; int xres_virtual; int bits_per_pixel; int yres; int xres; } ;
struct TYPE_6__ {int dclkmax; int dclkmin; scalar_t__ modedb_len; int hfmin; int hfmax; int vfmin; int vfmax; scalar_t__ gtf; } ;
struct TYPE_5__ {int yres; } ;
struct fb_info {TYPE_3__ monspecs; int modelist; TYPE_2__ var; struct i810fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fb_videomode* FUNC_0 (struct fb_var_screeninfo*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_videomode const*) ;
 int FUNC_4 (struct i810fb_par*,int,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct fb_var_screeninfo *VAR_7,
        struct fb_info *VAR_8)
{
 struct i810fb_par *VAR_9 = VAR_8->par;
 int VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14 = VAR_7->yres_virtual, VAR_15 = VAR_7->xres_virtual;




 VAR_10 = FUNC_4(VAR_9, VAR_15, VAR_7->bits_per_pixel);
 VAR_11 = VAR_10*VAR_14;

 if (VAR_11 > VAR_9->fb.size) {
  VAR_14 = VAR_9->fb.size/VAR_10;
  if (VAR_14 < VAR_7->yres) {
   VAR_14 = VAR_8->var.yres;
   VAR_15 = VAR_9->fb.size/VAR_14;
   VAR_15 /= VAR_7->bits_per_pixel >> 3;
   VAR_10 = FUNC_4(VAR_9, VAR_15,
            VAR_7->bits_per_pixel);
   VAR_11 = VAR_10 * VAR_8->var.yres;
   if (VAR_15 < VAR_7->xres) {
    FUNC_5("i810fb: required video memory, "
           "%d bytes, for %dx%d-%d (virtual) "
           "is out of range\n",
           VAR_11, VAR_15, VAR_14,
           VAR_7->bits_per_pixel);
    return -VAR_1;
   }
  }
 }

 VAR_7->xres_virtual = VAR_15;
 VAR_7->yres_virtual = VAR_14;




 switch (VAR_7->bits_per_pixel) {
 case 8:
  VAR_8->monspecs.dclkmax = 234000000;
  break;
 case 16:
  VAR_8->monspecs.dclkmax = 229000000;
  break;
 case 24:
 case 32:
  VAR_8->monspecs.dclkmax = 204000000;
  break;
 }

 VAR_8->monspecs.dclkmin = 15000000;

 if (!FUNC_2(VAR_7, VAR_8))
  VAR_12 = 1;
 if (!VAR_12 && VAR_8->monspecs.modedb_len == 0) {
  if (FUNC_1(VAR_2, 0, VAR_7, VAR_8)) {
   int VAR_16 = (VAR_8->monspecs.hfmin-VAR_4)
    |(VAR_8->monspecs.hfmax-VAR_3)
    |(VAR_8->monspecs.vfmin-VAR_6)
    |(VAR_8->monspecs.vfmax-VAR_5);
   FUNC_5("i810fb: invalid video mode%s\n",
          VAR_16 ? "" : ". Specifying "
          "vsyncN/hsyncN parameters may help");
   VAR_13 = -VAR_0;
  }
 }

 return VAR_13;
}
