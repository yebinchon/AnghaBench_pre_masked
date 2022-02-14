
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_device {int dev; TYPE_1__* panel; int pseudo_palette; } ;
struct fb_var_screeninfo {int bits_per_pixel; int rotate; void* yres_virtual; void* xres_virtual; void* yres; void* xres; int accel_flags; } ;
struct fb_fix_screeninfo {int id; } ;
struct fb_info {int cmap; int pseudo_palette; int flags; int * fbops; struct fb_fix_screeninfo fix; struct fb_var_screeninfo var; } ;
struct TYPE_2__ {int bpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct fb_info*,int) ;
 int FUNC_3 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct omapfb_device *VAR_8, struct fb_info *VAR_9)
{
 struct fb_var_screeninfo *VAR_10 = &VAR_9->var;
 struct fb_fix_screeninfo *VAR_11 = &VAR_9->fix;
 int VAR_12 = 0;

 VAR_9->fbops = &VAR_7;
 VAR_9->flags = VAR_0;

 FUNC_4(VAR_11->id, VAR_2, sizeof(VAR_11->id));

 VAR_9->pseudo_palette = VAR_8->pseudo_palette;

 VAR_10->accel_flags = VAR_3 ? VAR_1 : 0;
 VAR_10->xres = VAR_5;
 VAR_10->yres = VAR_6;
 VAR_10->xres_virtual = VAR_5;
 VAR_10->yres_virtual = VAR_6;
 VAR_10->rotate = VAR_4;
 VAR_10->bits_per_pixel = VAR_8->panel->bpp;

 FUNC_3(VAR_9, VAR_10);
 FUNC_2(VAR_9, 1);

 VAR_12 = FUNC_1(&VAR_9->cmap, 16, 0);
 if (VAR_12 != 0)
  FUNC_0(VAR_8->dev, "unable to allocate color map memory\n");

 return VAR_12;
}
