
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_sys_data {int busnr; } ;
struct pci_bus {int number; struct pci_sys_data* sysdata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct pci_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct pci_sys_data *VAR_3 = VAR_0->sysdata;
 u32 VAR_4;

 if (VAR_3->busnr == VAR_0->number)
  VAR_4 = 1 << (FUNC_1(VAR_1) + 16) | (FUNC_1(VAR_1) << 11);
 else
  VAR_4 = VAR_0->number << 16 | FUNC_1(VAR_1) << 11 | 1;

 VAR_4 |= FUNC_0(VAR_1) << 8 | (VAR_2 & ~3);

 return VAR_4;
}
