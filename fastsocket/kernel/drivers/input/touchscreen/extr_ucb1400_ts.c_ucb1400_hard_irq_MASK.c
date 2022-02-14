
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int irq; int irq_pending; int ts_wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct ucb1400_ts *VAR_4 = VAR_3;

 if (VAR_2 == VAR_4->irq) {
  FUNC_0(VAR_4->irq);
  VAR_4->irq_pending = 1;
  FUNC_1(&VAR_4->ts_wait);
  return VAR_0;
 }
 return VAR_1;
}
