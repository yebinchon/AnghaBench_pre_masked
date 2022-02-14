
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vbe_mode_ib {int y_res; int bytes_per_scan_line; int bits_per_pixel; int red_len; int green_len; int blue_len; scalar_t__ rsvd_len; scalar_t__ rsvd_off; scalar_t__ blue_off; scalar_t__ green_off; scalar_t__ red_off; int x_res; } ;
struct uvesafb_par {scalar_t__ ypan; } ;
struct TYPE_10__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_9__ {int length; scalar_t__ offset; } ;
struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int yres; int yres_virtual; int bits_per_pixel; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ yoffset; scalar_t__ xoffset; int xres_virtual; int xres; int sync; int vmode; } ;
struct TYPE_6__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_2,
  struct fb_info *VAR_3, struct vbe_mode_ib *VAR_4)
{
 struct uvesafb_par *VAR_5 = VAR_3->par;

 VAR_2->vmode = VAR_1;
 VAR_2->sync = VAR_0;

 VAR_2->xres = VAR_4->x_res;
 VAR_2->yres = VAR_4->y_res;
 VAR_2->xres_virtual = VAR_4->x_res;
 VAR_2->yres_virtual = (VAR_5->ypan) ?
   VAR_3->fix.smem_len / VAR_4->bytes_per_scan_line :
   VAR_4->y_res;
 VAR_2->xoffset = 0;
 VAR_2->yoffset = 0;
 VAR_2->bits_per_pixel = VAR_4->bits_per_pixel;

 if (VAR_2->bits_per_pixel == 15)
  VAR_2->bits_per_pixel = 16;

 if (VAR_2->bits_per_pixel > 8) {
  VAR_2->red.offset = VAR_4->red_off;
  VAR_2->red.length = VAR_4->red_len;
  VAR_2->green.offset = VAR_4->green_off;
  VAR_2->green.length = VAR_4->green_len;
  VAR_2->blue.offset = VAR_4->blue_off;
  VAR_2->blue.length = VAR_4->blue_len;
  VAR_2->transp.offset = VAR_4->rsvd_off;
  VAR_2->transp.length = VAR_4->rsvd_len;
 } else {
  VAR_2->red.offset = 0;
  VAR_2->green.offset = 0;
  VAR_2->blue.offset = 0;
  VAR_2->transp.offset = 0;

  VAR_2->red.length = 8;
  VAR_2->green.length = 8;
  VAR_2->blue.length = 8;
  VAR_2->transp.length = 0;
 }
}
