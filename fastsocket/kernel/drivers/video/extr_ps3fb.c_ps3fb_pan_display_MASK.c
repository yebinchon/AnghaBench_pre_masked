
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3fb_par {int pan_offset; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct ps3fb_par* par; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_1,
        struct fb_info *VAR_2)
{
 struct ps3fb_par *VAR_3 = VAR_2->par;

 VAR_3->pan_offset = VAR_1->yoffset * VAR_2->fix.line_length +
     VAR_1->xoffset * VAR_0;
 return 0;
}
