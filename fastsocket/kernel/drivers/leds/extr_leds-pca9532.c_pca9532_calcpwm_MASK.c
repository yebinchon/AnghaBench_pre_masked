
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pca9532_data {int* pwm; int* psc; TYPE_2__* leds; } ;
struct i2c_client {int dev; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_3__ {scalar_t__ brightness; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ state; TYPE_1__ ldev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 struct pca9532_data* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3, int VAR_4, int VAR_5,
 enum led_brightness VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 struct pca9532_data *VAR_10 = FUNC_1(VAR_3);
 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  if (VAR_10->leds[VAR_9].type == VAR_2 &&
   VAR_10->leds[VAR_9].state == VAR_1+VAR_4) {
    VAR_7++;
    VAR_8 += VAR_10->leds[VAR_9].ldev.brightness;
  }
 }
 if (VAR_7 == 0) {
  FUNC_0(&VAR_3->dev,
  "fear of division by zero %d/%d, wanted %d\n",
   VAR_8, VAR_7, VAR_6);
  return -VAR_0;
 }
 VAR_8 = VAR_8/VAR_7;
 if (VAR_8 > 0xFF)
  return -VAR_0;
 VAR_10->pwm[VAR_4] = VAR_8;
 VAR_10->psc[VAR_4] = VAR_5;
 return 0;
}
