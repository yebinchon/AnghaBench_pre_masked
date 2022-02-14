
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_5 > VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2 + VAR_3);
 return (VAR_6 & FUNC_0(VAR_5)) != 0;
}
