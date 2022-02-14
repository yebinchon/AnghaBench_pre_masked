
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_controller {int dummy; } ;


 int FUNC_0 (struct pci_controller*,unsigned long,int,int) ;

__attribute__((used)) static void FUNC_1(struct pci_controller *VAR_0,
        u16 VAR_1, unsigned long VAR_2)
{
 if ((VAR_2 & 0x3ul) < 3)
  FUNC_0(VAR_0, VAR_2, 2, (u32)VAR_1);
 else {
  u32 VAR_3 = VAR_1 & 0x000000FF;
  u32 VAR_4 = (VAR_1 & 0x0000FF00) >> 8;
  FUNC_0(VAR_0, VAR_2, 1, VAR_3);
  FUNC_0(VAR_0, VAR_2 + 1, 1, VAR_4);
 }
}
