
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int *) ;
 int FUNC_2 (struct pci_bus*,unsigned int,int,int *) ;
 int FUNC_3 (struct pci_bus*,unsigned int,int,int *) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_1, unsigned int VAR_2,
     int VAR_3, int VAR_4, u32 *VAR_5)
{
 switch (VAR_4) {
 case 1:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
 case 2:
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);
 case 4:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);
 default:
  FUNC_0();
  return -VAR_0;
 }
}
