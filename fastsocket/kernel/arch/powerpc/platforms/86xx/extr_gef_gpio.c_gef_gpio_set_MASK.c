
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mm_gpio_chip {scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int,int) ;
 struct of_mm_gpio_chip* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct of_mm_gpio_chip *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4->regs + VAR_0, VAR_2, VAR_3);
}
