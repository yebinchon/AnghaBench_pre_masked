
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irte {int dummy; } ;
struct irq_2_iommu {int irte_index; int sub_handle; TYPE_1__* iommu; } ;
struct TYPE_4__ {struct irte* base; } ;
struct TYPE_3__ {TYPE_2__* ir_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct irq_2_iommu* FUNC_2 (int) ;

int FUNC_3(int VAR_1, struct irte *VAR_2)
{
 int VAR_3;
 struct irq_2_iommu *VAR_4;
 unsigned long VAR_5;

 if (!VAR_2)
  return -1;

 FUNC_0(&VAR_0, VAR_5);
 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  FUNC_1(&VAR_0, VAR_5);
  return -1;
 }

 VAR_3 = VAR_4->irte_index + VAR_4->sub_handle;
 *VAR_2 = *(VAR_4->iommu->ir_table->base + VAR_3);

 FUNC_1(&VAR_0, VAR_5);
 return 0;
}
