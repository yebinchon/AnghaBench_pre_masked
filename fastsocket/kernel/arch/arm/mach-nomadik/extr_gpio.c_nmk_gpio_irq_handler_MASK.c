
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int base; } ;
struct nmk_gpio_chip {scalar_t__ addr; TYPE_1__ chip; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int (* ack ) (unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 struct irq_chip* FUNC_3 (unsigned int) ;
 struct nmk_gpio_chip* FUNC_4 (unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_1, struct irq_desc *VAR_2)
{
 struct nmk_gpio_chip *VAR_3;
 struct irq_chip *VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;
 unsigned int VAR_7;

 VAR_3 = FUNC_4(VAR_1);
 VAR_7 = FUNC_0(VAR_3->chip.base);
 while ( (VAR_6 = FUNC_5(VAR_3->addr + VAR_0)) ) {
  VAR_5 = VAR_7 + FUNC_1(VAR_6);
  FUNC_2(VAR_5);
 }
 if (0) {
  VAR_4 = FUNC_3(VAR_1);
  VAR_4->ack(VAR_1);
 }
}
