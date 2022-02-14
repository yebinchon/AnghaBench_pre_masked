
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sg_table {int dummy; } ;
struct iommu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sg_table*) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (struct sg_table*) ;
 int FUNC_4 (struct iommu*,int ,struct sg_table*,void*,size_t,int ) ;
 struct sg_table* FUNC_5 (size_t,int ) ;
 int FUNC_6 (struct sg_table*) ;
 int FUNC_7 (struct sg_table*,void*) ;
 int FUNC_8 (struct sg_table*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (size_t) ;

u32 FUNC_11(struct iommu *VAR_7, u32 VAR_8, size_t VAR_9, u32 VAR_10)
{
 void *VAR_11;
 struct sg_table *VAR_12;

 if (!VAR_7 || !VAR_7->dev || !VAR_9)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_9);

 VAR_11 = FUNC_10(VAR_9);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_5(VAR_9, VAR_10);
 if (FUNC_0(VAR_12)) {
  VAR_8 = FUNC_3(VAR_12);
  goto err_sgt_alloc;
 }
 FUNC_7(VAR_12, VAR_11);

 VAR_10 &= VAR_6;
 VAR_10 |= VAR_5;
 VAR_10 |= VAR_2;
 VAR_10 |= (VAR_8 ? VAR_4 : VAR_3);

 VAR_8 = FUNC_4(VAR_7, VAR_8, VAR_12, VAR_11, VAR_9, VAR_10);
 if (FUNC_1(VAR_8))
  goto err_iommu_vmap;

 return VAR_8;

err_iommu_vmap:
 FUNC_6(VAR_12);
 FUNC_8(VAR_12);
err_sgt_alloc:
 FUNC_9(VAR_11);
 return VAR_8;
}
