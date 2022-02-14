
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
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct iommu*,int ,struct sg_table const*,void*,size_t,int ) ;
 size_t FUNC_5 (struct sg_table const*) ;
 void* FUNC_6 (struct sg_table const*) ;
 int FUNC_7 (void*) ;

u32 FUNC_8(struct iommu *VAR_6, u32 VAR_7, const struct sg_table *VAR_8,
   u32 VAR_9)
{
 size_t VAR_10;
 void *VAR_11;

 if (!VAR_6 || !VAR_6->dev || !VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_8);
 if (!VAR_10)
  return -VAR_0;
 VAR_10 = FUNC_2(VAR_10);

 VAR_11 = FUNC_6(VAR_8);
 if (FUNC_0(VAR_11))
  return FUNC_3(VAR_11);

 VAR_9 &= VAR_4;
 VAR_9 |= VAR_3;
 VAR_9 |= VAR_5;
 VAR_9 |= (VAR_7 ? VAR_2 : VAR_1);

 VAR_7 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_11, VAR_10, VAR_9);
 if (FUNC_1(VAR_7))
  FUNC_7(VAR_11);

 return VAR_7;
}
