
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct protection_domain {int lock; int priv; } ;
struct device {int dummy; } ;
struct amd_iommu {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct amd_iommu*,int ,int ,size_t,int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (struct protection_domain*) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (struct device*,struct amd_iommu**,struct protection_domain**,int *) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (struct amd_iommu*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_2, size_t VAR_3,
     void *VAR_4, dma_addr_t VAR_5)
{
 unsigned long VAR_6;
 struct amd_iommu *VAR_7;
 struct protection_domain *VAR_8;
 u16 VAR_9;

 FUNC_0(VAR_1);

 if (!FUNC_2(VAR_2))
  return;

 FUNC_5(VAR_2, &VAR_7, &VAR_8, &VAR_9);

 if (!VAR_7 || !VAR_8)
  goto free_mem;

 if (!FUNC_3(VAR_8))
  goto free_mem;

 FUNC_8(&VAR_8->lock, VAR_6);

 FUNC_1(VAR_7, VAR_8->priv, VAR_5, VAR_3, VAR_0);

 FUNC_7(VAR_7);

 FUNC_9(&VAR_8->lock, VAR_6);

free_mem:
 FUNC_4((unsigned long)VAR_4, FUNC_6(VAR_3));
}
