
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_map {int vmode; struct fb_videomode* mode; } ;
struct fb_videomode {scalar_t__ xres; scalar_t__ yres; scalar_t__ pixclock; int vmode; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ xres; scalar_t__ yres; scalar_t__ xres_virtual; scalar_t__ yres_virtual; scalar_t__ pixclock; int vmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mode_map* VAR_5 ;

int FUNC_0(const struct fb_var_screeninfo *VAR_6, int *VAR_7,
       int *VAR_8)
{
    const struct fb_videomode *VAR_9 = ((void*)0);
    const struct mode_map *VAR_10;

    if (VAR_6->bits_per_pixel <= 8)
 *VAR_8 = VAR_2;
    else if (VAR_6->bits_per_pixel <= 16)
 *VAR_8 = VAR_0;
    else if (VAR_6->bits_per_pixel <= 32)
 *VAR_8 = VAR_1;
    else
 return -VAR_3;

    for (VAR_10 = VAR_5; VAR_10->vmode != -1; VAR_10++) {
 VAR_9 = VAR_10->mode;
 if (VAR_6->xres > VAR_9->xres || VAR_6->yres > VAR_9->yres)
     continue;
 if (VAR_6->xres_virtual > VAR_9->xres || VAR_6->yres_virtual > VAR_9->yres)
     continue;
 if (VAR_6->pixclock > VAR_9->pixclock)
     continue;
 if ((VAR_6->vmode & VAR_4) != VAR_9->vmode)
     continue;
 *VAR_7 = VAR_10->vmode;
 return 0;
    }
    return -VAR_3;
}
