
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* detach_dev ) (struct iommu_domain*,struct device*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iommu_domain*,struct device*) ;

void FUNC_1(struct iommu_domain *VAR_1, struct device *VAR_2)
{
 VAR_0->detach_dev(VAR_1, VAR_2);
}
