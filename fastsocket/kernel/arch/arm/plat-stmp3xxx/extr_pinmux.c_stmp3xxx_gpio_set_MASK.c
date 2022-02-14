
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_pinmux_bank {int hw_gpio_out; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 struct stmp3xxx_pinmux_bank* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct stmp3xxx_pinmux_bank *VAR_3 = FUNC_2(VAR_0);

 if (VAR_2)
  FUNC_1(1 << VAR_1, VAR_3->hw_gpio_out);
 else
  FUNC_0(1 << VAR_1, VAR_3->hw_gpio_out);
}
