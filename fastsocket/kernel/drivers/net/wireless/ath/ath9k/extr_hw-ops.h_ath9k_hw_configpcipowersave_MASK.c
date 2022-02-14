
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int aspm_enabled; } ;
struct TYPE_2__ {int (* config_pci_powersave ) (struct ath_hw*,int) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0,
            bool VAR_1)
{
 if (!VAR_0->aspm_enabled)
  return;

 FUNC_0(VAR_0)->config_pci_powersave(VAR_0, VAR_1);
}
