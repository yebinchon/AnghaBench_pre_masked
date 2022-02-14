
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007 {int (* clear_penirq ) () ;int work; int irq; int (* get_pendown_state ) () ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct tsc2007 *VAR_4 = VAR_3;

 if (!VAR_4->get_pendown_state || FUNC_1(VAR_4->get_pendown_state())) {
  FUNC_0(VAR_4->irq);
  FUNC_3(&VAR_4->work,
          FUNC_2(VAR_1));
 }

 if (VAR_4->clear_penirq)
  VAR_4->clear_penirq();

 return VAR_0;
}
