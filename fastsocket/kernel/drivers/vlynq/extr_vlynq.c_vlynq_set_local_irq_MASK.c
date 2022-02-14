
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlynq_device {int irq_start; int irq_end; int remote_irq; int local_irq; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct vlynq_device *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->irq_start + VAR_3;
 if (VAR_2->enabled)
  return -VAR_0;

 if ((VAR_4 < VAR_2->irq_start) || (VAR_4 > VAR_2->irq_end))
  return -VAR_1;

 if (VAR_3 == VAR_2->remote_irq)
  return -VAR_1;

 VAR_2->local_irq = VAR_3;

 return 0;
}
