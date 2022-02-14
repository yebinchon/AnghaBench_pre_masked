
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct TYPE_2__ {int (* domain_init ) (struct iommu_domain*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct iommu_domain*) ;
 struct iommu_domain* FUNC_1 (int,int ) ;
 int FUNC_2 (struct iommu_domain*) ;

struct iommu_domain *FUNC_3(void)
{
 struct iommu_domain *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = VAR_1->domain_init(VAR_2);
 if (VAR_3)
  goto out_free;

 return VAR_2;

out_free:
 FUNC_0(VAR_2);

 return ((void*)0);
}
