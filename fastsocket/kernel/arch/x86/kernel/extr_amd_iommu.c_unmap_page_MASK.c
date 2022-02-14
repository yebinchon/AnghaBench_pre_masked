
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct protection_domain {int lock; int priv; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
struct amd_iommu {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amd_iommu*,int ,int ,size_t,int) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 int FUNC_3 (struct protection_domain*) ;
 int FUNC_4 (struct device*,struct amd_iommu**,struct protection_domain**,int *) ;
 int FUNC_5 (struct amd_iommu*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_1, dma_addr_t VAR_2, size_t VAR_3,
         enum dma_data_direction VAR_4, struct dma_attrs *VAR_5)
{
 unsigned long VAR_6;
 struct amd_iommu *VAR_7;
 struct protection_domain *VAR_8;
 u16 VAR_9;

 FUNC_0(VAR_0);

 if (!FUNC_2(VAR_1) ||
     !FUNC_4(VAR_1, &VAR_7, &VAR_8, &VAR_9))

  return;

 if (!FUNC_3(VAR_8))
  return;

 FUNC_6(&VAR_8->lock, VAR_6);

 FUNC_1(VAR_7, VAR_8->priv, VAR_2, VAR_3, VAR_4);

 FUNC_5(VAR_7);

 FUNC_7(&VAR_8->lock, VAR_6);
}
