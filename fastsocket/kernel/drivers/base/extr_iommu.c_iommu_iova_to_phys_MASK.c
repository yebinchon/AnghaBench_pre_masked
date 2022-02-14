
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* iova_to_phys ) (struct iommu_domain*,unsigned long) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iommu_domain*,unsigned long) ;

phys_addr_t FUNC_1(struct iommu_domain *VAR_1,
          unsigned long VAR_2)
{
 return VAR_0->iova_to_phys(VAR_1, VAR_2);
}
