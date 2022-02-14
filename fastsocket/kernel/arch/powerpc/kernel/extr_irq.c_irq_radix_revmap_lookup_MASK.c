
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_map_entry {int dummy; } ;
struct TYPE_2__ {int tree; } ;
struct irq_host {scalar_t__ revmap_type; TYPE_1__ revmap_data; } ;
typedef int irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct irq_host*,int ) ;
 struct irq_map_entry* VAR_1 ;
 struct irq_map_entry* FUNC_2 (int *,int ) ;
 int VAR_2 ;

unsigned int FUNC_3(struct irq_host *VAR_3,
         irq_hw_number_t VAR_4)
{
 struct irq_map_entry *VAR_5;
 unsigned int VAR_6;

 FUNC_0(VAR_3->revmap_type != VAR_0);





 if (VAR_2 < 2)
  return FUNC_1(VAR_3, VAR_4);






 VAR_5 = FUNC_2(&VAR_3->revmap_data.tree, VAR_4);






 if (VAR_5)
  VAR_6 = VAR_5 - VAR_1;
 else
  VAR_6 = FUNC_1(VAR_3, VAR_4);

 return VAR_6;
}
