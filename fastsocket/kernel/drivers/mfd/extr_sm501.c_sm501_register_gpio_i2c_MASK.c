
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_platdata_gpio_i2c {int dummy; } ;
struct sm501_platdata {int gpio_i2c_nr; struct sm501_platdata_gpio_i2c* gpio_i2c; } ;
struct sm501_devdata {int dummy; } ;


 int FUNC_0 (struct sm501_devdata*,struct sm501_platdata_gpio_i2c*) ;

__attribute__((used)) static int FUNC_1(struct sm501_devdata *VAR_0,
       struct sm501_platdata *VAR_1)
{
 struct sm501_platdata_gpio_i2c *VAR_2 = VAR_1->gpio_i2c;
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->gpio_i2c_nr; VAR_3++, VAR_2++) {
  VAR_4 = FUNC_0(VAR_0, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
