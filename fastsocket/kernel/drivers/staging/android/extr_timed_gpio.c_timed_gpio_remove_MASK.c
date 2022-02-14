
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timed_gpio_platform_data {int num_gpios; } ;
struct timed_gpio_data {int dev; } ;
struct TYPE_2__ {struct timed_gpio_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct timed_gpio_data*) ;
 struct timed_gpio_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct timed_gpio_platform_data *VAR_1 = VAR_0->dev.platform_data;
 struct timed_gpio_data *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_gpios; VAR_3++)
  FUNC_2(&VAR_2[VAR_3].dev);

 FUNC_0(VAR_2);

 return 0;
}
