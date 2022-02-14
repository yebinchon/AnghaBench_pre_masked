
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int can_sleep; int ngpio; int names; int owner; int * dev; int label; int base; int set; int get; int direction_output; int direction_input; } ;
struct pca953x_chip {int names; TYPE_1__* client; int gpio_start; struct gpio_chip gpio_chip; } ;
struct TYPE_2__ {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct pca953x_chip *VAR_5, int VAR_6)
{
 struct gpio_chip *VAR_7;

 VAR_7 = &VAR_5->gpio_chip;

 VAR_7->direction_input = VAR_1;
 VAR_7->direction_output = VAR_2;
 VAR_7->get = VAR_3;
 VAR_7->set = VAR_4;
 VAR_7->can_sleep = 1;

 VAR_7->base = VAR_5->gpio_start;
 VAR_7->ngpio = VAR_6;
 VAR_7->label = VAR_5->client->name;
 VAR_7->dev = &VAR_5->client->dev;
 VAR_7->owner = VAR_0;
 VAR_7->names = VAR_5->names;
}
