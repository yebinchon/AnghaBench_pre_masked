
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* name; int flags; int blink_set; int brightness_set; void* brightness; } ;
struct bd2802_led {TYPE_2__ cdev_led1r; TYPE_2__ cdev_led1g; TYPE_2__ cdev_led1b; TYPE_2__ cdev_led2r; TYPE_2__ cdev_led2g; TYPE_2__ cdev_led2b; TYPE_1__* client; int work; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct bd2802_led *VAR_15)
{
 int VAR_16;

 FUNC_0(&VAR_15->work, VAR_2);

 VAR_15->cdev_led1r.name = "led1_R";
 VAR_15->cdev_led1r.brightness = VAR_1;
 VAR_15->cdev_led1r.brightness_set = VAR_8;
 VAR_15->cdev_led1r.blink_set = VAR_7;

 VAR_16 = FUNC_2(&VAR_15->client->dev, &VAR_15->cdev_led1r);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_15->client->dev, "couldn't register LED %s\n",
       VAR_15->cdev_led1r.name);
  goto failed_unregister_led1_R;
 }

 VAR_15->cdev_led1g.name = "led1_G";
 VAR_15->cdev_led1g.brightness = VAR_1;
 VAR_15->cdev_led1g.brightness_set = VAR_6;
 VAR_15->cdev_led1g.blink_set = VAR_5;

 VAR_16 = FUNC_2(&VAR_15->client->dev, &VAR_15->cdev_led1g);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_15->client->dev, "couldn't register LED %s\n",
       VAR_15->cdev_led1g.name);
  goto failed_unregister_led1_G;
 }

 VAR_15->cdev_led1b.name = "led1_B";
 VAR_15->cdev_led1b.brightness = VAR_1;
 VAR_15->cdev_led1b.brightness_set = VAR_4;
 VAR_15->cdev_led1b.blink_set = VAR_3;

 VAR_16 = FUNC_2(&VAR_15->client->dev, &VAR_15->cdev_led1b);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_15->client->dev, "couldn't register LED %s\n",
       VAR_15->cdev_led1b.name);
  goto failed_unregister_led1_B;
 }

 VAR_15->cdev_led2r.name = "led2_R";
 VAR_15->cdev_led2r.brightness = VAR_1;
 VAR_15->cdev_led2r.brightness_set = VAR_14;
 VAR_15->cdev_led2r.blink_set = VAR_13;

 VAR_16 = FUNC_2(&VAR_15->client->dev, &VAR_15->cdev_led2r);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_15->client->dev, "couldn't register LED %s\n",
       VAR_15->cdev_led2r.name);
  goto failed_unregister_led2_R;
 }

 VAR_15->cdev_led2g.name = "led2_G";
 VAR_15->cdev_led2g.brightness = VAR_1;
 VAR_15->cdev_led2g.brightness_set = VAR_12;
 VAR_15->cdev_led2g.blink_set = VAR_11;

 VAR_16 = FUNC_2(&VAR_15->client->dev, &VAR_15->cdev_led2g);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_15->client->dev, "couldn't register LED %s\n",
       VAR_15->cdev_led2g.name);
  goto failed_unregister_led2_G;
 }

 VAR_15->cdev_led2b.name = "led2_B";
 VAR_15->cdev_led2b.brightness = VAR_1;
 VAR_15->cdev_led2b.brightness_set = VAR_10;
 VAR_15->cdev_led2b.blink_set = VAR_9;
 VAR_15->cdev_led2b.flags |= VAR_0;

 VAR_16 = FUNC_2(&VAR_15->client->dev, &VAR_15->cdev_led2b);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_15->client->dev, "couldn't register LED %s\n",
       VAR_15->cdev_led2b.name);
  goto failed_unregister_led2_B;
 }

 return 0;

failed_unregister_led2_B:
 FUNC_3(&VAR_15->cdev_led2g);
failed_unregister_led2_G:
 FUNC_3(&VAR_15->cdev_led2r);
failed_unregister_led2_R:
 FUNC_3(&VAR_15->cdev_led1b);
failed_unregister_led1_B:
 FUNC_3(&VAR_15->cdev_led1g);
failed_unregister_led1_G:
 FUNC_3(&VAR_15->cdev_led1r);
failed_unregister_led1_R:

 return VAR_16;
}
