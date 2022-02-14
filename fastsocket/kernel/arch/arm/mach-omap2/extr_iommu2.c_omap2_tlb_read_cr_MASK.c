
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu {int dummy; } ;
struct cr_regs {void* ram; void* cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct iommu*,int ) ;

__attribute__((used)) static void FUNC_1(struct iommu *VAR_2, struct cr_regs *VAR_3)
{
 VAR_3->cam = FUNC_0(VAR_2, VAR_0);
 VAR_3->ram = FUNC_0(VAR_2, VAR_1);
}
