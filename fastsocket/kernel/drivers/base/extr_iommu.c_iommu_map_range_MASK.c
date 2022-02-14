
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int (* map ) (struct iommu_domain*,unsigned long,int ,size_t,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iommu_domain*,unsigned long,int ,size_t,int) ;

int FUNC_1(struct iommu_domain *VAR_1, unsigned long VAR_2,
      phys_addr_t VAR_3, size_t VAR_4, int VAR_5)
{
 return VAR_0->map(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
