
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct w100fb_par {TYPE_2__* mach; } ;
struct TYPE_12__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_11__ {int length; scalar_t__ offset; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {int offset; int length; } ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int height; int width; int pixclock; scalar_t__ sync; int vmode; scalar_t__ nonstd; TYPE_6__ transp; TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; void* yres_virtual; void* xres_virtual; } ;
struct fb_info {struct w100fb_par* par; } ;
struct TYPE_8__ {TYPE_1__* mem; } ;
struct TYPE_7__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (struct w100fb_par*,int*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_4, struct fb_info *VAR_5)
{
 struct w100fb_par *VAR_6=VAR_5->par;

 if(!FUNC_1(VAR_6, &VAR_4->xres, &VAR_4->yres, 1))
  return -VAR_1;

 if (VAR_6->mach->mem && ((VAR_4->xres*VAR_4->yres*VAR_0/8) > (VAR_6->mach->mem->size+1)))
  return -VAR_1;

 if (!VAR_6->mach->mem && ((VAR_4->xres*VAR_4->yres*VAR_0/8) > (VAR_3+1)))
  return -VAR_1;

 VAR_4->xres_virtual = FUNC_0(VAR_4->xres_virtual, VAR_4->xres);
 VAR_4->yres_virtual = FUNC_0(VAR_4->yres_virtual, VAR_4->yres);

 if (VAR_4->bits_per_pixel > VAR_0)
  return -VAR_1;
 else
  VAR_4->bits_per_pixel = VAR_0;

 VAR_4->red.offset = 11;
 VAR_4->red.length = 5;
 VAR_4->green.offset = 5;
 VAR_4->green.length = 6;
 VAR_4->blue.offset = 0;
 VAR_4->blue.length = 5;
 VAR_4->transp.offset = VAR_4->transp.length = 0;

 VAR_4->nonstd = 0;
 VAR_4->height = -1;
 VAR_4->width = -1;
 VAR_4->vmode = VAR_2;
 VAR_4->sync = 0;
 VAR_4->pixclock = 0x04;

 return 0;
}
