
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mm_gpio_chip {scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned int,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 struct of_mm_gpio_chip* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 struct of_mm_gpio_chip *VAR_6 = FUNC_3(VAR_2);


 FUNC_0(VAR_6->regs + VAR_1, VAR_3, VAR_4);

 VAR_5 = FUNC_1(VAR_6->regs + VAR_0);
 VAR_5 = VAR_5 & ~(0x1 << VAR_3);
 FUNC_2(VAR_5, VAR_6->regs + VAR_0);

 return 0;
}
