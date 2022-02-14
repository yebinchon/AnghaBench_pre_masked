
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int current_state; scalar_t__ pm_cap; } ;
typedef int pci_power_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;

void FUNC_1(struct pci_dev *VAR_2, pci_power_t VAR_3)
{
 if (VAR_2->pm_cap) {
  u16 VAR_4;

  FUNC_0(VAR_2, VAR_2->pm_cap + VAR_0, &VAR_4);
  VAR_2->current_state = (VAR_4 & VAR_1);
 } else {
  VAR_2->current_state = VAR_3;
 }
}
