
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {scalar_t__ first_busno; } ;
struct pci_bus {scalar_t__ number; } ;
typedef scalar_t__ PCI_IO_ADDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_controller*,int *) ;
 scalar_t__ FUNC_2 (struct pci_controller*) ;
 int FUNC_3 (struct pci_controller*) ;
 scalar_t__ FUNC_4 (struct pci_bus*,struct pci_controller*,unsigned int,int) ;
 int FUNC_5 (struct pci_controller*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 struct pci_controller* FUNC_11 (struct pci_bus*) ;
 int FUNC_12 (char*,scalar_t__,unsigned int,int,int,int ) ;

__attribute__((used)) static int FUNC_13(struct pci_bus *VAR_1,
   unsigned int VAR_2, int VAR_3, int VAR_4, u32 *VAR_5)
{
 PCI_IO_ADDR VAR_6;
 PCI_IO_ADDR VAR_7;
 struct pci_controller *VAR_8 = FUNC_11(VAR_1);


 FUNC_0(VAR_3 % VAR_4);

 if (!FUNC_3(VAR_8))
  return VAR_0;

 if (VAR_1->number == VAR_8->first_busno && VAR_2 == 0) {


  VAR_6 = FUNC_2(VAR_8);
  VAR_7 = VAR_6 + VAR_3;

  switch (VAR_4) {
  case 1:
   *VAR_5 = FUNC_6(VAR_7);
   break;
  case 2:
   *VAR_5 = FUNC_7(VAR_7);
   break;
  case 4:
   *VAR_5 = FUNC_8(VAR_7);
   break;
  default:
   return VAR_0;
  }

 } else {

  FUNC_5(VAR_8);
  VAR_7 = FUNC_4(VAR_1, VAR_8, VAR_2, VAR_3);

  switch (VAR_4) {
  case 1:
   *VAR_5 = FUNC_6(VAR_7);
   break;
  case 2:
   *VAR_5 = FUNC_9(VAR_7);
   break;
  case 4:
   *VAR_5 = FUNC_10(VAR_7);
   break;
  default:
   return VAR_0;
  }
 }

 FUNC_12("EPCI: "
   "addr=0x%p, devfn=0x%x, where=0x%x, size=0x%x, val=0x%x\n",
   VAR_7, VAR_2, VAR_3, VAR_4, *VAR_5);

 return FUNC_1(VAR_8, ((void*)0));
}
