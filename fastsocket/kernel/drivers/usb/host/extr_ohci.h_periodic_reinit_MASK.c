
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ohci_hcd {int fminterval; TYPE_1__* regs; } ;
struct TYPE_2__ {int periodicstart; int fminterval; } ;


 int VAR_0 ;
 int FUNC_0 (struct ohci_hcd*,int *) ;
 int FUNC_1 (struct ohci_hcd*,int,int *) ;

__attribute__((used)) static inline void FUNC_2 (struct ohci_hcd *VAR_1)
{
 u32 VAR_2 = VAR_1->fminterval & 0x03fff;
 u32 VAR_3 = FUNC_0(VAR_1, &VAR_1->regs->fminterval) & VAR_0;

 FUNC_1 (VAR_1, (VAR_3 ^ VAR_0) | VAR_1->fminterval,
      &VAR_1->regs->fminterval);
 FUNC_1 (VAR_1, ((9 * VAR_2) / 10) & 0x3fff,
      &VAR_1->regs->periodicstart);
}
