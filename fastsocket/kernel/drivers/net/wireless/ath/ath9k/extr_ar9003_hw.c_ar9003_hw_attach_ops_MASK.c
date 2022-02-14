
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_private_ops {int init_mode_gain_regs; } ;
struct ath_hw_ops {int config_pci_powersave; } ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ath_hw*) ;
 struct ath_hw_ops* FUNC_4 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_5 (struct ath_hw*) ;

void FUNC_6(struct ath_hw *VAR_2)
{
 struct ath_hw_private_ops *VAR_3 = FUNC_5(VAR_2);
 struct ath_hw_ops *VAR_4 = FUNC_4(VAR_2);

 FUNC_3(VAR_2);
 VAR_3->init_mode_gain_regs = VAR_1;

 VAR_4->config_pci_powersave = VAR_0;

 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
}
