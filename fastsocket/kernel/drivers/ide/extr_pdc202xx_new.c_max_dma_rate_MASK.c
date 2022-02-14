
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int device; } ;
__attribute__((used)) static u8 FUNC_0(struct pci_dev *VAR_0)
{
 u8 VAR_1;

 switch(VAR_0->device) {
  case 128:
  case 129:
  case 130:
  case 131:
  case 133:
   VAR_1 = 4;
   break;
  case 132:
  case 134:
   VAR_1 = 3;
   break;
  default:
   return 0;
 }

 return VAR_1;
}
