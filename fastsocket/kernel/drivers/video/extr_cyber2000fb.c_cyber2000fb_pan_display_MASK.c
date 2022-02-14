
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int vmode; int yoffset; int xoffset; } ;
struct fb_info {int dummy; } ;
struct TYPE_4__ {int vmode; int yoffset; int xoffset; } ;
struct TYPE_3__ {TYPE_2__ var; } ;
struct cfb_info {TYPE_1__ fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cfb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int
FUNC_1(struct fb_var_screeninfo *VAR_2, struct fb_info *VAR_3)
{
 struct cfb_info *VAR_4 = (struct cfb_info *)VAR_3;

 if (FUNC_0(VAR_4, VAR_2))
  return -VAR_0;

 VAR_4->fb.var.xoffset = VAR_2->xoffset;
 VAR_4->fb.var.yoffset = VAR_2->yoffset;

 if (VAR_2->vmode & VAR_1) {
  VAR_4->fb.var.vmode |= VAR_1;
 } else {
  VAR_4->fb.var.vmode &= ~VAR_1;
 }

 return 0;
}
