
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenfb_info {TYPE_1__* page; int feature_resize; } ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct TYPE_4__ {int line_length; int smem_len; } ;
struct fb_info {TYPE_2__ fix; struct xenfb_info* par; } ;
struct TYPE_3__ {int depth; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct fb_var_screeninfo *VAR_5, struct fb_info *VAR_6)
{
 struct xenfb_info *VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->par;

 if (!VAR_7->feature_resize) {
  if (VAR_5->xres == VAR_4[VAR_2] &&
      VAR_5->yres == VAR_4[VAR_1] &&
      VAR_5->bits_per_pixel == VAR_7->page->depth) {
   return 0;
  }
  return -VAR_0;
 }


 if (VAR_5->xres > VAR_4[VAR_2] || VAR_5->yres > VAR_4[VAR_1])
  return -VAR_0;

 VAR_8 = VAR_5->xres * VAR_5->yres * VAR_7->page->depth / 8;
 if (VAR_5->bits_per_pixel == VAR_7->page->depth &&
     VAR_5->xres <= VAR_6->fix.line_length / (VAR_3 / 8) &&
     VAR_8 <= VAR_6->fix.smem_len) {
  VAR_5->xres_virtual = VAR_5->xres;
  VAR_5->yres_virtual = VAR_5->yres;
  return 0;
 }
 return -VAR_0;
}
