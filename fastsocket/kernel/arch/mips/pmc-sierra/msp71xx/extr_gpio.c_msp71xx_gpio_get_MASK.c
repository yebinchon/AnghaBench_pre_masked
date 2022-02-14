
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp71xx_gpio_chip {int data_reg; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 struct msp71xx_gpio_chip* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct msp71xx_gpio_chip *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->data_reg) & (1 << VAR_1);
}
