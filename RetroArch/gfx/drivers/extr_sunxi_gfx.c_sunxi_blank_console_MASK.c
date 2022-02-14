
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_video {int screensize; char* screen_bck; TYPE_1__* sunxi_disp; } ;
struct TYPE_2__ {int xres; int yres; int bits_per_pixel; scalar_t__ framebuffer_addr; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct sunxi_video *VAR_0)
{
   if (!VAR_0)
      return;


   FUNC_3("setterm -cursor off");


   VAR_0->screensize = VAR_0->sunxi_disp->xres * VAR_0->sunxi_disp->yres * VAR_0->sunxi_disp->bits_per_pixel / 8;


   VAR_0->screen_bck = (char*)FUNC_0(VAR_0->screensize * sizeof(char));

   if (!VAR_0->screen_bck)
      return;

   FUNC_1((char*)VAR_0->screen_bck, (char*)VAR_0->sunxi_disp->framebuffer_addr, VAR_0->screensize);


   FUNC_2((char*)(VAR_0->sunxi_disp->framebuffer_addr), 0x00, VAR_0->screensize);
}
