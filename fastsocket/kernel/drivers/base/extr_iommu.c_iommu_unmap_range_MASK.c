
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct TYPE_2__ {int (* unmap ) (struct iommu_domain*,unsigned long,size_t) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iommu_domain*,unsigned long,size_t) ;

void FUNC_1(struct iommu_domain *VAR_1, unsigned long VAR_2,
        size_t VAR_3)
{
 VAR_0->unmap(VAR_1, VAR_2, VAR_3);
}
