
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int can_sleep; } ;


 struct gpio_chip* FUNC_0 (unsigned int) ;

int FUNC_1(unsigned VAR_0)
{
 struct gpio_chip *VAR_1;


 VAR_1 = FUNC_0(VAR_0);

 return VAR_1->can_sleep;
}
