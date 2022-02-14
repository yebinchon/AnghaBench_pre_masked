
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mm_gpio_chip {scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct of_mm_gpio_chip* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;
 struct of_mm_gpio_chip *VAR_5 = FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_5->regs + VAR_0);
 VAR_4 = (int)((VAR_3 >> VAR_2) & 0x1);

 return VAR_4;
}
