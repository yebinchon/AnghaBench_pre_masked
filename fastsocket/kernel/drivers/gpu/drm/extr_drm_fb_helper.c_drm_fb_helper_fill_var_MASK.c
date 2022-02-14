
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_9__ {int height; int width; void* yres; void* xres; TYPE_1__ transp; TYPE_2__ blue; TYPE_5__ green; TYPE_3__ red; int activate; scalar_t__ yoffset; scalar_t__ xoffset; int accel_flags; int bits_per_pixel; int yres_virtual; int xres_virtual; } ;
struct fb_info {TYPE_4__ var; int pseudo_palette; } ;
struct drm_framebuffer {int depth; int bits_per_pixel; int height; int width; } ;
struct drm_fb_helper {int pseudo_palette; struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct fb_info *VAR_2, struct drm_fb_helper *VAR_3,
       uint32_t VAR_4, uint32_t VAR_5)
{
 struct drm_framebuffer *VAR_6 = VAR_3->fb;
 VAR_2->pseudo_palette = VAR_3->pseudo_palette;
 VAR_2->var.xres_virtual = VAR_6->width;
 VAR_2->var.yres_virtual = VAR_6->height;
 VAR_2->var.bits_per_pixel = VAR_6->bits_per_pixel;
 VAR_2->var.accel_flags = VAR_0;
 VAR_2->var.xoffset = 0;
 VAR_2->var.yoffset = 0;
 VAR_2->var.activate = VAR_1;
 VAR_2->var.height = -1;
 VAR_2->var.width = -1;

 switch (VAR_6->depth) {
 case 8:
  VAR_2->var.red.offset = 0;
  VAR_2->var.green.offset = 0;
  VAR_2->var.blue.offset = 0;
  VAR_2->var.red.length = 8;
  VAR_2->var.green.length = 8;
  VAR_2->var.blue.length = 8;
  VAR_2->var.transp.offset = 0;
  VAR_2->var.transp.length = 0;
  break;
 case 15:
  VAR_2->var.red.offset = 10;
  VAR_2->var.green.offset = 5;
  VAR_2->var.blue.offset = 0;
  VAR_2->var.red.length = 5;
  VAR_2->var.green.length = 5;
  VAR_2->var.blue.length = 5;
  VAR_2->var.transp.offset = 15;
  VAR_2->var.transp.length = 1;
  break;
 case 16:
  VAR_2->var.red.offset = 11;
  VAR_2->var.green.offset = 5;
  VAR_2->var.blue.offset = 0;
  VAR_2->var.red.length = 5;
  VAR_2->var.green.length = 6;
  VAR_2->var.blue.length = 5;
  VAR_2->var.transp.offset = 0;
  break;
 case 24:
  VAR_2->var.red.offset = 16;
  VAR_2->var.green.offset = 8;
  VAR_2->var.blue.offset = 0;
  VAR_2->var.red.length = 8;
  VAR_2->var.green.length = 8;
  VAR_2->var.blue.length = 8;
  VAR_2->var.transp.offset = 0;
  VAR_2->var.transp.length = 0;
  break;
 case 32:
  VAR_2->var.red.offset = 16;
  VAR_2->var.green.offset = 8;
  VAR_2->var.blue.offset = 0;
  VAR_2->var.red.length = 8;
  VAR_2->var.green.length = 8;
  VAR_2->var.blue.length = 8;
  VAR_2->var.transp.offset = 24;
  VAR_2->var.transp.length = 8;
  break;
 default:
  break;
 }

 VAR_2->var.xres = VAR_4;
 VAR_2->var.yres = VAR_5;
}
