
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tree; } ;
struct irq_host {scalar_t__ revmap_type; TYPE_1__ revmap_data; } ;
typedef int irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;

void FUNC_5(struct irq_host *VAR_5, unsigned int VAR_6,
        irq_hw_number_t VAR_7)
{

 FUNC_0(VAR_5->revmap_type != VAR_0);






 FUNC_4();
 if (VAR_3 < 1)
  return;

 if (VAR_6 != VAR_1) {
  FUNC_1(&VAR_4);
  FUNC_3(&VAR_5->revmap_data.tree, VAR_7,
      &VAR_2[VAR_6]);
  FUNC_2(&VAR_4);
 }
}
