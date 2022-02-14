
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timed_gpio_platform_data {int num_gpios; struct timed_gpio* gpios; } ;
struct TYPE_6__ {int enable; int get_time; int name; } ;
struct TYPE_7__ {int function; } ;
struct timed_gpio_data {int active_low; int gpio; int max_timeout; TYPE_2__ dev; int lock; TYPE_4__ timer; } ;
struct timed_gpio {int active_low; int max_timeout; int gpio; int name; } ;
struct TYPE_5__ {struct timed_gpio_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (struct timed_gpio_data*) ;
 struct timed_gpio_data* FUNC_3 (int,int ) ;
 int FUNC_4 (struct platform_device*,struct timed_gpio_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 struct timed_gpio_platform_data *VAR_9 = VAR_8->dev.platform_data;
 struct timed_gpio *VAR_10;
 struct timed_gpio_data *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_3(sizeof(struct timed_gpio_data) * VAR_9->num_gpios,
   VAR_3);
 if (!VAR_11)
  return -VAR_2;

 for (VAR_13 = 0; VAR_13 < VAR_9->num_gpios; VAR_13++) {
  VAR_10 = &VAR_9->gpios[VAR_13];
  VAR_12 = &VAR_11[VAR_13];

  FUNC_1(&VAR_12->timer, VAR_0,
    VAR_4);
  VAR_12->timer.function = VAR_7;
  FUNC_5(&VAR_12->lock);

  VAR_12->dev.name = VAR_10->name;
  VAR_12->dev.get_time = VAR_6;
  VAR_12->dev.enable = VAR_5;
  VAR_15 = FUNC_6(&VAR_12->dev);
  if (VAR_15 < 0) {
   for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
    FUNC_7(&VAR_11[VAR_13].dev);
   FUNC_2(VAR_11);
   return VAR_15;
  }

  VAR_12->gpio = VAR_10->gpio;
  VAR_12->max_timeout = VAR_10->max_timeout;
  VAR_12->active_low = VAR_10->active_low;
  FUNC_0(VAR_12->gpio, VAR_12->active_low);
 }

 FUNC_4(VAR_8, VAR_11);

 return 0;
}
