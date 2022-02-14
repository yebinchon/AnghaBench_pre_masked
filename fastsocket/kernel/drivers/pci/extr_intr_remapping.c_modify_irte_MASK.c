
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irte {int high; int low; } ;
struct irq_2_iommu {int irte_index; int sub_handle; struct intel_iommu* iommu; } ;
struct intel_iommu {TYPE_1__* ir_table; } ;
struct TYPE_2__ {struct irte* base; } ;


 int FUNC_0 (struct intel_iommu*,struct irte*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_iommu*,int,int ) ;
 int FUNC_2 (unsigned long*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct irq_2_iommu* FUNC_5 (int) ;

int FUNC_6(int VAR_1, struct irte *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct irte *VAR_5;
 struct intel_iommu *VAR_6;
 struct irq_2_iommu *VAR_7;
 unsigned long VAR_8;

 FUNC_3(&VAR_0, VAR_8);
 VAR_7 = FUNC_5(VAR_1);
 if (!VAR_7) {
  FUNC_4(&VAR_0, VAR_8);
  return -1;
 }

 VAR_6 = VAR_7->iommu;

 VAR_4 = VAR_7->irte_index + VAR_7->sub_handle;
 VAR_5 = &VAR_6->ir_table->base[VAR_4];

 FUNC_2((unsigned long *)&VAR_5->low, VAR_2->low);
 FUNC_2((unsigned long *)&VAR_5->high, VAR_2->high);
 FUNC_0(VAR_6, VAR_5, sizeof(*VAR_5));

 VAR_3 = FUNC_1(VAR_6, VAR_4, 0);
 FUNC_4(&VAR_0, VAR_8);

 return VAR_3;
}
