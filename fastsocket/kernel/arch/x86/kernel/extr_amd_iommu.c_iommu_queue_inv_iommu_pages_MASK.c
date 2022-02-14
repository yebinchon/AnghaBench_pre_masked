
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int dummy; } ;


 int FUNC_0 (struct iommu_cmd*,int ,int ,int,int) ;
 int FUNC_1 (struct amd_iommu*,struct iommu_cmd*) ;

__attribute__((used)) static int FUNC_2(struct amd_iommu *VAR_0,
  u64 VAR_1, u16 VAR_2, int VAR_3, int VAR_4)
{
 struct iommu_cmd VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_6 = FUNC_1(VAR_0, &VAR_5);

 return VAR_6;
}
