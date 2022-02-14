
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcf_gpio_chip {int * gpio_to_pinmux; } ;
struct gpio_chip {int dummy; } ;


 struct mcf_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct mcf_gpio_chip *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->gpio_to_pinmux ?
  FUNC_1(VAR_2->gpio_to_pinmux[VAR_1], 0) : 0;
}
