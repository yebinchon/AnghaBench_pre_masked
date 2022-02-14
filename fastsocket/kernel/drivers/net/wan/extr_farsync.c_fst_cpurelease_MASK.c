
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_card_info {scalar_t__ family; int ctlmem; scalar_t__ pci_conf; int mem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct fst_card_info *VAR_2)
{
 if (VAR_2->family == VAR_1) {



  (void) FUNC_1(VAR_2->mem);





  FUNC_0(0x040e, VAR_2->pci_conf + VAR_0 + 2);
  FUNC_0(0x040f, VAR_2->pci_conf + VAR_0 + 2);
 } else {
  (void) FUNC_1(VAR_2->ctlmem);
 }
}
