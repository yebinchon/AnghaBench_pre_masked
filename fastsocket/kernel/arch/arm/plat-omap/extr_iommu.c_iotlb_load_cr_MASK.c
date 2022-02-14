
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu {int dummy; } ;
struct cr_regs {int dummy; } ;
struct TYPE_2__ {int (* tlb_load_cr ) (struct iommu*,struct cr_regs*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct iommu*,int,int ) ;
 int FUNC_1 (struct iommu*,struct cr_regs*) ;

__attribute__((used)) static void FUNC_2(struct iommu *VAR_3, struct cr_regs *VAR_4)
{
 VAR_2->tlb_load_cr(VAR_3, VAR_4);

 FUNC_0(VAR_3, 1, VAR_0);
 FUNC_0(VAR_3, 1, VAR_1);
}
