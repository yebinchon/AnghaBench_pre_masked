
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_host {scalar_t__ revmap_type; } ;
typedef unsigned int irq_hw_number_t ;
struct TYPE_2__ {unsigned int hwirq; struct irq_host* host; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct irq_host* VAR_3 ;
 TYPE_1__* VAR_4 ;
 unsigned int VAR_5 ;

unsigned int FUNC_0(struct irq_host *VAR_6,
         irq_hw_number_t VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9 = VAR_7 % VAR_5;


 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_3;
 if (VAR_6 == ((void*)0))
  return VAR_1;


 if (VAR_6->revmap_type == VAR_0)
  return VAR_7;


 if (VAR_9 < VAR_2)
  VAR_9 = VAR_2;
 VAR_8 = VAR_9;
 do {
  if (VAR_4[VAR_8].host == VAR_6 &&
      VAR_4[VAR_8].hwirq == VAR_7)
   return VAR_8;
  VAR_8++;
  if (VAR_8 >= VAR_5)
   VAR_8 = VAR_2;
 } while(VAR_8 != VAR_9);
 return VAR_1;
}
