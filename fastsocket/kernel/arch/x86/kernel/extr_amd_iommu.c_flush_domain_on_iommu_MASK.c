
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_cmd*,int ,int ,int,int) ;
 int FUNC_1 (struct amd_iommu*) ;
 int FUNC_2 (struct amd_iommu*,struct iommu_cmd*) ;
 int FUNC_3 (struct amd_iommu*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct amd_iommu *VAR_1, u16 VAR_2)
{
 struct iommu_cmd VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_3, VAR_0,
          VAR_2, 1, 1);

 FUNC_4(&VAR_1->lock, VAR_4);
 FUNC_2(VAR_1, &VAR_3);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5(&VAR_1->lock, VAR_4);
}
