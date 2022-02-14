
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_controller {unsigned long config_space_base; int index; } ;
struct pci_bus {int number; int parent; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_0, unsigned int VAR_1, int VAR_2,
      struct pci_controller *VAR_3, unsigned long *VAR_4,
      unsigned char *VAR_5)
{
 u8 VAR_6 = VAR_0->number;
 unsigned long VAR_7;

 FUNC_0(("mk_conf_addr(bus=%d,devfn=0x%x,hose=%d,where=0x%x,"
   " pci_addr=0x%p, type1=0x%p)\n",
   VAR_6, VAR_1, VAR_3->index, VAR_2, VAR_4, VAR_5));


 *VAR_5 = 1;

 if (!VAR_0->parent)
  VAR_6 = 0;
 VAR_7 = (VAR_6 << 16) | (VAR_1 << 8) | (VAR_2);
 VAR_7 <<= 5;
 VAR_7 |= VAR_3->config_space_base;

 *VAR_4 = VAR_7;
 FUNC_0(("mk_conf_addr: returning pci_addr 0x%lx\n", VAR_7));
 return 0;
}
