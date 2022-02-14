
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxfb_info {scalar_t__ regs; int clk; int (* lcd_power ) (int ) ;int (* backlight_power ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct imxfb_info *VAR_1)
{
 FUNC_1("Disabling LCD controller\n");

 if (VAR_1->backlight_power)
  VAR_1->backlight_power(0);
 if (VAR_1->lcd_power)
  VAR_1->lcd_power(0);

 FUNC_0(VAR_1->clk);

 FUNC_4(0, VAR_1->regs + VAR_0);
}
