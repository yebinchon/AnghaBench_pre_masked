
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {scalar_t__ base; scalar_t__ ngpio; int owner; int label; int set; int direction_output; int get; int direction_input; int free; int request; } ;
struct pinmux_info {scalar_t__ first_gpio; scalar_t__ last_gpio; int name; struct gpio_chip chip; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct pinmux_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_4(struct pinmux_info *VAR_7)
{
 struct gpio_chip *VAR_8 = &VAR_7->chip;

 FUNC_2("sh pinmux: %s handling gpio %d -> %d\n",
  VAR_7->name, VAR_7->first_gpio, VAR_7->last_gpio);

 FUNC_3(VAR_7);

 VAR_8->request = VAR_5;
 VAR_8->free = VAR_3;
 VAR_8->direction_input = VAR_1;
 VAR_8->get = VAR_4;
 VAR_8->direction_output = VAR_2;
 VAR_8->set = VAR_6;

 FUNC_0(VAR_7->first_gpio != 0);

 VAR_8->label = VAR_7->name;
 VAR_8->owner = VAR_0;
 VAR_8->base = VAR_7->first_gpio;
 VAR_8->ngpio = (VAR_7->last_gpio - VAR_7->first_gpio) + 1;

 return FUNC_1(VAR_8);
}
