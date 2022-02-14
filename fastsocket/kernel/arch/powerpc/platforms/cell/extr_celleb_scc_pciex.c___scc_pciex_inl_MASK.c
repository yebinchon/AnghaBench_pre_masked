
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pci_controller {int dummy; } ;


 unsigned int FUNC_0 (struct pci_controller*,unsigned long,unsigned int) ;

__attribute__((used)) static u32 FUNC_1(struct pci_controller *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2 = VAR_1 & 0x3ul;
 u32 VAR_3;
 if (VAR_2 == 0)
  VAR_3 = FUNC_0(VAR_0, VAR_1, 4);
 else {
  u32 VAR_4 = FUNC_0(VAR_0, VAR_1, 4 - VAR_2);
  u32 VAR_5 = FUNC_0(VAR_0, VAR_1 + 1, VAR_2);
  VAR_3 = VAR_4 | (VAR_5 << (VAR_2 * 8));
 }
 return VAR_3;
}
