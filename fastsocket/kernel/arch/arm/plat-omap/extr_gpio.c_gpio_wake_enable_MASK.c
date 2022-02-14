
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_bank {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct gpio_bank*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct gpio_bank* FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2 - VAR_1;
 struct gpio_bank *VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_4) < 0)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = FUNC_0(VAR_5, FUNC_2(VAR_4), VAR_3);

 return VAR_6;
}
