
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u8_gpio_chip {int data; } ;
struct of_mm_gpio_chip {int regs; } ;


 int FUNC_0 (int ) ;
 struct u8_gpio_chip* FUNC_1 (struct of_mm_gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct of_mm_gpio_chip *VAR_0)
{
 struct u8_gpio_chip *VAR_1 = FUNC_1(VAR_0);

 VAR_1->data = FUNC_0(VAR_0->regs);
}
