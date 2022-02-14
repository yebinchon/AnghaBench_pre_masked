
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_pixel; int xres; } ;
struct TYPE_3__ {int line_length; int ypanstep; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_4)
{
 unsigned short VAR_5;

 switch (VAR_4->var.bits_per_pixel) {
 case 8:
  VAR_4->fix.line_length = VAR_4->var.xres;
  VAR_4->fix.visual = VAR_0;
  VAR_4->fix.ypanstep = 16;
  break;
 case 16:
  VAR_4->fix.line_length = VAR_4->var.xres*2;
  VAR_4->fix.visual = VAR_1;
  VAR_4->fix.ypanstep = 8;
  break;
 }

 FUNC_1(VAR_4->fix.line_length, VAR_2);
 VAR_5 = FUNC_0(VAR_3);
 VAR_5 &= ~15;
 VAR_5 |= (VAR_4->var.bits_per_pixel == 8) ? 4 : 8;
 FUNC_1(VAR_5, VAR_3);
 return 0;
}
