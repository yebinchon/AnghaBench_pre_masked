
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct amd_iommu {int dev; } ;


 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static u32 FUNC_2(struct amd_iommu *VAR_0, u8 VAR_1)
{
 u32 VAR_2;

 FUNC_1(VAR_0->dev, 0xf0, VAR_1);
 FUNC_0(VAR_0->dev, 0xf4, &VAR_2);
 return VAR_2;
}
