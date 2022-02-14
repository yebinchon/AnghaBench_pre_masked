
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iommu {int dummy; } ;
struct TYPE_2__ {int (* fault_isr ) (struct iommu*,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iommu*,int *) ;

__attribute__((used)) static u32 FUNC_1(struct iommu *VAR_1, u32 *VAR_2)
{
 return VAR_0->fault_isr(VAR_1, VAR_2);
}
