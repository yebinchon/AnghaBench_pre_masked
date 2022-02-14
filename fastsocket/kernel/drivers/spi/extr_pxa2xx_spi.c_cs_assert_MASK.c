
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {struct chip_data* cur_chip; } ;
struct chip_data {int gpio_cs_inverted; int gpio_cs; int (* cs_control ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct driver_data *VAR_1)
{
 struct chip_data *VAR_2 = VAR_1->cur_chip;

 if (VAR_2->cs_control) {
  VAR_2->cs_control(VAR_0);
  return;
 }

 if (FUNC_0(VAR_2->gpio_cs))
  FUNC_1(VAR_2->gpio_cs, VAR_2->gpio_cs_inverted);
}
