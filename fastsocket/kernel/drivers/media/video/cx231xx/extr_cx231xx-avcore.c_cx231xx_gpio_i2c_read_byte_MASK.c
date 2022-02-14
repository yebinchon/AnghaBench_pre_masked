
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int tuner_scl_gpio; int tuner_sda_gpio; } ;
struct cx231xx {int gpio_val; int gpio_dir; TYPE_1__ board; } ;


 int FUNC_0 (struct cx231xx*,int ,int*) ;
 int FUNC_1 (struct cx231xx*,int ,int*) ;

int FUNC_2(struct cx231xx *VAR_0, u8 *VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3 = 0;
 u32 VAR_4 = 0;
 u8 VAR_5;


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {


  VAR_0->gpio_val &= ~(1 << VAR_0->board.tuner_scl_gpio);
  VAR_3 = FUNC_1(VAR_0, VAR_0->gpio_dir,
           (u8 *)&VAR_0->gpio_val);


  VAR_0->gpio_val |= 1 << VAR_0->board.tuner_scl_gpio;
  VAR_3 = FUNC_1(VAR_0, VAR_0->gpio_dir,
           (u8 *)&VAR_0->gpio_val);


  VAR_4 = VAR_0->gpio_val;
  VAR_3 = FUNC_0(VAR_0, VAR_0->gpio_dir,
           (u8 *)&VAR_0->gpio_val);
  if ((VAR_0->gpio_val & (1 << VAR_0->board.tuner_sda_gpio)) != 0)
   VAR_2 |= (1 << (8 - VAR_5 - 1));

  VAR_0->gpio_val = VAR_4;
 }




 VAR_0->gpio_val &= ~(1 << VAR_0->board.tuner_scl_gpio);
 VAR_3 = FUNC_1(VAR_0, VAR_0->gpio_dir, (u8 *)&VAR_0->gpio_val);


 *VAR_1 = VAR_2 & 0xff;

 return VAR_3;
}
