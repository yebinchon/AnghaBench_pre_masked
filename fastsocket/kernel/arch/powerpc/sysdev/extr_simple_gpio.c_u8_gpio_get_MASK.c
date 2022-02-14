
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mm_gpio_chip {int regs; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 struct of_mm_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct of_mm_gpio_chip *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->regs) & FUNC_2(VAR_1);
}
