
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clcd_fb {int clk; scalar_t__ regs; TYPE_1__* board; } ;
struct TYPE_2__ {int (* disable ) (struct clcd_fb*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct clcd_fb*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct clcd_fb *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->board->disable)
  VAR_3->board->disable(VAR_3);

 VAR_4 = FUNC_2(VAR_3->regs + VAR_0);
 if (VAR_4 & VAR_2) {
  VAR_4 &= ~VAR_2;
  FUNC_4(VAR_4, VAR_3->regs + VAR_0);

  FUNC_0(20);
 }
 if (VAR_4 & VAR_1) {
  VAR_4 &= ~VAR_1;
  FUNC_4(VAR_4, VAR_3->regs + VAR_0);
 }




 FUNC_1(VAR_3->clk);
}
