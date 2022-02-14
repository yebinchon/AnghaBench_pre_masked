
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_cmd {int * data; } ;
struct amd_iommu {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iommu_cmd*,int ) ;
 int FUNC_1 (struct amd_iommu*,struct iommu_cmd*) ;
 int FUNC_2 (struct iommu_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct amd_iommu *VAR_2)
{
 struct iommu_cmd VAR_3;

  FUNC_2(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.data[0] = VAR_1;
  FUNC_0(&VAR_3, VAR_0);

  return FUNC_1(VAR_2, &VAR_3);
}
