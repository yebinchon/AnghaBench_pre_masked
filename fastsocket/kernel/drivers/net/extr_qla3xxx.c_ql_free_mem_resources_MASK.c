
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int * shadow_reg_virt_addr; int shadow_reg_phy_addr; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct ql3_adapter*) ;
 int FUNC_2 (struct ql3_adapter*) ;
 int FUNC_3 (struct ql3_adapter*) ;
 int FUNC_4 (struct ql3_adapter*) ;
 int FUNC_5 (struct ql3_adapter*) ;

__attribute__((used)) static void FUNC_6(struct ql3_adapter *VAR_1)
{
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 if (VAR_1->shadow_reg_virt_addr != ((void*)0)) {
  FUNC_0(VAR_1->pdev,
        VAR_0,
        VAR_1->shadow_reg_virt_addr,
        VAR_1->shadow_reg_phy_addr);
  VAR_1->shadow_reg_virt_addr = ((void*)0);
 }
}
