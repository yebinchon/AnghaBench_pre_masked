
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_sys_data {scalar_t__ busnr; } ;
struct pci_bus {scalar_t__ number; struct pci_sys_data* sysdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct pci_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct pci_sys_data *VAR_6 = VAR_3->sysdata;
 u32 VAR_7;

 FUNC_2("iop13xx_atue_cfg_address: bus: %d dev: %d func: %d",
  VAR_3->number, FUNC_1(VAR_4), FUNC_0(VAR_4));
 VAR_7 = ((u32) VAR_3->number) << VAR_0 |
     ((u32) FUNC_1(VAR_4)) << VAR_1 |
     ((u32) FUNC_0(VAR_4)) << VAR_2 |
     (VAR_5 & ~0x3);

 if (VAR_6->busnr != VAR_3->number)
  VAR_7 |= 1;

 return VAR_7;
}
