
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_2__ {int misc_mask; int misc_status; int pci_mask; int pci_status; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int,int ,int *,int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_5, struct irq_desc *VAR_6)
{
 VAR_5 = FUNC_0(0, VAR_3, &VAR_4->pci_status,
  &VAR_4->pci_mask);
 if (VAR_5 != VAR_1 && VAR_5 != VAR_2) {
  FUNC_1(VAR_5);
  return;
 }

 VAR_5 = FUNC_0(8, VAR_0, &VAR_4->misc_status,
  &VAR_4->misc_mask);
 if (VAR_5 != VAR_1 && VAR_5 != VAR_2) {
  FUNC_1(VAR_5);
  return;
 }
}
