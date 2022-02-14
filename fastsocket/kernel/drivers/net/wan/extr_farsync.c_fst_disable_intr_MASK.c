
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_card_info {scalar_t__ family; scalar_t__ pci_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct fst_card_info *VAR_3)
{
 if (VAR_3->family == VAR_0) {
  FUNC_0(0x00000000, VAR_3->pci_conf + VAR_2);
 } else {
  FUNC_1(0x0000, VAR_3->pci_conf + VAR_1);
 }
}
