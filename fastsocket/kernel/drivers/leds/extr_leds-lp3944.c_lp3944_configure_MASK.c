
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lp3944_platform_data {int leds_size; struct lp3944_led* leds; } ;
struct TYPE_3__ {int max_brightness; int name; int brightness; int flags; int blink_set; int brightness_set; } ;
struct lp3944_led_data {int id; int type; int work; TYPE_1__ ldev; int status; struct i2c_client* client; } ;
struct lp3944_led {int type; int name; int status; } ;
struct lp3944_data {struct lp3944_led_data* leds; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;



 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,...) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct lp3944_led_data*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_4,
       struct lp3944_data *VAR_5,
       struct lp3944_platform_data *VAR_6)
{
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_6->leds_size; VAR_7++) {
  struct lp3944_led *VAR_9 = &VAR_6->leds[VAR_7];
  struct lp3944_led_data *VAR_10 = &VAR_5->leds[VAR_7];
  VAR_10->client = VAR_4;
  VAR_10->id = VAR_7;

  switch (VAR_9->type) {

  case 130:
  case 129:
   VAR_10->type = VAR_9->type;
   VAR_10->status = VAR_9->status;
   VAR_10->ldev.name = VAR_9->name;
   VAR_10->ldev.max_brightness = 1;
   VAR_10->ldev.brightness_set = VAR_2;
   VAR_10->ldev.blink_set = VAR_1;
   VAR_10->ldev.flags = VAR_0;

   FUNC_0(&VAR_10->work, VAR_3);
   VAR_8 = FUNC_3(&VAR_4->dev, &VAR_10->ldev);
   if (VAR_8 < 0) {
    FUNC_2(&VAR_4->dev,
     "couldn't register LED %s\n",
     VAR_10->ldev.name);
    goto exit;
   }


   VAR_10->ldev.brightness = VAR_10->status;


   VAR_8 = FUNC_5(VAR_10, VAR_10->status);
   if (VAR_8 < 0) {
    FUNC_2(&VAR_4->dev,
     "%s couldn't set STATUS %d\n",
     VAR_10->ldev.name, VAR_10->status);
    goto exit;
   }
   break;

  case 128:
  default:
   break;

  }
 }
 return 0;

exit:
 if (VAR_7 > 0)
  for (VAR_7 = VAR_7 - 1; VAR_7 >= 0; VAR_7--)
   switch (VAR_6->leds[VAR_7].type) {

   case 130:
   case 129:
    FUNC_4(&VAR_5->leds[VAR_7].ldev);
    FUNC_1(&VAR_5->leds[VAR_7].work);
    break;

   case 128:
   default:
    break;
   }

 return VAR_8;
}
