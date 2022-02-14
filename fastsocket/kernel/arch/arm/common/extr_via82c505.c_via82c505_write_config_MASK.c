
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3,
         int VAR_4, u32 VAR_5)
{
 FUNC_2(FUNC_0(VAR_1,VAR_2,VAR_3),0xCF8);
 switch (VAR_4) {
 case 1:
  FUNC_1(VAR_5, 0xCFC + (VAR_3&3));
  break;
 case 2:
  FUNC_3(VAR_5, 0xCFC + (VAR_3&2));
  break;
 case 4:
  FUNC_2(VAR_5, 0xCFC);
  break;
 }
 return VAR_0;
}
