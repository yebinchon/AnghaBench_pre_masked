
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qtd {int qtd_dma; } ;
struct ehci_hcd {int qtd_pool; } ;


 int FUNC_0 (int ,struct ehci_qtd*,int ) ;

__attribute__((used)) static inline void FUNC_1 (struct ehci_hcd *VAR_0, struct ehci_qtd *VAR_1)
{
 FUNC_0 (VAR_0->qtd_pool, VAR_1, VAR_1->qtd_dma);
}
