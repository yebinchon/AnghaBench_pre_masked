
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct davinci_soc_info {unsigned int gpio_unbanked; int gpio_irq; } ;


 int VAR_0 ;
 struct davinci_soc_info VAR_1 ;

__attribute__((used)) static int FUNC_0(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct davinci_soc_info *VAR_4 = &VAR_1;




 if (VAR_3 < VAR_4->gpio_unbanked)
  return VAR_4->gpio_irq + VAR_3;
 else
  return -VAR_0;
}
