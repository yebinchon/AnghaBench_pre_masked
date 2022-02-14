
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_bank {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct gpio_bank*,unsigned int) ;
 struct gpio_bank* FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_1 - VAR_0;
 struct gpio_bank *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, VAR_2);
}
