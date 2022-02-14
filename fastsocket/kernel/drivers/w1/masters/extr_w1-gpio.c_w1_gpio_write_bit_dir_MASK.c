
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct w1_gpio_platform_data {int pin; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, u8 VAR_1)
{
 struct w1_gpio_platform_data *VAR_2 = VAR_0;

 if (VAR_1)
  FUNC_0(VAR_2->pin);
 else
  FUNC_1(VAR_2->pin, 0);
}
