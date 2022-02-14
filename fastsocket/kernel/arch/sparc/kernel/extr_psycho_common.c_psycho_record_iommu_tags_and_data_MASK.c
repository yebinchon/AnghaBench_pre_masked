
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_pbm_info {unsigned long controller_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pci_pbm_info *VAR_2,
           u64 *VAR_3, u64 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  unsigned long VAR_6 = VAR_2->controller_regs;
  unsigned long VAR_7 = VAR_5 * 8UL;

  VAR_3[VAR_5] = FUNC_0(VAR_6 + VAR_1+VAR_7);
  VAR_4[VAR_5] = FUNC_0(VAR_6 + VAR_0+VAR_7);


  FUNC_1(0, VAR_6 + VAR_1 + VAR_7);
  FUNC_1(0, VAR_6 + VAR_0 + VAR_7);
 }
}
