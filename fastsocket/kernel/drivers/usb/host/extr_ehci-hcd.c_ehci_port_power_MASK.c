
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {TYPE_1__* regs; int hcs_params; } ;
struct TYPE_2__ {int command; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ehci_hcd*,char*,char*) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int ) ;
 int FUNC_4 (struct ehci_hcd*,int *) ;
 int FUNC_5 (struct ehci_hcd*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7 (struct ehci_hcd *VAR_3, int VAR_4)
{
 unsigned VAR_5;

 if (!FUNC_1 (VAR_3->hcs_params))
  return;

 FUNC_2 (VAR_3, "...power%s ports...\n", VAR_4 ? "up" : "down");
 for (VAR_5 = FUNC_0 (VAR_3->hcs_params); VAR_5 > 0; )
  (void) FUNC_3(FUNC_5(VAR_3),
    VAR_4 ? VAR_1 : VAR_0,
    VAR_2,
    VAR_5--, ((void*)0), 0);

 FUNC_4(VAR_3, &VAR_3->regs->command);
 FUNC_6(20);
}
