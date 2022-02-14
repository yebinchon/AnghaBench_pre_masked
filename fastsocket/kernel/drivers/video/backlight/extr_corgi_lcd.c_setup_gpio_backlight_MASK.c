
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct corgi_lcd_platform_data {int gpio_backlight_on; int gpio_backlight_cont; } ;
struct corgi_lcd {int gpio_backlight_on; int gpio_backlight_cont; int gpio_backlight_cont_inverted; struct spi_device* spi_dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static int FUNC_5(struct corgi_lcd *VAR_0,
    struct corgi_lcd_platform_data *VAR_1)
{
 struct spi_device *VAR_2 = VAR_0->spi_dev;
 int VAR_3;

 VAR_0->gpio_backlight_on = -1;
 VAR_0->gpio_backlight_cont = -1;

 if (FUNC_3(VAR_1->gpio_backlight_on)) {
  VAR_3 = FUNC_4(VAR_1->gpio_backlight_on, "BL_ON");
  if (VAR_3) {
   FUNC_0(&VAR_2->dev, "failed to request GPIO%d for "
    "backlight_on\n", VAR_1->gpio_backlight_on);
   return VAR_3;
  }

  VAR_0->gpio_backlight_on = VAR_1->gpio_backlight_on;
  FUNC_1(VAR_0->gpio_backlight_on, 0);
 }

 if (FUNC_3(VAR_1->gpio_backlight_cont)) {
  VAR_3 = FUNC_4(VAR_1->gpio_backlight_cont, "BL_CONT");
  if (VAR_3) {
   FUNC_0(&VAR_2->dev, "failed to request GPIO%d for "
    "backlight_cont\n", VAR_1->gpio_backlight_cont);
   goto err_free_backlight_on;
  }

  VAR_0->gpio_backlight_cont = VAR_1->gpio_backlight_cont;




  if (FUNC_3(VAR_0->gpio_backlight_on)) {
   VAR_0->gpio_backlight_cont_inverted = 1;
   FUNC_1(VAR_0->gpio_backlight_cont, 1);
  } else {
   VAR_0->gpio_backlight_cont_inverted = 0;
   FUNC_1(VAR_0->gpio_backlight_cont, 0);
  }
 }
 return 0;

err_free_backlight_on:
 if (FUNC_3(VAR_0->gpio_backlight_on))
  FUNC_2(VAR_0->gpio_backlight_on);
 return VAR_3;
}
