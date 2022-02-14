
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tmio_fb_data {int width; int height; } ;
struct mfd_cell {struct tmio_fb_data* driver_data; } ;
struct fb_videomode {int xres; } ;
struct TYPE_10__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_9__ {int length; scalar_t__ offset; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; int yres_virtual; int yres; scalar_t__ rotate; int width; int height; scalar_t__ nonstd; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct fb_info {int screen_size; TYPE_1__* device; } ;
struct TYPE_6__ {struct mfd_cell* platform_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct fb_videomode*) ;
 struct fb_videomode* FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{

 struct fb_videomode *VAR_3;
 struct mfd_cell *VAR_4 =
  VAR_2->device->platform_data;
 struct tmio_fb_data *VAR_5 = VAR_4->driver_data;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3 || VAR_1->bits_per_pixel > 16)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_3);

 VAR_1->xres_virtual = VAR_3->xres;
 VAR_1->yres_virtual = VAR_2->screen_size / (VAR_3->xres * 2);

 if (VAR_1->yres_virtual < VAR_1->yres)
  return -VAR_0;

 VAR_1->xoffset = 0;
 VAR_1->yoffset = 0;
 VAR_1->bits_per_pixel = 16;
 VAR_1->grayscale = 0;
 VAR_1->red.offset = 11;
 VAR_1->red.length = 5;
 VAR_1->green.offset = 5;
 VAR_1->green.length = 6;
 VAR_1->blue.offset = 0;
 VAR_1->blue.length = 5;
 VAR_1->transp.offset = 0;
 VAR_1->transp.length = 0;
 VAR_1->nonstd = 0;
 VAR_1->height = VAR_5->height;
 VAR_1->width = VAR_5->width;
 VAR_1->rotate = 0;
 return 0;
}
