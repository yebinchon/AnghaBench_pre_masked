
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu {unsigned long iommu_flushinv; unsigned long iommu_tags; int write_complete_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct iommu *VAR_0)
{
 if (VAR_0->iommu_flushinv) {
  FUNC_1(VAR_0->iommu_flushinv, ~(u64)0);
 } else {
  unsigned long VAR_1;
  int VAR_2;

  VAR_1 = VAR_0->iommu_tags;
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
   FUNC_1(VAR_1, 0);
   VAR_1 += 8;
  }


  (void) FUNC_0(VAR_0->write_complete_reg);
 }
}
