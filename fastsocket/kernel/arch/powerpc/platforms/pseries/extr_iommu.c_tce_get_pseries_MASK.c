
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct iommu_table {scalar_t__ it_base; } ;



__attribute__((used)) static unsigned long FUNC_0(struct iommu_table *VAR_0, long VAR_1)
{
 u64 *VAR_2;

 VAR_2 = ((u64 *)VAR_0->it_base) + VAR_1;

 return *VAR_2;
}
