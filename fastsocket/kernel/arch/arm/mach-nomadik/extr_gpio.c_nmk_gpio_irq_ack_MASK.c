
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_gpio_chip {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct nmk_gpio_chip* FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_1)
{
 int VAR_2;
 struct nmk_gpio_chip *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return;
 FUNC_3(FUNC_2(VAR_2), VAR_3->addr + VAR_0);
}
