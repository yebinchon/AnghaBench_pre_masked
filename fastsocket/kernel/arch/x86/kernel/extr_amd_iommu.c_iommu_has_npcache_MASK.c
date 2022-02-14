
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_iommu {unsigned long cap; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(struct amd_iommu *VAR_1)
{
 return VAR_1->cap & (1UL << VAR_0);
}
