
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clcd_fb {TYPE_1__* board; scalar_t__ regs; int clk; } ;
struct TYPE_2__ {int (* enable ) (struct clcd_fb*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clcd_fb*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct clcd_fb *VAR_3, u32 VAR_4)
{



 FUNC_1(VAR_3->clk);




 VAR_4 |= VAR_1;
 FUNC_3(VAR_4, VAR_3->regs + VAR_0);

 FUNC_0(20);




 VAR_4 |= VAR_2;
 FUNC_3(VAR_4, VAR_3->regs + VAR_0);




 if (VAR_3->board->enable)
  VAR_3->board->enable(VAR_3);
}
