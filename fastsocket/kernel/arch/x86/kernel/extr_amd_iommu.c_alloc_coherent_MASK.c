
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct protection_domain {int lock; int priv; } ;
struct device {scalar_t__* dma_mask; scalar_t__ coherent_dma_mask; } ;
struct amd_iommu {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct device*,struct amd_iommu*,int ,scalar_t__,size_t,int ,int,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct device*) ;
 int VAR_6 ;
 int FUNC_4 (struct protection_domain*) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (struct device*,struct amd_iommu**,struct protection_domain**,int *) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (struct amd_iommu*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (void*) ;

__attribute__((used)) static void *FUNC_12(struct device *VAR_7, size_t VAR_8,
       dma_addr_t *VAR_9, gfp_t VAR_10)
{
 unsigned long VAR_11;
 void *VAR_12;
 struct amd_iommu *VAR_13;
 struct protection_domain *VAR_14;
 u16 VAR_15;
 phys_addr_t VAR_16;
 u64 VAR_17 = VAR_7->coherent_dma_mask;

 FUNC_0(VAR_6);

 if (!FUNC_3(VAR_7))
  return ((void*)0);

 if (!FUNC_6(VAR_7, &VAR_13, &VAR_14, &VAR_15))
  VAR_10 &= ~(VAR_1 | VAR_3 | VAR_2);

 VAR_10 |= VAR_4;
 VAR_12 = (void *)FUNC_1(VAR_10, FUNC_7(VAR_8));
 if (!VAR_12)
  return ((void*)0);

 VAR_16 = FUNC_11(VAR_12);

 if (!VAR_13 || !VAR_14) {
  *VAR_9 = (dma_addr_t)VAR_16;
  return VAR_12;
 }

 if (!FUNC_4(VAR_14))
  goto out_free;

 if (!VAR_17)
  VAR_17 = *VAR_7->dma_mask;

 FUNC_9(&VAR_14->lock, VAR_11);

 *VAR_9 = FUNC_2(VAR_7, VAR_13, VAR_14->priv, VAR_16,
     VAR_8, VAR_0, 1, VAR_17);

 if (*VAR_9 == VAR_5) {
  FUNC_10(&VAR_14->lock, VAR_11);
  goto out_free;
 }

 FUNC_8(VAR_13);

 FUNC_10(&VAR_14->lock, VAR_11);

 return VAR_12;

out_free:

 FUNC_5((unsigned long)VAR_12, FUNC_7(VAR_8));

 return ((void*)0);
}
