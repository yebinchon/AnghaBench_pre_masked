
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct dma_ops_domain {size_t aperture_size; int need_flush; TYPE_1__ domain; } ;
struct amd_iommu {int dummy; } ;
typedef size_t dma_addr_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct amd_iommu*,struct dma_ops_domain*,size_t) ;
 int FUNC_2 (struct dma_ops_domain*,size_t,unsigned int) ;
 int FUNC_3 (struct amd_iommu*,int ,size_t,size_t) ;
 unsigned int FUNC_4 (size_t,size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct amd_iommu *VAR_5,
      struct dma_ops_domain *VAR_6,
      dma_addr_t VAR_7,
      size_t VAR_8,
      int VAR_9)
{
 dma_addr_t VAR_10;
 dma_addr_t VAR_11, VAR_12;
 unsigned int VAR_13;

 if ((VAR_7 == VAR_4) ||
     (VAR_7 + VAR_8 > VAR_6->aperture_size))
  return;

 VAR_10 = VAR_7;
 VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_1);
 VAR_7 &= VAR_0;
 VAR_12 = VAR_7;

 for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
  FUNC_1(VAR_5, VAR_6, VAR_12);
  VAR_12 += VAR_1;
 }

 FUNC_0(VAR_2, VAR_8);

 FUNC_2(VAR_6, VAR_7, VAR_13);

 if (VAR_3 || VAR_6->need_flush) {
  FUNC_3(VAR_5, VAR_6->domain.id, VAR_10, VAR_8);
  VAR_6->need_flush = 0;
 }
}
