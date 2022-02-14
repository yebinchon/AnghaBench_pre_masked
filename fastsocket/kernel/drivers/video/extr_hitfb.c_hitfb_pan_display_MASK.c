
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_2,
        struct fb_info *VAR_3)
{
 int VAR_4 = VAR_2->xoffset;
 int VAR_5 = VAR_2->yoffset;

 if (VAR_4 != 0)
  return -VAR_0;

 FUNC_0((VAR_5*VAR_3->fix.line_length)>>10, VAR_1);

 return 0;
}
