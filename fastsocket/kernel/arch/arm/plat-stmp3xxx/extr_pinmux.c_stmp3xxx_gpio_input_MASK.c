
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_pinmux_bank {int hw_gpio_doe; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int,int ) ;
 struct stmp3xxx_pinmux_bank* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct stmp3xxx_pinmux_bank *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(1 << VAR_1, VAR_2->hw_gpio_doe);
 return 0;
}
