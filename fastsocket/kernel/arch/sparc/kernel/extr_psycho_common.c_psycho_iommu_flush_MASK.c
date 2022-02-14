
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {scalar_t__ controller_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pci_pbm_info *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  unsigned long VAR_4 = VAR_3 * 8;

  FUNC_0(0, VAR_2->controller_regs + VAR_1 + VAR_4);
  FUNC_0(0, VAR_2->controller_regs + VAR_0 + VAR_4);
 }
}
