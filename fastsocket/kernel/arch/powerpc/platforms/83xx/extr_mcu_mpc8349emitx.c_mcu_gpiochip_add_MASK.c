
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int can_sleep; int base; int direction_output; int set; int ngpio; int label; int owner; } ;
struct of_gpio_chip {int gpio_cells; int xlate; struct gpio_chip gc; } ;
struct mcu {struct device_node* np; struct of_gpio_chip of_gc; } ;
struct device_node {struct of_gpio_chip* data; int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpio_chip*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(struct mcu *VAR_6)
{
 struct device_node *VAR_7;
 struct of_gpio_chip *VAR_8 = &VAR_6->of_gc;
 struct gpio_chip *VAR_9 = &VAR_8->gc;
 int VAR_10;

 VAR_7 = FUNC_1(((void*)0), ((void*)0), "fsl,mcu-mpc8349emitx");
 if (!VAR_7)
  return -VAR_0;

 VAR_9->owner = VAR_2;
 VAR_9->label = VAR_7->full_name;
 VAR_9->can_sleep = 1;
 VAR_9->ngpio = VAR_1;
 VAR_9->base = -1;
 VAR_9->set = VAR_4;
 VAR_9->direction_output = VAR_3;
 VAR_8->gpio_cells = 2;
 VAR_8->xlate = VAR_5;

 VAR_7->data = VAR_8;
 VAR_6->np = VAR_7;





 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  FUNC_2(VAR_7);
 return VAR_10;
}
