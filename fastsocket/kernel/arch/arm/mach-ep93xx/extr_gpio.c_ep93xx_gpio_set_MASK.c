
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct ep93xx_gpio_chip {int data_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct ep93xx_gpio_chip* FUNC_4 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct ep93xx_gpio_chip *VAR_3 = FUNC_4(VAR_0);
 unsigned long VAR_4;
 u8 VAR_5;

 FUNC_3(VAR_4);
 VAR_5 = FUNC_0(VAR_3->data_reg);
 if (VAR_2)
  VAR_5 |= (1 << VAR_1);
 else
  VAR_5 &= ~(1 << VAR_1);
 FUNC_1(VAR_5, VAR_3->data_reg);
 FUNC_2(VAR_4);
}
