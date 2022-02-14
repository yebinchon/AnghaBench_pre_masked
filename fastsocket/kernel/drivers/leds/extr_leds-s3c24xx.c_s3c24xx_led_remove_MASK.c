
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_gpio_led {int cdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct s3c24xx_gpio_led*) ;
 int FUNC_1 (int *) ;
 struct s3c24xx_gpio_led* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct s3c24xx_gpio_led *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->cdev);
 FUNC_0(VAR_1);

 return 0;
}
