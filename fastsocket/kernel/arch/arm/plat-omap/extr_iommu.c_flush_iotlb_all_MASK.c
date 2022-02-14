
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iotlb_lock {scalar_t__ vict; scalar_t__ base; } ;
struct iommu {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iommu*,int,int ) ;
 int FUNC_3 (struct iommu*,struct iotlb_lock*) ;

void FUNC_4(struct iommu *VAR_1)
{
 struct iotlb_lock VAR_2;

 FUNC_1(VAR_1->clk);

 VAR_2.base = 0;
 VAR_2.vict = 0;
 FUNC_3(VAR_1, &VAR_2);

 FUNC_2(VAR_1, 1, VAR_0);

 FUNC_0(VAR_1->clk);
}
