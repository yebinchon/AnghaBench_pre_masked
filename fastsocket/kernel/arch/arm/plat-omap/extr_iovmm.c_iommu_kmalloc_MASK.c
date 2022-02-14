
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct iommu*,int ,int ,void*,size_t,int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (size_t,int) ;
 int FUNC_5 (void*) ;

u32 FUNC_6(struct iommu *VAR_9, u32 VAR_10, size_t VAR_11, u32 VAR_12)
{
 void *VAR_13;
 u32 VAR_14;

 if (!VAR_9 || !VAR_9->dev || !VAR_11)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_11);

 VAR_13 = FUNC_4(VAR_11, VAR_3 | VAR_2);
 if (!VAR_13)
  return -VAR_1;
 VAR_14 = FUNC_5(VAR_13);

 VAR_12 &= VAR_7;
 VAR_12 |= VAR_8;
 VAR_12 |= VAR_4;
 VAR_12 |= (VAR_10 ? VAR_6 : VAR_5);

 VAR_10 = FUNC_2(VAR_9, VAR_10, VAR_14, VAR_13, VAR_11, VAR_12);
 if (FUNC_0(VAR_10))
  FUNC_3(VAR_13);

 return VAR_10;
}
