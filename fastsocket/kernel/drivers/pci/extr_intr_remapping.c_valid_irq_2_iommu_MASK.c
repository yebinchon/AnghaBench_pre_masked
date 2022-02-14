
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_2_iommu {int iommu; } ;


 struct irq_2_iommu* FUNC_0 (unsigned int) ;

__attribute__((used)) static struct irq_2_iommu *FUNC_1(unsigned int VAR_0)
{
 struct irq_2_iommu *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 if (!VAR_1->iommu)
  return ((void*)0);

 return VAR_1;
}
