
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pci_bus*,unsigned int,int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3, int VAR_4,
          u32 *VAR_5)
{
 u32 VAR_6;

 if (VAR_1->number == 0 && VAR_2 == FUNC_2(0, 0)) {
  VAR_6 = FUNC_3(VAR_3 & ~3);
 }
 else {
  FUNC_5(FUNC_1(VAR_1, VAR_2, VAR_3));
  VAR_6 = FUNC_4(VAR_3 & ~3);
 }

 switch (VAR_4) {
 case 1:
  VAR_6 = VAR_6 >> ((VAR_3 & 3) * 8);
  break;

 case 2:
  VAR_6 = VAR_6 >> ((VAR_3 & 2) * 8);
  break;

 case 4:
  break;

 default:
  FUNC_0();
 }

 *VAR_5 = VAR_6;
 return VAR_0;
}
