
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irte {int high; int low; } ;
struct irq_2_iommu {int sub_handle; int irte_index; int irte_mask; struct intel_iommu* iommu; } ;
struct intel_iommu {TYPE_1__* ir_table; } ;
struct TYPE_2__ {struct irte* base; } ;


 int FUNC_0 (struct intel_iommu*,int,int) ;
 int FUNC_1 (unsigned long*,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_2_iommu *VAR_0)
{
 struct irte *VAR_1, *VAR_2, *VAR_3;
 struct intel_iommu *VAR_4;
 int VAR_5;

 if (VAR_0->sub_handle)
  return 0;

 VAR_4 = VAR_0->iommu;
 VAR_5 = VAR_0->irte_index + VAR_0->sub_handle;

 VAR_1 = VAR_4->ir_table->base + VAR_5;
 VAR_3 = VAR_1 + (1 << VAR_0->irte_mask);

 for (VAR_2 = VAR_1; VAR_2 < VAR_3; VAR_2++) {
  FUNC_1((unsigned long *)&VAR_2->low, 0);
  FUNC_1((unsigned long *)&VAR_2->high, 0);
 }

 return FUNC_0(VAR_4, VAR_5, VAR_0->irte_mask);
}
