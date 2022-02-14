
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imxfb_info {int palette_size; int cmap_static; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_2__ {int line_length; int visual; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; struct imxfb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_3)
{
 struct imxfb_info *VAR_4 = VAR_3->par;
 struct fb_var_screeninfo *VAR_5 = &VAR_3->var;

 if (VAR_5->bits_per_pixel == 16 || VAR_5->bits_per_pixel == 32)
  VAR_3->fix.visual = VAR_2;
 else if (!VAR_4->cmap_static)
  VAR_3->fix.visual = VAR_0;
 else {





  VAR_3->fix.visual = VAR_1;
 }

 VAR_3->fix.line_length = VAR_5->xres_virtual * VAR_5->bits_per_pixel / 8;
 VAR_4->palette_size = VAR_5->bits_per_pixel == 8 ? 256 : 16;

 FUNC_0(VAR_5, VAR_3);

 return 0;
}
