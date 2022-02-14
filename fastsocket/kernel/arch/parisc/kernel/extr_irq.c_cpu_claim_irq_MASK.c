
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_chip {int (* enable ) (unsigned int) ;} ;
struct TYPE_2__ {void* chip_data; struct irq_chip* chip; scalar_t__ action; } ;


 int VAR_0 ;
 struct irq_chip VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned int) ;

int FUNC_1(unsigned int VAR_3, struct irq_chip *VAR_4, void *VAR_5)
{
 if (VAR_2[VAR_3].action)
  return -VAR_0;
 if (VAR_2[VAR_3].chip != &VAR_1)
  return -VAR_0;

 if (VAR_4) {
  VAR_2[VAR_3].chip = VAR_4;
  VAR_2[VAR_3].chip_data = VAR_5;
  VAR_1.enable(VAR_3);
 }
 return 0;
}
