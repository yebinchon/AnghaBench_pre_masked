
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int (* get ) (struct gpio_chip*,unsigned int) ;unsigned int base; } ;


 int VAR_0 ;
 struct gpio_chip* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gpio_chip*,unsigned int) ;

int FUNC_3(unsigned VAR_1)
{
 struct gpio_chip *VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 return VAR_2->get ? VAR_2->get(VAR_2, VAR_1 - VAR_2->base) : 0;
}
