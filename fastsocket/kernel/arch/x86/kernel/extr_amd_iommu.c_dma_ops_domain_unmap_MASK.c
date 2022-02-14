
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct dma_ops_domain {unsigned long aperture_size; struct aperture_range** aperture; } ;
struct aperture_range {unsigned long long** pte_pages; } ;
struct amd_iommu {int dummy; } ;


 size_t FUNC_0 (unsigned long) ;
 size_t FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amd_iommu *VAR_0,
     struct dma_ops_domain *VAR_1,
     unsigned long VAR_2)
{
 struct aperture_range *VAR_3;
 u64 *VAR_4;

 if (VAR_2 >= VAR_1->aperture_size)
  return;

 VAR_3 = VAR_1->aperture[FUNC_1(VAR_2)];
 if (!VAR_3)
  return;

 VAR_4 = VAR_3->pte_pages[FUNC_0(VAR_2)];
 if (!VAR_4)
  return;

 VAR_4 += FUNC_2(0, VAR_2);

 FUNC_3(!*VAR_4);

 *VAR_4 = 0ULL;
}
