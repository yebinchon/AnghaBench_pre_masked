
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_7__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_6__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int xres; int yres; int xres_virtual; int yres_virtual; int bits_per_pixel; int grayscale; int activate; int vmode; int sync; scalar_t__ accel_flags; scalar_t__ nonstd; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct aafb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_5,
       struct aafb_par *VAR_6)
{
 VAR_5->xres = 1280;
 VAR_5->yres = 1024;
 VAR_5->xres_virtual = 2048;
 VAR_5->yres_virtual = 1024;
 VAR_5->xoffset = 0;
 VAR_5->yoffset = 0;
 VAR_5->bits_per_pixel = 8;
 VAR_5->grayscale = 1;
 VAR_5->red.offset = 0;
 VAR_5->red.length = 0;
 VAR_5->red.msb_right = 0;
 VAR_5->green.offset = 0;
 VAR_5->green.length = 1;
 VAR_5->green.msb_right = 0;
 VAR_5->blue.offset = 0;
 VAR_5->blue.length = 0;
 VAR_5->blue.msb_right = 0;
 VAR_5->transp.offset = 0;
 VAR_5->transp.length = 0;
 VAR_5->transp.msb_right = 0;
 VAR_5->nonstd = 0;
 VAR_5->activate &= ~VAR_0 & VAR_1;
 VAR_5->accel_flags = 0;
 VAR_5->sync = VAR_2;
 VAR_5->vmode &= ~VAR_3 & VAR_4;
}
