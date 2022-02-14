
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int base; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 return FUNC_0(VAR_1->base + VAR_2, VAR_0, "gpio");
}
