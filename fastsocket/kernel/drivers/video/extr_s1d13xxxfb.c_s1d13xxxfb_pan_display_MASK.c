
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct s1d13xxxfb_par {int display; } ;
struct fb_var_screeninfo {scalar_t__ xoffset; int yoffset; } ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct s1d13xxxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct s1d13xxxfb_par*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct fb_var_screeninfo *VAR_7, struct fb_info *VAR_8)
{
 struct s1d13xxxfb_par *VAR_9 = VAR_8->par;
 u32 VAR_10;

 if (VAR_7->xoffset != 0)
  return -VAR_0;

 if (VAR_7->yoffset + VAR_8->var.yres > VAR_8->var.yres_virtual)
  return -VAR_0;

 VAR_10 = (VAR_8->fix.line_length >> 1) * VAR_7->yoffset;

 if ((VAR_9->display & 0x01)) {

  FUNC_0(VAR_9, VAR_4, (VAR_10 & 0xff));
  FUNC_0(VAR_9, VAR_5, ((VAR_10 >> 8) & 0xff));
  FUNC_0(VAR_9, VAR_6, ((VAR_10 >> 16) & 0x0f));
 } else {

  FUNC_0(VAR_9, VAR_1, (VAR_10 & 0xff));
  FUNC_0(VAR_9, VAR_2, ((VAR_10 >> 8) & 0xff));
  FUNC_0(VAR_9, VAR_3, ((VAR_10 >> 16) & 0x0f));
 }

 return 0;
}
