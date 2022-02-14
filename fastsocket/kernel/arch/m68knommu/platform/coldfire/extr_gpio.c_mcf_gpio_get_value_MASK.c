
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcf_gpio_chip {int ppdr; } ;
struct gpio_chip {unsigned int base; } ;


 struct mcf_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct mcf_gpio_chip *VAR_2 = FUNC_0(VAR_0);

 return FUNC_2(VAR_2->ppdr) & FUNC_1(VAR_0->base + VAR_1);
}
