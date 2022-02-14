
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
    int VAR_6, u32 VAR_7)
{
 FUNC_1(VAR_0, FUNC_0(VAR_3, VAR_4, VAR_5));

 switch (VAR_6) {
  case 1:
   FUNC_2(VAR_2 + (VAR_5 & 3), (u8)VAR_7);
   break;
  case 2:
   FUNC_3(VAR_2 + (VAR_5 & 2), (u16)VAR_7);
   break;
  case 4:
   FUNC_1(VAR_2, VAR_7);
   break;
 }

 return VAR_1;
}
