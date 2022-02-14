
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_iommu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_iommu*,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct amd_iommu *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_0; ++VAR_3) {
  if (!FUNC_1(VAR_3, VAR_1))
   continue;
  FUNC_0(VAR_2, VAR_3);
 }

}
