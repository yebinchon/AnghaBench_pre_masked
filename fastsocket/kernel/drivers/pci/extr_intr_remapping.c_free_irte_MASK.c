
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_2_iommu {scalar_t__ irte_mask; scalar_t__ sub_handle; scalar_t__ irte_index; int * iommu; } ;


 int FUNC_0 (struct irq_2_iommu*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct irq_2_iommu* FUNC_3 (int) ;

int FUNC_4(int VAR_1)
{
 int VAR_2 = 0;
 struct irq_2_iommu *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);
 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3) {
  FUNC_2(&VAR_0, VAR_4);
  return -1;
 }

 VAR_2 = FUNC_0(VAR_3);

 VAR_3->iommu = ((void*)0);
 VAR_3->irte_index = 0;
 VAR_3->sub_handle = 0;
 VAR_3->irte_mask = 0;

 FUNC_2(&VAR_0, VAR_4);

 return VAR_2;
}
