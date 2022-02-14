
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s3c24xx_led_platdata {int flags; int gpio; int name; int def_trigger; } ;
struct TYPE_5__ {int flags; int name; int default_trigger; int brightness_set; } ;
struct s3c24xx_gpio_led {TYPE_2__ cdev; struct s3c24xx_led_platdata* pdata; } ;
struct TYPE_4__ {struct s3c24xx_led_platdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct s3c24xx_gpio_led*) ;
 struct s3c24xx_gpio_led* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (struct platform_device*,struct s3c24xx_gpio_led*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct s3c24xx_led_platdata *VAR_8 = VAR_7->dev.platform_data;
 struct s3c24xx_gpio_led *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(struct s3c24xx_gpio_led), VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_7->dev, "No memory for device\n");
  return -VAR_0;
 }

 FUNC_4(VAR_7, VAR_9);

 VAR_9->cdev.brightness_set = VAR_6;
 VAR_9->cdev.default_trigger = VAR_8->def_trigger;
 VAR_9->cdev.name = VAR_8->name;
 VAR_9->cdev.flags |= VAR_2;

 VAR_9->pdata = VAR_8;



 if (VAR_8->flags & VAR_5) {
  FUNC_7(VAR_8->gpio, 0);
  FUNC_5(VAR_8->gpio, VAR_3);
 } else {
  FUNC_6(VAR_8->gpio, 0);
  FUNC_7(VAR_8->gpio, 0);
  FUNC_5(VAR_8->gpio, VAR_4);
 }



 VAR_10 = FUNC_3(&VAR_7->dev, &VAR_9->cdev);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_7->dev, "led_classdev_register failed\n");
  FUNC_1(VAR_9);
  return VAR_10;
 }

 return 0;
}
