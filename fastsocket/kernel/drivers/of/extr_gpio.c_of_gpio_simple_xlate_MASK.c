
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ const ngpio; } ;
struct of_gpio_chip {int gpio_cells; TYPE_1__ gc; } ;
struct device_node {int dummy; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(struct of_gpio_chip *VAR_1, struct device_node *VAR_2,
    const void *VAR_3, enum of_gpio_flags *VAR_4)
{
 const u32 *VAR_5 = VAR_3;







 if (VAR_1->gpio_cells < 2) {
  FUNC_0(1);
  return -VAR_0;
 }

 if (*VAR_5 > VAR_1->gc.ngpio)
  return -VAR_0;

 if (VAR_4)
  *VAR_4 = VAR_5[1];

 return *VAR_5;
}
