
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iotlb_lock {int base; int vict; } ;
struct iommu {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iommu*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct iommu *VAR_3, struct iotlb_lock *VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_4->base != 0);

 VAR_5 = (VAR_4->base << VAR_1);
 VAR_5 |= (VAR_4->vict << VAR_2);

 FUNC_1(VAR_3, VAR_5, VAR_0);
}
