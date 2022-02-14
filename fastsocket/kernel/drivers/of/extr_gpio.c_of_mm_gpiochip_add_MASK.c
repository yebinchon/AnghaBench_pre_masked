
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int base; int label; } ;
struct of_gpio_chip {scalar_t__ xlate; struct gpio_chip gc; } ;
struct of_mm_gpio_chip {int regs; int (* save_regs ) (struct of_mm_gpio_chip*) ;struct of_gpio_chip of_gc; } ;
struct device_node {int full_name; struct of_gpio_chip* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct of_mm_gpio_chip*) ;

int FUNC_9(struct device_node *VAR_3,
         struct of_mm_gpio_chip *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct of_gpio_chip *VAR_6 = &VAR_4->of_gc;
 struct gpio_chip *VAR_7 = &VAR_6->gc;

 VAR_7->label = FUNC_3(VAR_3->full_name, VAR_1);
 if (!VAR_7->label)
  goto err0;

 VAR_4->regs = FUNC_4(VAR_3, 0);
 if (!VAR_4->regs)
  goto err1;

 VAR_7->base = -1;

 if (!VAR_6->xlate)
  VAR_6->xlate = VAR_2;

 if (VAR_4->save_regs)
  VAR_4->save_regs(VAR_4);

 VAR_3->data = VAR_6;

 VAR_5 = FUNC_0(VAR_7);
 if (VAR_5)
  goto err2;


 FUNC_5(VAR_3);

 FUNC_6("%s: registered as generic GPIO chip, base is %d\n",
   VAR_3->full_name, VAR_7->base);
 return 0;
err2:
 VAR_3->data = ((void*)0);
 FUNC_1(VAR_4->regs);
err1:
 FUNC_2(VAR_7->label);
err0:
 FUNC_7("%s: GPIO chip registration failed with status %d\n",
        VAR_3->full_name, VAR_5);
 return VAR_5;
}
