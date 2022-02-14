
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* label; int ngpio; int can_sleep; int set; int get; int direction_output; int direction_input; int owner; scalar_t__ base; } ;
struct ucb1400_gpio {TYPE_3__ gc; } ;
struct TYPE_5__ {struct ucb1400_gpio* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int (* gpio_setup ) (TYPE_2__*,int) ;scalar_t__ gpio_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct platform_device*,struct ucb1400_gpio*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_7)
{
 struct ucb1400_gpio *VAR_8 = VAR_7->dev.platform_data;
 int VAR_9 = 0;

 if (!(VAR_6 && VAR_6->gpio_offset)) {
  VAR_9 = -VAR_0;
  goto err;
 }

 FUNC_1(VAR_7, VAR_8);

 VAR_8->gc.label = "ucb1400_gpio";
 VAR_8->gc.base = VAR_6->gpio_offset;
 VAR_8->gc.ngpio = 10;
 VAR_8->gc.owner = VAR_1;

 VAR_8->gc.direction_input = VAR_2;
 VAR_8->gc.direction_output = VAR_3;
 VAR_8->gc.get = VAR_4;
 VAR_8->gc.set = VAR_5;
 VAR_8->gc.can_sleep = 1;

 VAR_9 = FUNC_0(&VAR_8->gc);
 if (VAR_9)
  goto err;

 if (VAR_6 && VAR_6->gpio_setup)
  VAR_9 = VAR_6->gpio_setup(&VAR_7->dev, VAR_8->gc.ngpio);

err:
 return VAR_9;

}
