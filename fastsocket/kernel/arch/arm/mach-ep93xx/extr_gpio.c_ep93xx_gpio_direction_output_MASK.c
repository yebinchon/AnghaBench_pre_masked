
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {unsigned int base; } ;
struct ep93xx_gpio_chip {int data_dir_reg; int data_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct ep93xx_gpio_chip* FUNC_6 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_1,
     unsigned VAR_2, int VAR_3)
{
 struct ep93xx_gpio_chip *VAR_4 = FUNC_6(VAR_1);
 unsigned long VAR_5;
 int VAR_6;
 u8 VAR_7;

 FUNC_5(VAR_5);


 VAR_7 = FUNC_0(VAR_4->data_reg);
 if (VAR_3)
  VAR_7 |= (1 << VAR_2);
 else
  VAR_7 &= ~(1 << VAR_2);
 FUNC_1(VAR_7, VAR_4->data_reg);


 VAR_6 = VAR_1->base + VAR_2;
 if (VAR_6 <= VAR_0) {

  FUNC_2(VAR_6);
  FUNC_3(VAR_6 >> 3);
 }

 VAR_7 = FUNC_0(VAR_4->data_dir_reg);
 VAR_7 |= (1 << VAR_2);
 FUNC_1(VAR_7, VAR_4->data_dir_reg);

 FUNC_4(VAR_5);

 return 0;
}
