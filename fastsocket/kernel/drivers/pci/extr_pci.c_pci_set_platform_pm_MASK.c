
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_platform_pm_ops {int can_wakeup; int sleep_wake; int choose_state; int set_state; int is_manageable; } ;


 int VAR_0 ;
 struct pci_platform_pm_ops* VAR_1 ;

int FUNC_0(struct pci_platform_pm_ops *VAR_2)
{
 if (!VAR_2->is_manageable || !VAR_2->set_state || !VAR_2->choose_state
     || !VAR_2->sleep_wake || !VAR_2->can_wakeup)
  return -VAR_0;
 VAR_1 = VAR_2;
 return 0;
}
