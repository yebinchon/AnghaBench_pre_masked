
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_fix_screeninfo {int line_length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int yres; unsigned long yoffset; } ;
struct TYPE_2__ {struct fb_fix_screeninfo fix; struct fb_var_screeninfo var; } ;
struct pxafb_info {unsigned long video_mem_phys; int lccr0; TYPE_1__ fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pxafb_info*,int,int,unsigned long,int) ;

__attribute__((used)) static void FUNC_1(struct pxafb_info *VAR_6, int VAR_7)
{
 struct fb_var_screeninfo *VAR_8 = &VAR_6->fb.var;
 struct fb_fix_screeninfo *VAR_9 = &VAR_6->fb.fix;
 int VAR_10, VAR_11, VAR_12, VAR_13 = VAR_8->bits_per_pixel;
 unsigned long VAR_14;

 VAR_11 = VAR_0 + (VAR_7 ? VAR_1 : 0);
 VAR_12 = (VAR_13 >= 16) ? VAR_5 : VAR_3 + (VAR_7 ? VAR_4 : 0);

 VAR_10 = VAR_9->line_length * VAR_8->yres;
 VAR_14 = VAR_9->line_length * VAR_8->yoffset + VAR_6->video_mem_phys;

 if (VAR_6->lccr0 & VAR_2) {
  VAR_10 = VAR_10 / 2;
  FUNC_0(VAR_6, VAR_11 + 1, VAR_5, VAR_14 + VAR_10, VAR_10);
 }

 FUNC_0(VAR_6, VAR_11, VAR_12, VAR_14, VAR_10);
}
