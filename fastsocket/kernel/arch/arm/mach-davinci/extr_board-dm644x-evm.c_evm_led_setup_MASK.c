
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct gpio_led {int gpio; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct gpio_led* VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 TYPE_2__* FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(struct i2c_client *VAR_3, int VAR_4, unsigned VAR_5, void *VAR_6)
{
 struct gpio_led *VAR_7 = VAR_2;
 int VAR_8;

 while (VAR_5--) {
  VAR_7->gpio = VAR_4++;
  VAR_7++;
 }




 VAR_1 = FUNC_2("leds-gpio", 0);
 FUNC_1(VAR_1,
   &VAR_0, sizeof VAR_0);

 VAR_1->dev.parent = &VAR_3->dev;
 VAR_8 = FUNC_0(VAR_1);
 if (VAR_8 < 0) {
  FUNC_3(VAR_1);
  VAR_1 = ((void*)0);
 }
 return VAR_8;
}
