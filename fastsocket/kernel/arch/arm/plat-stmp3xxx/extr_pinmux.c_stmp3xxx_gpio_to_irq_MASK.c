
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_pinmux_bank {int virq; } ;
struct gpio_chip {int dummy; } ;


 struct stmp3xxx_pinmux_bank* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct stmp3xxx_pinmux_bank *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->virq + VAR_1;
}
