
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sunxi_video {unsigned int src_width; unsigned int src_height; unsigned int src_pitch; int src_pixels_per_line; int bytes_per_pixel; int dst_pitch; unsigned int aspect_ratio; TYPE_2__* sunxi_disp; TYPE_1__* pages; } ;
struct TYPE_5__ {int yres; int xres; scalar_t__ framebuffer_addr; } ;
struct TYPE_4__ {int offset; int * address; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2 (void *VAR_1,
      unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
   int VAR_5;
   unsigned int VAR_6, VAR_7;
   struct sunxi_video *VAR_8 = (struct sunxi_video*)VAR_1;

   VAR_8->src_width = VAR_2;
   VAR_8->src_height = VAR_3;



   VAR_8->src_pitch = VAR_4;


   VAR_8->src_pixels_per_line = VAR_8->src_pitch/VAR_8->bytes_per_pixel;





   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      VAR_8->pages[VAR_5].offset = (VAR_8->sunxi_disp->yres + VAR_5 * VAR_8->src_height) * VAR_8->sunxi_disp->xres * 4;
      VAR_8->pages[VAR_5].address = ((uint32_t*) VAR_8->sunxi_disp->framebuffer_addr + (VAR_8->sunxi_disp->yres + VAR_5 * VAR_8->src_height) * VAR_8->dst_pitch/4);
   }

   VAR_7 = VAR_8->sunxi_disp->yres * VAR_8->aspect_ratio;
   VAR_6 = (VAR_8->sunxi_disp->xres - VAR_7) / 2;


   FUNC_0(VAR_8->sunxi_disp, VAR_6, 0, VAR_7, VAR_8->sunxi_disp->yres);


   FUNC_1(VAR_8->sunxi_disp);
}
