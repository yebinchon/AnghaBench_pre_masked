
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_bus {int number; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_0, unsigned int VAR_1, int VAR_2,
      unsigned long *VAR_3, unsigned char *VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6 = VAR_0->number;

 FUNC_0(("mk_conf_addr(bus=%d ,device_fn=0x%x, where=0x%x,"
       " pci_addr=0x%p, type1=0x%p)\n",
       VAR_6, VAR_1, VAR_2, VAR_3, VAR_4));

 if (VAR_6 == 0) {
  int VAR_7 = VAR_1 >> 3;



  if (VAR_7 > 20) {
   FUNC_0(("mk_conf_addr: device (%d) > 20, returning -1\n",
         VAR_7));
   return -1;
  }

  *VAR_4 = 0;
  VAR_5 = (VAR_1 << 8) | (VAR_2);
 } else {

  *VAR_4 = 1;
  VAR_5 = (VAR_6 << 16) | (VAR_1 << 8) | (VAR_2);
 }
 *VAR_3 = VAR_5;
 FUNC_0(("mk_conf_addr: returning pci_addr 0x%lx\n", VAR_5));
 return 0;
}
