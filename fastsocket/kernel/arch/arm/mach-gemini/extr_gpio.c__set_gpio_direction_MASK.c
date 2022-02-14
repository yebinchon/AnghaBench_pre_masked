
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2,
    int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2 / 32);
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_4 + VAR_0);
 if (VAR_3)
  VAR_5 |= 1 << (VAR_2 % 32);
 else
  VAR_5 &= ~(1 << (VAR_2 % 32));
 FUNC_2(VAR_5, VAR_4 + VAR_0);
}
