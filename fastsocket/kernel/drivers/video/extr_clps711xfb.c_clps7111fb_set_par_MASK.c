
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_pixel; int xres_virtual; int yres_virtual; int pixclock; } ;
struct TYPE_3__ {int line_length; void* visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_2(struct fb_info *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;

 switch (VAR_8->var.bits_per_pixel) {
 case 1:
  VAR_8->fix.visual = VAR_0;
  break;
 case 2:
  VAR_8->fix.visual = VAR_1;
  break;
 case 4:
  VAR_8->fix.visual = VAR_1;
  break;
 }

 VAR_8->fix.line_length = VAR_8->var.xres_virtual * VAR_8->var.bits_per_pixel / 8;

 VAR_9 = (VAR_8->var.xres_virtual * VAR_8->var.yres_virtual * VAR_8->var.bits_per_pixel) / 128 - 1;
 VAR_9 |= ((VAR_8->var.xres_virtual / 16) - 1) << 13;
 VAR_9 |= VAR_7 << 25;
 VAR_11 = 9 * VAR_8->var.pixclock / 244140 - 1;
 VAR_9 |= VAR_11 << 19;

 if (VAR_8->var.bits_per_pixel == 4)
  VAR_9 |= VAR_4;
 if (VAR_8->var.bits_per_pixel >= 2)
  VAR_9 |= VAR_3;




 VAR_10 = FUNC_0(VAR_5);
 FUNC_1(VAR_10 & ~VAR_6, VAR_5);
 FUNC_1(VAR_9, VAR_2);
 FUNC_1(VAR_10 | VAR_6, VAR_5);
 return 0;
}
