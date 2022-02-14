
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int base; int (* set ) (struct gpio_chip*,unsigned int,int) ;} ;


 int VAR_0 ;
 struct gpio_chip* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;

void FUNC_3(unsigned VAR_1, int VAR_2)
{
 struct gpio_chip *VAR_3;

 FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 VAR_3->set(VAR_3, VAR_1 - VAR_3->base, VAR_2);
}
