
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {char* label; int ngpio; int base; int direction_output; int direction_input; int set; int get; int free; int request; int owner; } ;
struct bcma_drv_cc {TYPE_2__* core; struct gpio_chip gpio; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ hosttype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gpio_chip*) ;

int FUNC_1(struct bcma_drv_cc *VAR_8)
{
 struct gpio_chip *VAR_9 = &VAR_8->gpio;

 VAR_9->label = "bcma_gpio";
 VAR_9->owner = VAR_1;
 VAR_9->request = VAR_6;
 VAR_9->free = VAR_4;
 VAR_9->get = VAR_5;
 VAR_9->set = VAR_7;
 VAR_9->direction_input = VAR_2;
 VAR_9->direction_output = VAR_3;
 VAR_9->ngpio = 16;



 if (VAR_8->core->bus->hosttype == VAR_0)
  VAR_9->base = 0;
 else
  VAR_9->base = -1;

 return FUNC_0(VAR_9);
}
