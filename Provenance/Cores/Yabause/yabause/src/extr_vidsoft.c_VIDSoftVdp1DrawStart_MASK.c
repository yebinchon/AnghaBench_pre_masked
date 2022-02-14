
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Vdp1 ;
struct TYPE_2__ {int need_draw; scalar_t__ draw_finished; int * back_framebuffer; int regs; int * ram; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 int * VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_6()
{
   if (VAR_5)
   {
      FUNC_3();


      FUNC_5(VAR_4.ram, VAR_0, 0x80000);
      FUNC_5(&VAR_4.regs, VAR_1, sizeof(Vdp1));
      FUNC_5(VAR_4.back_framebuffer, VAR_3, 0x40000);

      FUNC_0(&VAR_4.regs, VAR_4.back_framebuffer);


      VAR_4.draw_finished = 0;
      VAR_4.need_draw = 1;
      FUNC_4(VAR_2);

      FUNC_2(VAR_0, VAR_1);
   }
   else
   {
      FUNC_0(VAR_1, VAR_3);
      FUNC_1(VAR_0, VAR_1, VAR_3);
   }
}
