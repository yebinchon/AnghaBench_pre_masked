
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s3c2410fb_mach_info {unsigned int num_displays; struct s3c2410fb_display* displays; int default_display; } ;
struct TYPE_6__ {int lcdcon5; int lcdcon1; } ;
struct s3c2410fb_info {TYPE_2__ regs; TYPE_1__* dev; } ;
struct s3c2410fb_display {int type; scalar_t__ yres; scalar_t__ xres; scalar_t__ bpp; int lcdcon5; int hsync_len; int vsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int width; int height; } ;
struct TYPE_8__ {int offset; scalar_t__ length; } ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ offset; } ;
struct fb_var_screeninfo {scalar_t__ yres; scalar_t__ xres; scalar_t__ bits_per_pixel; scalar_t__ xres_virtual; scalar_t__ yres_virtual; TYPE_4__ blue; TYPE_4__ green; TYPE_4__ red; TYPE_3__ transp; int hsync_len; int vsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int width; int height; } ;
struct fb_info {struct s3c2410fb_info* par; } ;
struct TYPE_5__ {struct s3c2410fb_mach_info* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_3,
          struct fb_info *VAR_4)
{
 struct s3c2410fb_info *VAR_5 = VAR_4->par;
 struct s3c2410fb_mach_info *VAR_6 = VAR_5->dev->platform_data;
 struct s3c2410fb_display *VAR_7 = ((void*)0);
 struct s3c2410fb_display *VAR_8 = VAR_6->displays +
          VAR_6->default_display;
 int VAR_9 = VAR_8->type;
 unsigned VAR_10;

 FUNC_0("check_var(var=%p, info=%p)\n", VAR_3, VAR_4);



 if (VAR_3->yres == VAR_8->yres &&
     VAR_3->xres == VAR_8->xres &&
     VAR_3->bits_per_pixel == VAR_8->bpp)
  VAR_7 = VAR_8;
 else
  for (VAR_10 = 0; VAR_10 < VAR_6->num_displays; VAR_10++)
   if (VAR_9 == VAR_6->displays[VAR_10].type &&
       VAR_3->yres == VAR_6->displays[VAR_10].yres &&
       VAR_3->xres == VAR_6->displays[VAR_10].xres &&
       VAR_3->bits_per_pixel == VAR_6->displays[VAR_10].bpp) {
    VAR_7 = VAR_6->displays + VAR_10;
    break;
   }

 if (!VAR_7) {
  FUNC_0("wrong resolution or depth %dx%d at %d bpp\n",
   VAR_3->xres, VAR_3->yres, VAR_3->bits_per_pixel);
  return -VAR_0;
 }


 VAR_3->xres_virtual = VAR_7->xres;
 VAR_3->yres_virtual = VAR_7->yres;
 VAR_3->height = VAR_7->height;
 VAR_3->width = VAR_7->width;


 VAR_3->pixclock = VAR_7->pixclock;
 VAR_3->left_margin = VAR_7->left_margin;
 VAR_3->right_margin = VAR_7->right_margin;
 VAR_3->upper_margin = VAR_7->upper_margin;
 VAR_3->lower_margin = VAR_7->lower_margin;
 VAR_3->vsync_len = VAR_7->vsync_len;
 VAR_3->hsync_len = VAR_7->hsync_len;

 VAR_5->regs.lcdcon5 = VAR_7->lcdcon5;

 VAR_5->regs.lcdcon1 = VAR_7->type;

 VAR_3->transp.offset = 0;
 VAR_3->transp.length = 0;

 switch (VAR_3->bits_per_pixel) {
 case 1:
 case 2:
 case 4:
  VAR_3->red.offset = 0;
  VAR_3->red.length = VAR_3->bits_per_pixel;
  VAR_3->green = VAR_3->red;
  VAR_3->blue = VAR_3->red;
  break;
 case 8:
  if (VAR_7->type != VAR_1) {

   VAR_3->red.length = 3;
   VAR_3->red.offset = 5;
   VAR_3->green.length = 3;
   VAR_3->green.offset = 2;
   VAR_3->blue.length = 2;
   VAR_3->blue.offset = 0;
  } else {
   VAR_3->red.offset = 0;
   VAR_3->red.length = 8;
   VAR_3->green = VAR_3->red;
   VAR_3->blue = VAR_3->red;
  }
  break;
 case 12:

  VAR_3->red.length = 4;
  VAR_3->red.offset = 8;
  VAR_3->green.length = 4;
  VAR_3->green.offset = 4;
  VAR_3->blue.length = 4;
  VAR_3->blue.offset = 0;
  break;

 default:
 case 16:
  if (VAR_7->lcdcon5 & VAR_2) {

   VAR_3->red.offset = 11;
   VAR_3->green.offset = 5;
   VAR_3->blue.offset = 0;
   VAR_3->red.length = 5;
   VAR_3->green.length = 6;
   VAR_3->blue.length = 5;
  } else {

   VAR_3->red.offset = 11;
   VAR_3->green.offset = 6;
   VAR_3->blue.offset = 1;
   VAR_3->red.length = 5;
   VAR_3->green.length = 5;
   VAR_3->blue.length = 5;
  }
  break;
 case 32:

  VAR_3->red.length = 8;
  VAR_3->red.offset = 16;
  VAR_3->green.length = 8;
  VAR_3->green.offset = 8;
  VAR_3->blue.length = 8;
  VAR_3->blue.offset = 0;
  break;
 }
 return 0;
}
