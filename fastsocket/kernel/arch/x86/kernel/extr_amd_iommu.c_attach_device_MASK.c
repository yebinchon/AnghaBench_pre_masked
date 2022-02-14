
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct protection_domain {int id; } ;
struct amd_iommu {int dummy; } ;


 int FUNC_0 (struct amd_iommu*,struct protection_domain*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct amd_iommu*,int ) ;
 int FUNC_2 (struct amd_iommu*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct amd_iommu *VAR_1,
     struct protection_domain *VAR_2,
     u16 VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(&VAR_0, VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_4(&VAR_0, VAR_4);






 FUNC_2(VAR_1, VAR_3);
 FUNC_1(VAR_1, VAR_2->id);
}
