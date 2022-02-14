
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int yoffset; int xoffset; int bits_per_pixel; } ;
struct fb_fix_screeninfo {int smem_start; int line_length; } ;
struct fb_info {struct fb_fix_screeninfo fix; struct atmel_lcdfb_info* par; } ;
struct atmel_lcdfb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct atmel_lcdfb_info*,struct fb_var_screeninfo*) ;
 int FUNC_1 (struct atmel_lcdfb_info*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1,
          struct fb_var_screeninfo *VAR_2)
{
 struct atmel_lcdfb_info *VAR_3 = VAR_1->par;
 struct fb_fix_screeninfo *VAR_4 = &VAR_1->fix;
 unsigned long VAR_5;

 VAR_5 = (VAR_4->smem_start + VAR_2->yoffset * VAR_4->line_length
      + VAR_2->xoffset * VAR_2->bits_per_pixel / 8);

 VAR_5 &= ~3UL;


 FUNC_1(VAR_3, VAR_0, VAR_5);

 FUNC_0(VAR_3, VAR_2);
}
