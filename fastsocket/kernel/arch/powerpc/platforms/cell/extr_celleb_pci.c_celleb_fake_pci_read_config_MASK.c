
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {int dummy; } ;
struct pci_bus {int number; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int,int *) ;
 char* FUNC_2 (struct pci_controller*,unsigned int,unsigned int) ;
 struct pci_controller* FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_2,
  unsigned int VAR_3, int VAR_4, int VAR_5, u32 *VAR_6)
{
 char *VAR_7;
 struct pci_controller *VAR_8 = FUNC_3(VAR_2);
 unsigned int VAR_9 = VAR_3 >> 3;
 unsigned int VAR_10 = VAR_3 & 0x7;


 FUNC_0(VAR_4 % VAR_5);

 FUNC_4("    fake read: bus=0x%x, ", VAR_2->number);
 VAR_7 = FUNC_2(VAR_8, VAR_9, VAR_10);

 FUNC_4("devno=0x%x, where=0x%x, size=0x%x, ", VAR_9, VAR_4, VAR_5);
 if (!VAR_7) {
  FUNC_4("failed\n");
  return VAR_0;
 }

 FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_4("val=0x%x\n", *VAR_6);

 return VAR_1;
}
