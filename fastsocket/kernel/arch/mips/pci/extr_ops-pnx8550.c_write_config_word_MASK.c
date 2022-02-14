
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4, u16 VAR_5)
{
 unsigned int VAR_6 = (unsigned int)VAR_5;
 int VAR_7;

 if (VAR_2 == ((void*)0))
  return -1;

 if (VAR_4 & 0x01)
  return VAR_0;

 switch (VAR_4 & 0x02) {
 case 2:
  VAR_6 = (VAR_6 << 16);
  break;
 default:
  break;
 }
 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, ~(3 << (VAR_4 & 3)), &VAR_6);

 return VAR_7;
}
