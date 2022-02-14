
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_cmd {int dummy; } ;
struct amd_iommu {int need_sync; int lock; } ;


 int FUNC_0 (struct amd_iommu*,struct iommu_cmd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct amd_iommu *VAR_0, struct iommu_cmd *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  VAR_0->need_sync = 1;
 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_3;
}
