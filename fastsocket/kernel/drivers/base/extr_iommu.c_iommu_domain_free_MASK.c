
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct TYPE_2__ {int (* domain_destroy ) (struct iommu_domain*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iommu_domain*) ;
 int FUNC_1 (struct iommu_domain*) ;

void FUNC_2(struct iommu_domain *VAR_1)
{
 VAR_0->domain_destroy(VAR_1);
 FUNC_0(VAR_1);
}
