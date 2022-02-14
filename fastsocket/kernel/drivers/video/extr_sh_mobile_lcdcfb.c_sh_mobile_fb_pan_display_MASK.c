
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_chan {int new_pan_offset; int pan_offset; int lcdc; } ;
struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_4__ {int xoffset; int yoffset; int bits_per_pixel; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct sh_mobile_lcdc_chan* par; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int FUNC_2 (struct fb_info*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_2,
         struct fb_info *VAR_3)
{
 struct sh_mobile_lcdc_chan *VAR_4 = VAR_3->par;

 if (VAR_3->var.xoffset == VAR_2->xoffset &&
     VAR_3->var.yoffset == VAR_2->yoffset)
  return 0;

 VAR_4->new_pan_offset = (VAR_2->yoffset * VAR_3->fix.line_length) +
  (VAR_2->xoffset * (VAR_3->var.bits_per_pixel / 8));

 if (VAR_4->new_pan_offset != VAR_4->pan_offset) {
  unsigned long VAR_5;
  VAR_5 = FUNC_0(VAR_4->lcdc, VAR_1);
  VAR_5 |= VAR_0;
  FUNC_1(VAR_4->lcdc, VAR_1, VAR_5);
  FUNC_2(VAR_3);
 }

 return 0;
}
