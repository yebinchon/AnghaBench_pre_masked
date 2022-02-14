
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {int first_gpio; int last_gpio; struct pinmux_data_reg* data_regs; } ;
struct pinmux_data_reg {int reg_width; int reg; int reg_shadow; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pinmux_info*,int) ;

__attribute__((used)) static void FUNC_2(struct pinmux_info *VAR_0)
{
 struct pinmux_data_reg *VAR_1;
 int VAR_2;

 for (VAR_2 = VAR_0->first_gpio; VAR_2 <= VAR_0->last_gpio; VAR_2++)
  FUNC_1(VAR_0, VAR_2);

 VAR_2 = 0;
 while (1) {
  VAR_1 = VAR_0->data_regs + VAR_2;

  if (!VAR_1->reg_width)
   break;

  VAR_1->reg_shadow = FUNC_0(VAR_1->reg, VAR_1->reg_width);
  VAR_2++;
 }
}
