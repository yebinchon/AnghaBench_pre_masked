
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pxa168fb_mach_info {int dummy; } ;
struct pxa168fb_info {scalar_t__ pix_fmt; scalar_t__ reg_base; TYPE_1__* dev; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int xres_virtual; int bits_per_pixel; int yres; int xres; int left_margin; int right_margin; int upper_margin; int lower_margin; int sync; } ;
struct TYPE_4__ {int line_length; int ypanstep; int visual; } ;
struct fb_info {struct fb_var_screeninfo var; TYPE_2__ fix; struct pxa168fb_info* par; } ;
struct TYPE_3__ {struct pxa168fb_mach_info* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct fb_videomode*,struct fb_var_screeninfo*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pxa168fb_info*,struct fb_videomode*) ;
 int FUNC_3 (struct pxa168fb_info*) ;
 int FUNC_4 (struct pxa168fb_info*,int ) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_10)
{
 struct pxa168fb_info *VAR_11 = VAR_10->par;
 struct fb_var_screeninfo *VAR_12 = &VAR_10->var;
 struct fb_videomode VAR_13;
 u32 VAR_14;
 struct pxa168fb_mach_info *VAR_15;

 VAR_15 = VAR_11->dev->platform_data;




 if (VAR_11->pix_fmt == VAR_9)
  VAR_10->fix.visual = VAR_0;
 else
  VAR_10->fix.visual = VAR_1;
 VAR_10->fix.line_length = VAR_12->xres_virtual * VAR_12->bits_per_pixel / 8;
 VAR_10->fix.ypanstep = VAR_12->yres;




 VAR_14 = FUNC_1(VAR_11->reg_base + VAR_3);
 FUNC_7(VAR_14 & ~1, VAR_11->reg_base + VAR_3);




 FUNC_7((VAR_12->yres << 16) | VAR_12->xres,
  VAR_11->reg_base + VAR_7);




 FUNC_0(&VAR_13, &VAR_10->var);


 FUNC_2(VAR_11, &VAR_13);


 FUNC_3(VAR_11);
 FUNC_4(VAR_11, VAR_10->var.sync);




 VAR_14 = FUNC_1(VAR_11->reg_base + VAR_2);
 VAR_14 = (VAR_14 & ~0xFFFF) | ((VAR_12->xres_virtual * VAR_12->bits_per_pixel) >> 3);
 FUNC_7(VAR_14, VAR_11->reg_base + VAR_2);
 FUNC_7((VAR_12->yres << 16) | VAR_12->xres,
  VAR_11->reg_base + VAR_4);
 FUNC_7((VAR_12->yres << 16) | VAR_12->xres,
  VAR_11->reg_base + VAR_5);




 FUNC_5(VAR_10);
 FUNC_6(VAR_10);

 FUNC_7((VAR_12->left_margin << 16) | VAR_12->right_margin,
   VAR_11->reg_base + VAR_6);
 FUNC_7((VAR_12->upper_margin << 16) | VAR_12->lower_margin,
   VAR_11->reg_base + VAR_8);




 VAR_14 = FUNC_1(VAR_11->reg_base + VAR_3);
 FUNC_7(VAR_14 | 1, VAR_11->reg_base + VAR_3);

 return 0;
}
