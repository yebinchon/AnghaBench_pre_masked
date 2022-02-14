
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_hcd {int debug_dir; int debug_async; int debug_periodic; int debug_registers; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1 (struct ehci_hcd *VAR_0)
{
 FUNC_0(VAR_0->debug_registers);
 FUNC_0(VAR_0->debug_periodic);
 FUNC_0(VAR_0->debug_async);
 FUNC_0(VAR_0->debug_dir);
}
