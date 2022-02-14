
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msp71xx_gpio_chip {int data_reg; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct msp71xx_gpio_chip* FUNC_4 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct msp71xx_gpio_chip *VAR_4 = FUNC_4(VAR_1);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_0, VAR_5);

 VAR_6 = FUNC_0(VAR_4->data_reg);
 if (VAR_3)
  VAR_6 |= (1 << VAR_2);
 else
  VAR_6 &= ~(1 << VAR_2);
 FUNC_1(VAR_6, VAR_4->data_reg);

 FUNC_3(&VAR_0, VAR_5);
}
