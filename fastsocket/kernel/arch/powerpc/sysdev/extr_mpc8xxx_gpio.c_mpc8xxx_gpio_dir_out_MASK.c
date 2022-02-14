
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mm_gpio_chip {scalar_t__ regs; } ;
struct mpc8xxx_gpio_chip {int lock; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mpc8xxx_gpio_chip* FUNC_5 (struct of_mm_gpio_chip*) ;
 struct of_mm_gpio_chip* FUNC_6 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct of_mm_gpio_chip *VAR_4 = FUNC_6(VAR_1);
 struct mpc8xxx_gpio_chip *VAR_5 = FUNC_5(VAR_4);
 unsigned long VAR_6;

 FUNC_1(VAR_1, VAR_2, VAR_3);

 FUNC_3(&VAR_5->lock, VAR_6);

 FUNC_2(VAR_4->regs + VAR_0, FUNC_0(VAR_2));

 FUNC_4(&VAR_5->lock, VAR_6);

 return 0;
}
