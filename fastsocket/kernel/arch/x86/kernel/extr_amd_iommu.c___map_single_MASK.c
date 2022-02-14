
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int id; } ;
struct dma_ops_domain {int need_flush; TYPE_1__ domain; int aperture_size; int next_address; } ;
struct device {int dummy; } ;
struct amd_iommu {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct amd_iommu*,struct dma_ops_domain*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct device*,struct dma_ops_domain*,unsigned int,unsigned long,int ) ;
 scalar_t__ FUNC_4 (struct amd_iommu*,struct dma_ops_domain*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct amd_iommu*,struct dma_ops_domain*,scalar_t__) ;
 int FUNC_6 (struct dma_ops_domain*,scalar_t__,unsigned int) ;
 unsigned long FUNC_7 (size_t) ;
 int FUNC_8 (struct amd_iommu*,int ,scalar_t__,size_t) ;
 int FUNC_9 (struct amd_iommu*,int ) ;
 int FUNC_10 (struct amd_iommu*) ;
 unsigned int FUNC_11 (scalar_t__,size_t,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static dma_addr_t FUNC_13(struct device *VAR_8,
          struct amd_iommu *VAR_9,
          struct dma_ops_domain *VAR_10,
          phys_addr_t VAR_11,
          size_t VAR_12,
          int VAR_13,
          bool VAR_14,
          u64 VAR_15)
{
 dma_addr_t VAR_16 = VAR_11 & ~VAR_1;
 dma_addr_t VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20;
 unsigned long VAR_21 = 0;
 int VAR_22;

 VAR_20 = FUNC_11(VAR_11, VAR_12, VAR_2);
 VAR_11 &= VAR_1;

 FUNC_1(VAR_7);

 if (VAR_20 > 1)
  FUNC_1(VAR_6);

 if (VAR_14)
  VAR_21 = (1UL << FUNC_7(VAR_12)) - 1;

retry:
 VAR_17 = FUNC_3(VAR_8, VAR_10, VAR_20, VAR_21,
       VAR_15);
 if (FUNC_12(VAR_17 == VAR_5)) {





  VAR_10->next_address = VAR_10->aperture_size;

  if (FUNC_2(VAR_9, VAR_10, 0, VAR_0))
   goto out;





  goto retry;
 }

 VAR_18 = VAR_17;
 for (VAR_22 = 0; VAR_22 < VAR_20; ++VAR_22) {
  VAR_19 = FUNC_4(VAR_9, VAR_10, VAR_18, VAR_11, VAR_13);
  if (VAR_19 == VAR_5)
   goto out_unmap;

  VAR_11 += VAR_2;
  VAR_18 += VAR_2;
 }
 VAR_17 += VAR_16;

 FUNC_0(VAR_3, VAR_12);

 if (FUNC_12(VAR_10->need_flush && !VAR_4)) {
  FUNC_9(VAR_9, VAR_10->domain.id);
  VAR_10->need_flush = 0;
 } else if (FUNC_12(FUNC_10(VAR_9)))
  FUNC_8(VAR_9, VAR_10->domain.id, VAR_17, VAR_12);

out:
 return VAR_17;

out_unmap:

 for (--VAR_22; VAR_22 >= 0; --VAR_22) {
  VAR_18 -= VAR_2;
  FUNC_5(VAR_9, VAR_10, VAR_18);
 }

 FUNC_6(VAR_10, VAR_17, VAR_20);

 return VAR_5;
}
