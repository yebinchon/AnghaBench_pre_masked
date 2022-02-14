
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int,int *) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int *) ;
 int FUNC_2 (struct pci_bus*,unsigned int,int,int *) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_0, unsigned int VAR_1, int VAR_2, int VAR_3, u32 * VAR_4)
{
 switch (VAR_3) {
 case 1: {
   u8 VAR_5;
   int VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
   *VAR_4 = VAR_5;
   return VAR_6;
  }
       case 2: {
   u16 VAR_7;
   int VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_7);
   *VAR_4 = VAR_7;
   return VAR_8;
  }
 default:
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
 }
}
