
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_2_iommu {int irte_index; int sub_handle; int irte_mask; struct intel_iommu* iommu; } ;
struct intel_iommu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_iommu*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct irq_2_iommu* FUNC_3 (int) ;

int FUNC_4(int VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct intel_iommu *VAR_4;
 struct irq_2_iommu *VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_0, VAR_6);
 VAR_5 = FUNC_3(VAR_1);
 if (!VAR_5) {
  FUNC_2(&VAR_0, VAR_6);
  return -1;
 }

 VAR_4 = VAR_5->iommu;

 VAR_3 = VAR_5->irte_index + VAR_5->sub_handle;

 VAR_2 = FUNC_0(VAR_4, VAR_3, VAR_5->irte_mask);
 FUNC_2(&VAR_0, VAR_6);

 return VAR_2;
}
