
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_video {scalar_t__ screen_bck; int screensize; TYPE_1__* sunxi_disp; } ;
struct TYPE_2__ {scalar_t__ framebuffer_addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct sunxi_video *VAR_0)
{
   if (!VAR_0)
      return;

   FUNC_2("setterm -cursor on");

   FUNC_1((char*)VAR_0->sunxi_disp->framebuffer_addr, (char*)VAR_0->screen_bck, VAR_0->screensize);

   FUNC_0(VAR_0->screen_bck);
}
