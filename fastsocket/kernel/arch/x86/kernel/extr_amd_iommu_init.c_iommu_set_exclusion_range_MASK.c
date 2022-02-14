
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amd_iommu {int exclusion_start; int exclusion_length; scalar_t__ mmio_base; } ;
typedef int entry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int*,int) ;

__attribute__((used)) static void FUNC_1(struct amd_iommu *VAR_4)
{
 u64 VAR_5 = VAR_4->exclusion_start & VAR_3;
 u64 VAR_6 = (VAR_5 + VAR_4->exclusion_length) & VAR_3;
 u64 VAR_7;

 if (!VAR_4->exclusion_start)
  return;

 VAR_7 = VAR_5 | VAR_1;
 FUNC_0(VAR_4->mmio_base + VAR_0,
   &VAR_7, sizeof(VAR_7));

 VAR_7 = VAR_6;
 FUNC_0(VAR_4->mmio_base + VAR_2,
   &VAR_7, sizeof(VAR_7));
}
