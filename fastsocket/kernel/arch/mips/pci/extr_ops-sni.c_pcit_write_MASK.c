
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3,
         int VAR_4, u32 VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_3(VAR_1->number, VAR_2, VAR_3)))
  return VAR_6;

 switch (VAR_4) {
 case 1:
  FUNC_0(VAR_5, VAR_0 + (VAR_3 & 3));
  break;
 case 2:
  FUNC_2(VAR_5, VAR_0 + (VAR_3 & 2));
  break;
 case 4:
  FUNC_1(VAR_5, VAR_0);
  break;
 }

 return 0;
}
