
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_3__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct fb_var_screeninfo {int pixclock; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; int height; int width; int bits_per_pixel; int vmode; scalar_t__ activate; scalar_t__ nonstd; scalar_t__ yoffset; scalar_t__ xoffset; int yres; int yres_virtual; TYPE_2__ transp; TYPE_1__ red; TYPE_1__ green; TYPE_1__ blue; int xres_virtual; int xres; scalar_t__ sync; scalar_t__ grayscale; } ;
struct atafb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fb_var_screeninfo*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_8, struct atafb_par *VAR_9)
{
 FUNC_0(VAR_8, 0, sizeof(struct fb_var_screeninfo));
 VAR_8->red.offset = 0;
 VAR_8->red.length = (VAR_3 == -1) ? VAR_2 / 3 :
   (VAR_4 ? VAR_1 : 0);
 VAR_8->red.msb_right = 0;
 VAR_8->grayscale = 0;

 VAR_8->pixclock = 31041;
 VAR_8->left_margin = 120;
 VAR_8->right_margin = 100;
 VAR_8->upper_margin = 8;
 VAR_8->lower_margin = 16;
 VAR_8->hsync_len = 140;
 VAR_8->vsync_len = 30;

 VAR_8->height = -1;
 VAR_8->width = -1;

 VAR_8->sync = 0;

 VAR_8->xres = VAR_5;
 VAR_8->yres = VAR_7;
 VAR_8->xres_virtual = VAR_6;
 VAR_8->bits_per_pixel = VAR_2;

 VAR_8->blue = VAR_8->green = VAR_8->red;
 VAR_8->transp.offset = 0;
 VAR_8->transp.length = 0;
 VAR_8->transp.msb_right = 0;
 VAR_8->yres_virtual = VAR_8->yres;
 VAR_8->xoffset = 0;
 VAR_8->yoffset = 0;
 VAR_8->nonstd = 0;
 VAR_8->activate = 0;
 VAR_8->vmode = VAR_0;
 return 0;
}
