
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_controller {unsigned long config_space_base; } ;
struct pci_bus {int number; int parent; struct pci_controller* sysdata; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_0, unsigned int VAR_1, int VAR_2,
      unsigned long *VAR_3, unsigned char *VAR_4)
{
 struct pci_controller *VAR_5 = VAR_0->sysdata;
 unsigned long VAR_6;
 u8 VAR_7 = VAR_0->number;

 FUNC_0(("mk_conf_addr(bus=%d ,device_fn=0x%x, where=0x%x, "
   "pci_addr=0x%p, type1=0x%p)\n",
   VAR_7, VAR_1, VAR_2, VAR_3, VAR_4));

 if (!VAR_0->parent)
  VAR_7 = 0;
        *VAR_4 = (VAR_7 != 0);

        VAR_6 = (VAR_7 << 16) | (VAR_1 << 8) | VAR_2;
 VAR_6 |= VAR_5->config_space_base;

 *VAR_3 = VAR_6;
 FUNC_0(("mk_conf_addr: returning pci_addr 0x%lx\n", VAR_6));
 return 0;
}
