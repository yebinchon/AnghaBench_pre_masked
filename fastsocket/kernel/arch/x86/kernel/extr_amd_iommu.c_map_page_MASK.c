
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct protection_domain {int lock; int priv; } ;
struct page {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int * dma_mask; } ;
struct amd_iommu {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*,struct amd_iommu*,int ,scalar_t__,size_t,int,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (struct protection_domain*) ;
 int FUNC_4 (struct device*,struct amd_iommu**,struct protection_domain**,int *) ;
 int FUNC_5 (struct amd_iommu*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static dma_addr_t FUNC_9(struct device *VAR_2, struct page *VAR_3,
      unsigned long VAR_4, size_t VAR_5,
      enum dma_data_direction VAR_6,
      struct dma_attrs *VAR_7)
{
 unsigned long VAR_8;
 struct amd_iommu *VAR_9;
 struct protection_domain *VAR_10;
 u16 VAR_11;
 dma_addr_t VAR_12;
 u64 VAR_13;
 phys_addr_t VAR_14 = FUNC_6(VAR_3) + VAR_4;

 FUNC_0(VAR_1);

 if (!FUNC_2(VAR_2))
  return VAR_0;

 VAR_13 = *VAR_2->dma_mask;

 FUNC_4(VAR_2, &VAR_9, &VAR_10, &VAR_11);

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))

  return (dma_addr_t)VAR_14;

 if (!FUNC_3(VAR_10))
  return VAR_0;

 FUNC_7(&VAR_10->lock, VAR_8);
 VAR_12 = FUNC_1(VAR_2, VAR_9, VAR_10->priv, VAR_14, VAR_5, VAR_6, 0,
       VAR_13);
 if (VAR_12 == VAR_0)
  goto out;

 FUNC_5(VAR_9);

out:
 FUNC_8(&VAR_10->lock, VAR_8);

 return VAR_12;
}
