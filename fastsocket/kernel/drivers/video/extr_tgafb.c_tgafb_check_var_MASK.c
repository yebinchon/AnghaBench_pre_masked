
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tga_par {scalar_t__ tga_type; } ;
struct TYPE_6__ {int length; scalar_t__ offset; } ;
struct TYPE_5__ {int length; int offset; } ;
struct TYPE_4__ {int length; int offset; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; int xres; scalar_t__ yres_virtual; scalar_t__ yres; int pixclock; int vmode; scalar_t__ nonstd; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct fb_var_screeninfo *VAR_5, struct fb_info *VAR_6)
{
 struct tga_par *VAR_7 = (struct tga_par *)VAR_6->par;

 if (VAR_7->tga_type == VAR_4) {
  if (VAR_5->bits_per_pixel != 8)
   return -VAR_0;
 } else {
  if (VAR_5->bits_per_pixel != 32)
   return -VAR_0;
 }
 VAR_5->red.length = VAR_5->green.length = VAR_5->blue.length = 8;
 if (VAR_5->bits_per_pixel == 32) {
  VAR_5->red.offset = 16;
  VAR_5->green.offset = 8;
  VAR_5->blue.offset = 0;
 }

 if (VAR_5->xres_virtual != VAR_5->xres || VAR_5->yres_virtual != VAR_5->yres)
  return -VAR_0;
 if (VAR_5->nonstd)
  return -VAR_0;
 if (1000000000 / VAR_5->pixclock > VAR_3)
  return -VAR_0;
 if ((VAR_5->vmode & VAR_1) != VAR_2)
  return -VAR_0;



 if (VAR_5->xres * (VAR_7->tga_type == VAR_4 ? 1 : 4) % 64)
  return -VAR_0;

 return 0;
}
