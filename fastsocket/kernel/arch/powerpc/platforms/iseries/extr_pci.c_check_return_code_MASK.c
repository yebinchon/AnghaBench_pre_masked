
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pci_dn {int devfn; int busno; } ;
struct device_node {int dummy; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,char*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, struct device_node *VAR_4,
  int *VAR_5, u64 VAR_6)
{
 if (VAR_6 != 0) {
  struct pci_dn *VAR_7 = FUNC_0(VAR_4);

  (*VAR_5)++;
  FUNC_3("PCI: %s: Device 0x%04X:%02X  I/O Error(%2d): 0x%04X\n",
    VAR_3, VAR_7->busno, VAR_7->devfn,
    *VAR_5, (int)VAR_6);




  if (((*VAR_5) > VAR_0) &&
    (VAR_1 > 0)) {
   FUNC_1(0xB6000103);
   VAR_2 = 0;
   FUNC_2("PCI: Hardware I/O Error, SRC B6000103, "
     "Automatic Reboot Disabled.\n");
  }
  return -1;
 }
 return 0;
}
