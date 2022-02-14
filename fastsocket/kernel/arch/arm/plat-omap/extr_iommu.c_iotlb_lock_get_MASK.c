
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iotlb_lock {int base; int vict; } ;
struct iommu {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iommu*,int ) ;

__attribute__((used)) static void FUNC_4(struct iommu *VAR_1, struct iotlb_lock *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_0);

 VAR_2->base = FUNC_1(VAR_3);
 VAR_2->vict = FUNC_2(VAR_3);

 FUNC_0(VAR_2->base != 0);
}
