
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3, u8 * VAR_4)
{
 unsigned int VAR_5 = 0;
 int VAR_6;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, ~(1 << (VAR_3 & 3)), &VAR_5);
 switch (VAR_3 & 0x03) {
 case 0:
  *VAR_4 = (unsigned char)(VAR_5 & 0x000000ff);
  break;
 case 1:
  *VAR_4 = (unsigned char)((VAR_5 & 0x0000ff00) >> 8);
  break;
 case 2:
  *VAR_4 = (unsigned char)((VAR_5 & 0x00ff0000) >> 16);
  break;
 case 3:
  *VAR_4 = (unsigned char)((VAR_5 & 0xff000000) >> 24);
  break;
 }

 return VAR_6;
}
