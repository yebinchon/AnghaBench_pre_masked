
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp71xx_exd_gpio_chip {int reg; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int ) ;
 struct msp71xx_exd_gpio_chip* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct msp71xx_exd_gpio_chip *VAR_2 =
     FUNC_2(VAR_0);

 FUNC_1(1 << FUNC_0(VAR_1), VAR_2->reg);
 return 0;
}
