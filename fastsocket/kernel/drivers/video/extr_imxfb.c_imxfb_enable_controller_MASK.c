
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxfb_info {int screen_dma; int (* lcd_power ) (int) ;int (* backlight_power ) (int) ;int clk; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct imxfb_info *VAR_7)
{
 FUNC_1("Enabling LCD controller\n");

 FUNC_5(VAR_7->screen_dma, VAR_7->regs + VAR_5);


 FUNC_5(0x00000000, VAR_7->regs + VAR_3);


 FUNC_5(FUNC_2(VAR_7->regs + VAR_2) & ~(VAR_0 | VAR_1),
  VAR_7->regs + VAR_2);

 FUNC_5(VAR_6, VAR_7->regs + VAR_4);

 FUNC_0(VAR_7->clk);

 if (VAR_7->backlight_power)
  VAR_7->backlight_power(1);
 if (VAR_7->lcd_power)
  VAR_7->lcd_power(1);
}
