
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3, u8 VAR_4)
{
 unsigned int VAR_5 = (unsigned int)VAR_4;
 int VAR_6;

 if (VAR_1 == ((void*)0))
  return -1;

 switch (VAR_3 & 0x03) {
 case 1:
  VAR_5 = (VAR_5 << 8);
  break;
 case 2:
  VAR_5 = (VAR_5 << 16);
  break;
 case 3:
  VAR_5 = (VAR_5 << 24);
  break;
 default:
  break;
 }

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, ~(1 << (VAR_3 & 3)), &VAR_5);

 return VAR_6;
}
