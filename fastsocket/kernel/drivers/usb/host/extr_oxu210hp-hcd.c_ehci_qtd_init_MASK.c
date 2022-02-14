
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qtd {int qtd_list; void* hw_alt_next; void* hw_next; int hw_token; int qtd_dma; } ;
typedef int dma_addr_t ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ehci_qtd*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct ehci_qtd *VAR_2, dma_addr_t VAR_3)
{
 FUNC_2(VAR_2, 0, sizeof *VAR_2);
 VAR_2->qtd_dma = VAR_3;
 VAR_2->hw_token = FUNC_1(VAR_1);
 VAR_2->hw_next = VAR_0;
 VAR_2->hw_alt_next = VAR_0;
 FUNC_0(&VAR_2->qtd_list);
}
