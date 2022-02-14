
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct nmk_gpio_chip {int parent_irq; TYPE_1__ chip; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,struct nmk_gpio_chip*) ;
 int FUNC_4 (int ,struct nmk_gpio_chip*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct nmk_gpio_chip *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5->chip.base);
 for (VAR_7 = VAR_6; VAR_7 < VAR_6 + VAR_1; VAR_7++) {
  FUNC_2(VAR_7, &VAR_3);
  FUNC_6(VAR_7, VAR_2);
  FUNC_5(VAR_7, VAR_0);
  FUNC_3(VAR_7, VAR_5);
 }
 FUNC_1(VAR_5->parent_irq, VAR_4);
 FUNC_4(VAR_5->parent_irq, VAR_5);
 return 0;
}
