
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int status; } ;
struct gpio_bank {unsigned int level_mask; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_bank*,unsigned int) ;
 int FUNC_1 (struct gpio_bank*,unsigned int,int) ;
 int FUNC_2 (struct gpio_bank*,int,int) ;
 int FUNC_3 (unsigned int) ;
 struct gpio_bank* FUNC_4 (unsigned int) ;
 struct irq_desc* FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_2 - VAR_0;
 struct gpio_bank *VAR_4 = FUNC_4(VAR_2);
 unsigned int VAR_5 = 1 << FUNC_3(VAR_3);
 struct irq_desc *VAR_6 = FUNC_5(VAR_2);
 u32 VAR_7 = VAR_6->status & VAR_1;

 if (VAR_7)
  FUNC_2(VAR_4, FUNC_3(VAR_3), VAR_7);



 if (VAR_4->level_mask & VAR_5) {
  FUNC_1(VAR_4, VAR_3, 0);
  FUNC_0(VAR_4, VAR_3);
 }

 FUNC_1(VAR_4, VAR_3, 1);
}
