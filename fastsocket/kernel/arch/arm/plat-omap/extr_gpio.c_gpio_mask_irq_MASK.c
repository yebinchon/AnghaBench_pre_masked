
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_bank {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_bank*,unsigned int,int ) ;
 int FUNC_1 (struct gpio_bank*,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 struct gpio_bank* FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_2 - VAR_0;
 struct gpio_bank *VAR_4 = FUNC_3(VAR_2);

 FUNC_0(VAR_4, VAR_3, 0);
 FUNC_1(VAR_4, FUNC_2(VAR_3), VAR_1);
}
