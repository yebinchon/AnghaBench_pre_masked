
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
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct iommu*,int ,int ,void*,size_t,int ) ;
 void* FUNC_3 (int ,size_t) ;
 int FUNC_4 (void*) ;

u32 FUNC_5(struct iommu *VAR_7, u32 VAR_8, u32 VAR_9, size_t VAR_10,
   u32 VAR_11)
{
 void *VAR_12;

 if (!VAR_7 || !VAR_7->dev || !VAR_10)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_10);

 VAR_12 = FUNC_3(VAR_9, VAR_10);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 &= VAR_4;
 VAR_11 |= VAR_5;
 VAR_11 |= VAR_6;
 VAR_11 |= (VAR_8 ? VAR_3 : VAR_2);

 VAR_8 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_12, VAR_10, VAR_11);
 if (FUNC_0(VAR_8))
  FUNC_4(VAR_12);

 return VAR_8;
}
