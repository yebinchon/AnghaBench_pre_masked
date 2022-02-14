
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int draw_finished; int back_framebuffer; int regs; int ram; scalar_t__ need_draw; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_3(void* VAR_2)
{
   for (;;)
   {
      if (VAR_1.need_draw)
      {
         VAR_1.need_draw = 0;
         FUNC_0(VAR_1.ram, &VAR_1.regs, VAR_1.back_framebuffer);
         FUNC_2(VAR_0, VAR_1.back_framebuffer, 0x40000);
         VAR_1.draw_finished = 1;
      }

      FUNC_1();
   }
}
