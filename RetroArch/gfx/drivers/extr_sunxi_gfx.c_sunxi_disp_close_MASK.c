
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fd_disp; scalar_t__ fd_fb; int framebuffer_size; int framebuffer_addr; } ;
typedef TYPE_1__ sunxi_disp_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(sunxi_disp_t *VAR_0)
{
   if (VAR_0->fd_disp >= 0)
   {

      FUNC_3(VAR_0);

      FUNC_2(VAR_0->framebuffer_addr, VAR_0->framebuffer_size);
      FUNC_0(VAR_0->fd_fb);
      FUNC_0(VAR_0->fd_disp);
      VAR_0->fd_disp = -1;
      FUNC_1(VAR_0);
   }
   return 0;
}
