
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_fb_data {int num_modes; struct fb_videomode* modes; } ;
struct mfd_cell {struct tmio_fb_data* driver_data; } ;
struct fb_videomode {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_var_screeninfo {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_info {TYPE_1__* device; } ;
struct TYPE_2__ {struct mfd_cell* platform_data; } ;



__attribute__((used)) static struct fb_videomode *
FUNC_0(struct fb_info *VAR_0, struct fb_var_screeninfo *VAR_1)
{
 struct mfd_cell *VAR_2 =
  VAR_0->device->platform_data;
 struct tmio_fb_data *VAR_3 = VAR_2->driver_data;
 struct fb_videomode *VAR_4 = ((void*)0);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_modes; VAR_5++) {
  struct fb_videomode *VAR_6 = VAR_3->modes + VAR_5;

  if (VAR_6->xres >= VAR_1->xres && VAR_6->yres >= VAR_1->yres
    && (!VAR_4 || (VAR_6->xres < VAR_4->xres
        && VAR_6->yres < VAR_4->yres)))
   VAR_4 = VAR_6;
 }

 return VAR_4;
}
