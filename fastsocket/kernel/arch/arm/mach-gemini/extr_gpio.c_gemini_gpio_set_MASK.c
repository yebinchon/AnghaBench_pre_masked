
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3 / 32);

 if (VAR_4)
  FUNC_1(1 << (VAR_3 % 32), VAR_5 + VAR_1);
 else
  FUNC_1(1 << (VAR_3 % 32), VAR_5 + VAR_0);
}
