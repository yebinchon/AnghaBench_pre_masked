
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct irq_2_iommu {scalar_t__ sub_handle; scalar_t__ irte_index; int * iommu; } ;
struct intel_iommu {int dummy; } ;
struct TYPE_2__ {scalar_t__ irte_mask; } ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct irq_2_iommu* FUNC_3 (int) ;

int FUNC_4(int VAR_1, struct intel_iommu *VAR_2, u16 VAR_3)
{
 struct irq_2_iommu *VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_0, VAR_5);
 VAR_4 = FUNC_3(VAR_1);
 if (!VAR_4) {
  FUNC_2(&VAR_0, VAR_5);
  return -1;
 }

 VAR_4->iommu = ((void*)0);
 VAR_4->irte_index = 0;
 VAR_4->sub_handle = 0;
 FUNC_0(VAR_1)->irte_mask = 0;

 FUNC_2(&VAR_0, VAR_5);

 return 0;
}
