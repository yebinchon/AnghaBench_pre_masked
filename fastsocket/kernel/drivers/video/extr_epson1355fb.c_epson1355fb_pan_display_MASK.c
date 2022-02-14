
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {scalar_t__ xoffset; int yoffset; } ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct epson1355_par* par; } ;
struct epson1355_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct epson1355_par*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_2,
       struct fb_info *VAR_3)
{
 struct epson1355_par *VAR_4 = VAR_3->par;
 u32 VAR_5;

 if (VAR_2->xoffset != 0)
  return -VAR_0;

 if (VAR_2->yoffset + VAR_3->var.yres > VAR_3->var.yres_virtual)
  return -VAR_0;

 VAR_5 = (VAR_3->fix.line_length >> 1) * VAR_2->yoffset;

 FUNC_0(VAR_4, VAR_5, VAR_1);

 return 0;
}
