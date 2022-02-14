
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_controller {int dummy; } ;
struct pci_bus {int number; } ;
struct TYPE_2__ {scalar_t__ (* pci_exclude_device ) (struct pci_controller*,int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 struct pci_controller* FUNC_3 (struct pci_bus*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct pci_controller*,int ,unsigned int) ;
 int FUNC_6 (int ,unsigned int,int) ;

int
FUNC_7(struct pci_bus *VAR_3, unsigned int VAR_4,
      int VAR_5, int VAR_6, u32 VAR_7)
{
 volatile unsigned char *VAR_8;
 struct pci_controller *VAR_9 = FUNC_3(VAR_3);

 if (VAR_2.pci_exclude_device)
  if (VAR_2.pci_exclude_device(VAR_9, VAR_3->number, VAR_4))
   return VAR_0;

 VAR_8 = (unsigned char *)(FUNC_6(VAR_3->number,
       VAR_4, VAR_5) |
       (VAR_5 & 0x03));
 switch (VAR_6) {
 case 1:
  FUNC_0((u8 *) VAR_8, VAR_7);
  break;
 case 2:
  FUNC_1((u16 *) VAR_8, VAR_7);
  break;
 default:
  FUNC_2((u32 *) VAR_8, VAR_7);
  break;
 }

 return VAR_1;
}
