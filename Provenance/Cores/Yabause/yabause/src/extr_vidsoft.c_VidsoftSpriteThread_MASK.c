
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* draw_finished; int color_ram; int lines; int ram; int regs; scalar_t__* need_draw; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_2(void * VAR_5)
{
   for (;;)
   {
      if (VAR_4.need_draw[VAR_0])
      {
         VAR_4.need_draw[VAR_0] = 0;
         FUNC_0(&VAR_4.regs, VAR_2, VAR_3, VAR_4.ram, VAR_1,VAR_4.lines, VAR_4.color_ram);
         VAR_4.draw_finished[VAR_0] = 1;
      }
      FUNC_1();
   }
}
