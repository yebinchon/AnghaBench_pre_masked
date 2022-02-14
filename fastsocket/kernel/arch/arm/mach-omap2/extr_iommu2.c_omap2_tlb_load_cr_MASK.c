
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu {int dummy; } ;
struct cr_regs {int cam; int ram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iommu*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct iommu *VAR_3, struct cr_regs *VAR_4)
{
 FUNC_0(VAR_3, VAR_4->cam | VAR_1, VAR_0);
 FUNC_0(VAR_3, VAR_4->ram, VAR_2);
}
