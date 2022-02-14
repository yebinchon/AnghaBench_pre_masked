
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int configured_flag; } ;


 int FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (struct ehci_hcd*,int *) ;
 int FUNC_2 (struct ehci_hcd*) ;
 int FUNC_3 (struct ehci_hcd*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ehci_hcd *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);


 FUNC_3(VAR_0, 0, &VAR_0->regs->configured_flag);


 FUNC_1(VAR_0, &VAR_0->regs->configured_flag);
}
