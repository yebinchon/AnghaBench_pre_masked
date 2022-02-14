
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int xres; int yres; int xres_virtual; int yres_virtual; int bits_per_pixel; scalar_t__ nonstd; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_5__ {TYPE_4__ si; } ;
typedef TYPE_1__ omapfb_state_t ;
struct TYPE_6__ {int num_pages; int bpp; int fb_framesize; int fd; TYPE_1__* current_state; } ;
typedef TYPE_2__ omapfb_data_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(omapfb_data_t *VAR_1, int VAR_2, int VAR_3)
{
   omapfb_state_t* VAR_4 = VAR_1->current_state;

   VAR_4->si.xres = VAR_2;
   VAR_4->si.yres = VAR_3;
   VAR_4->si.xres_virtual = VAR_2;
   VAR_4->si.yres_virtual = VAR_3 * VAR_1->num_pages;
   VAR_4->si.xoffset = 0;
   VAR_4->si.yoffset = 0;
   VAR_4->si.bits_per_pixel = VAR_1->bpp * 8;


   VAR_4->si.nonstd = 0;

   if (FUNC_1(VAR_1->fd, VAR_0, &VAR_4->si) != 0)
   {
      FUNC_0("[video_omap]: setup screeninfo failed\n");
      return -1;
   }

   VAR_1->fb_framesize = VAR_2 * VAR_3 * VAR_1->bpp;

   return 0;
}
