
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2 / 32);

 return (FUNC_1(VAR_3 + VAR_0) >> (VAR_2 % 32)) & 1;
}
