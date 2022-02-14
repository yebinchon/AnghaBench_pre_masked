
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; int device; scalar_t__ subsystem_vendor; } ;


 int VAR_0 ;

 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct pci_dev*) ;
 unsigned int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3)
{

 unsigned int VAR_4 = VAR_3->subsystem_device & 0xf;

 if (VAR_3->device == VAR_1)
  return 0;

 if (VAR_3->subsystem_vendor == VAR_2 &&
   VAR_3->subsystem_device == 0x0299)
  return 0;

 switch (VAR_3->device) {
  case 130:
  case 129:
  case 128:
  case 131:
   VAR_4 = FUNC_1(VAR_3);
   break;

  default:
   if (VAR_4 == 0 ) {
    FUNC_0("unknown NetMos/Mostech device", VAR_3);
   }
 }

 if (VAR_4 == 0)
  return -VAR_0;

 return VAR_4;
}
