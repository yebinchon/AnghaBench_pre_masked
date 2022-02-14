
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int vmode; int yoffset; } ;
struct TYPE_2__ {int yres; int yoffset; } ;
struct fb_info {TYPE_1__ var; struct arcfb_par* par; } ;
struct arcfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arcfb_par*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_3,
    struct fb_info *VAR_4)
{
 int VAR_5;
 struct arcfb_par *VAR_6 = VAR_4->par;

 if ((VAR_3->vmode & VAR_1) && (VAR_3->yoffset < 64)
  && (VAR_4->var.yres <= 64)) {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   FUNC_0(VAR_6, VAR_5, VAR_3->yoffset);
  }
  VAR_4->var.yoffset = VAR_3->yoffset;
  return 0;
 }

 return -VAR_0;
}
