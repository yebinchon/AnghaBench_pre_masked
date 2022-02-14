
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int dummy; } ;
struct amd_iommu {int dummy; } ;


 unsigned long VAR_0 ;
 struct protection_domain** VAR_1 ;
 struct amd_iommu** VAR_2 ;
 int FUNC_0 (struct amd_iommu*) ;
 int FUNC_1 (struct amd_iommu*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct protection_domain *VAR_3)
{
 struct amd_iommu *VAR_4;
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_0; ++VAR_5) {
  if ((VAR_3 == ((void*)0) && VAR_1[VAR_5] == ((void*)0)) ||
      (VAR_3 != ((void*)0) && VAR_1[VAR_5] != VAR_3))
   continue;

  VAR_4 = VAR_2[VAR_5];
  if (!VAR_4)
   continue;

  FUNC_1(VAR_4, VAR_5);
  FUNC_0(VAR_4);
 }
}
