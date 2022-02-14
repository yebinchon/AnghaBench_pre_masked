
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iommu_cmd {int * data; } ;
struct amd_iommu {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iommu_cmd*,int ) ;
 int FUNC_2 (struct amd_iommu*,struct iommu_cmd*) ;
 int FUNC_3 (struct iommu_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct amd_iommu *VAR_1, u16 VAR_2)
{
 struct iommu_cmd VAR_3;
 int VAR_4;

 FUNC_0(VAR_1 == ((void*)0));

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 FUNC_1(&VAR_3, VAR_0);
 VAR_3.data[0] = VAR_2;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);

 return VAR_4;
}
