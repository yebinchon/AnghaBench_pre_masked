
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int rotate; int transp; int blue; int green; int red; int width; int height; int accel_flags; int nonstd; int grayscale; int bits_per_pixel; int yres_virtual; int xres_virtual; } ;
struct fb_info {int modelist; } ;
struct display {int * mode; int rotate; int transp; int blue; int green; int red; int width; int height; int accel_flags; int nonstd; int grayscale; int bits_per_pixel; int yres_virtual; int xres_virtual; } ;


 int VAR_0 ;
 int * FUNC_0 (struct fb_var_screeninfo*,int *) ;

__attribute__((used)) static int FUNC_1(struct display *VAR_1,
     struct fb_var_screeninfo *VAR_2,
     struct fb_info *VAR_3)
{
 VAR_1->xres_virtual = VAR_2->xres_virtual;
 VAR_1->yres_virtual = VAR_2->yres_virtual;
 VAR_1->bits_per_pixel = VAR_2->bits_per_pixel;
 VAR_1->grayscale = VAR_2->grayscale;
 VAR_1->nonstd = VAR_2->nonstd;
 VAR_1->accel_flags = VAR_2->accel_flags;
 VAR_1->height = VAR_2->height;
 VAR_1->width = VAR_2->width;
 VAR_1->red = VAR_2->red;
 VAR_1->green = VAR_2->green;
 VAR_1->blue = VAR_2->blue;
 VAR_1->transp = VAR_2->transp;
 VAR_1->rotate = VAR_2->rotate;
 VAR_1->mode = FUNC_0(VAR_2, &VAR_3->modelist);
 if (VAR_1->mode == ((void*)0))

  return -VAR_0;
 return 0;
}
