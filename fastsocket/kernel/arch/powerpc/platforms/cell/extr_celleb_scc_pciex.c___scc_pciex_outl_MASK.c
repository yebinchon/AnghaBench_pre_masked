
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {int dummy; } ;


 int FUNC_0 (struct pci_controller*,unsigned long,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct pci_controller *VAR_0,
        u32 VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3 = VAR_2 & 0x3ul;
 if (VAR_3 == 0)
  FUNC_0(VAR_0, VAR_2, 4, VAR_1);
 else {
  u32 VAR_4 = VAR_1 & (0xFFFFFFFFul >> (VAR_3 * 8));
  u32 VAR_5 = VAR_1 >> ((4 - VAR_3) * 8);
  FUNC_0(VAR_0, VAR_2, 4 - VAR_3, VAR_4);
  FUNC_0(VAR_0, VAR_2 + 1, VAR_3, VAR_5);
 }
}
