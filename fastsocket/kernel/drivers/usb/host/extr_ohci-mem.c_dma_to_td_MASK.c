
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td {scalar_t__ td_dma; struct td* td_hash; } ;
struct ohci_hcd {struct td** td_hash; } ;
typedef scalar_t__ dma_addr_t ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct td *
FUNC_1 (struct ohci_hcd *VAR_1, dma_addr_t VAR_2)
{
 struct td *VAR_3;

 VAR_2 &= VAR_0;
 VAR_3 = VAR_1->td_hash [FUNC_0(VAR_2)];
 while (VAR_3 && VAR_3->td_dma != VAR_2)
  VAR_3 = VAR_3->td_hash;
 return VAR_3;
}
