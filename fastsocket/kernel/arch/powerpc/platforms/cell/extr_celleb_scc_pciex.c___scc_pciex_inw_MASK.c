
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_controller {int dummy; } ;


 int FUNC_0 (struct pci_controller*,unsigned long,int) ;

__attribute__((used)) static u16 FUNC_1(struct pci_controller *VAR_0, unsigned long VAR_1)
{
 u32 VAR_2;
 if ((VAR_1 & 0x3ul) < 3)
  VAR_2 = FUNC_0(VAR_0, VAR_1, 2);
 else {
  u32 VAR_3 = FUNC_0(VAR_0, VAR_1, 1);
  u32 VAR_4 = FUNC_0(VAR_0, VAR_1 + 1, 1);
  VAR_2 = VAR_3 | (VAR_4 << 8);
 }
 return (u16)VAR_2;
}
