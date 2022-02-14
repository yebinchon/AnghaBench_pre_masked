
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int cfg_data; int cfg_addr; } ;


 int FUNC_0 (int ,int ,int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_4(struct pci_controller *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 FUNC_2(VAR_1->cfg_addr, FUNC_0(0, 0, 0xa8));
 VAR_3 = FUNC_1(VAR_1->cfg_data);
 VAR_3 = VAR_2? (VAR_3 | VAR_0) :
  (VAR_3 & ~VAR_0);
 FUNC_2(VAR_1->cfg_addr, FUNC_0(0, 0, 0xa8));
 FUNC_3(VAR_1->cfg_data, VAR_3);
 (void)FUNC_1(VAR_1->cfg_data);
}
