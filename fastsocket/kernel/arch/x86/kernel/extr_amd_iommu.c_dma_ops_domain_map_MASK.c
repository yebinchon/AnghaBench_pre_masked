
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_ops_domain {unsigned long aperture_size; } ;
struct amd_iommu {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int* FUNC_1 (struct dma_ops_domain*,unsigned long) ;

__attribute__((used)) static dma_addr_t FUNC_2(struct amd_iommu *VAR_9,
         struct dma_ops_domain *VAR_10,
         unsigned long VAR_11,
         phys_addr_t VAR_12,
         int VAR_13)
{
 u64 *VAR_14, VAR_15;

 FUNC_0(VAR_11 > VAR_10->aperture_size);

 VAR_12 &= VAR_7;

 VAR_14 = FUNC_1(VAR_10, VAR_11);
 if (!VAR_14)
  return VAR_8;

 VAR_15 = VAR_12 | VAR_6 | VAR_3;

 if (VAR_13 == VAR_2)
  VAR_15 |= VAR_4;
 else if (VAR_13 == VAR_1)
  VAR_15 |= VAR_5;
 else if (VAR_13 == VAR_0)
  VAR_15 |= VAR_4 | VAR_5;

 FUNC_0(*VAR_14);

 *VAR_14 = VAR_15;

 return (dma_addr_t)VAR_11;
}
