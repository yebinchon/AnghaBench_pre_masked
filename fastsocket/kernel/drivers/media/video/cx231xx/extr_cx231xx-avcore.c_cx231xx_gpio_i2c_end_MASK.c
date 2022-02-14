
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tuner_scl_gpio; int tuner_sda_gpio; } ;
struct cx231xx {int gpio_dir; int gpio_val; TYPE_1__ board; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*,int,int *) ;

int FUNC_1(struct cx231xx *VAR_1)
{
 int VAR_2 = 0;


 VAR_1->gpio_dir |= 1 << VAR_1->board.tuner_scl_gpio;
 VAR_1->gpio_dir |= 1 << VAR_1->board.tuner_sda_gpio;

 VAR_1->gpio_val &= ~(1 << VAR_1->board.tuner_scl_gpio);
 VAR_1->gpio_val &= ~(1 << VAR_1->board.tuner_sda_gpio);

 VAR_2 = FUNC_0(VAR_1, VAR_1->gpio_dir, (u8 *)&VAR_1->gpio_val);
 if (VAR_2 < 0)
  return -VAR_0;


 VAR_1->gpio_val |= 1 << VAR_1->board.tuner_scl_gpio;
 VAR_1->gpio_val &= ~(1 << VAR_1->board.tuner_sda_gpio);

 VAR_2 = FUNC_0(VAR_1, VAR_1->gpio_dir, (u8 *)&VAR_1->gpio_val);
 if (VAR_2 < 0)
  return -VAR_0;



 VAR_1->gpio_dir &= ~(1 << VAR_1->board.tuner_scl_gpio);
 VAR_1->gpio_dir &= ~(1 << VAR_1->board.tuner_sda_gpio);

 VAR_2 =
     FUNC_0(VAR_1, VAR_1->gpio_dir, (u8 *)&VAR_1->gpio_val);
 if (VAR_2 < 0)
  return -VAR_0;

 return VAR_2;
}
