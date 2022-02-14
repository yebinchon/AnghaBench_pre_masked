
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {struct dmar_domain* priv; } ;
struct dmar_domain {unsigned long max_addr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct dmar_domain*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct iommu_domain *VAR_1,
        unsigned long VAR_2, size_t VAR_3)
{
 struct dmar_domain *VAR_4 = VAR_1->priv;

 if (!VAR_3)
  return;

 FUNC_0(VAR_4, VAR_2 >> VAR_0,
       (VAR_2 + VAR_3 - 1) >> VAR_0);

 if (VAR_4->max_addr == VAR_2 + VAR_3)
  VAR_4->max_addr = VAR_2;
}
