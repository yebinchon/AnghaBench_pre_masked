
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu {int dummy; } ;
struct cr_regs {int dummy; } ;
struct TYPE_2__ {int (* tlb_read_cr ) (struct iommu*,struct cr_regs*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iommu*,struct cr_regs*) ;

__attribute__((used)) static void FUNC_1(struct iommu *VAR_1, struct cr_regs *VAR_2)
{
 VAR_0->tlb_read_cr(VAR_1, VAR_2);
}
