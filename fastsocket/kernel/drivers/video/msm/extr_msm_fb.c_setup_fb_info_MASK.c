
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct msmfb_info {int xres; int yres; TYPE_3__* panel; struct fb_info* fb; } ;
struct TYPE_13__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct TYPE_12__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_11__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_14__ {int xres; int yres; int xres_virtual; int yres_virtual; int* reserved; TYPE_6__ blue; TYPE_5__ green; TYPE_4__ red; scalar_t__ yoffset; scalar_t__ accel_flags; int bits_per_pixel; int height; int width; } ;
struct TYPE_8__ {int ypanstep; int line_length; int visual; int type; int id; } ;
struct fb_info {int* pseudo_palette; int cmap; TYPE_7__ var; TYPE_1__ fix; int flags; int * fbops; } ;
struct TYPE_10__ {int caps; TYPE_2__* fb_data; } ;
struct TYPE_9__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int *,int,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct msmfb_info *VAR_7)
{
 struct fb_info *VAR_8 = VAR_7->fb;
 int VAR_9;


 FUNC_1(VAR_8->fix.id, "msmfb", 16);
 VAR_8->fix.ypanstep = 1;

 VAR_8->fbops = &VAR_6;
 VAR_8->flags = VAR_1;

 VAR_8->fix.type = VAR_2;
 VAR_8->fix.visual = VAR_3;
 VAR_8->fix.line_length = VAR_7->xres * 2;

 VAR_8->var.xres = VAR_7->xres;
 VAR_8->var.yres = VAR_7->yres;
 VAR_8->var.width = VAR_7->panel->fb_data->width;
 VAR_8->var.height = VAR_7->panel->fb_data->height;
 VAR_8->var.xres_virtual = VAR_7->xres;
 VAR_8->var.yres_virtual = VAR_7->yres * 2;
 VAR_8->var.bits_per_pixel = VAR_0;
 VAR_8->var.accel_flags = 0;

 VAR_8->var.yoffset = 0;

 if (VAR_7->panel->caps & VAR_4) {
  VAR_8->var.reserved[0] = 0x54445055;
  VAR_8->var.reserved[1] = 0;
  VAR_8->var.reserved[2] = (uint16_t)VAR_7->xres |
        ((uint32_t)VAR_7->yres << 16);
 }

 VAR_8->var.red.offset = 11;
 VAR_8->var.red.length = 5;
 VAR_8->var.red.msb_right = 0;
 VAR_8->var.green.offset = 5;
 VAR_8->var.green.length = 6;
 VAR_8->var.green.msb_right = 0;
 VAR_8->var.blue.offset = 0;
 VAR_8->var.blue.length = 5;
 VAR_8->var.blue.msb_right = 0;

 VAR_9 = FUNC_0(&VAR_8->cmap, 16, 0);
 VAR_8->pseudo_palette = VAR_5;

 VAR_5[0] = 0;
 for (VAR_9 = 1; VAR_9 < 16; VAR_9++)
  VAR_5[VAR_9] = 0xffffffff;
}
