
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;
 int VAR_1 ;
 unsigned long FUNC_9 (struct pci_bus*,unsigned int,int) ;

__attribute__((used)) static int FUNC_10(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
      int VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;

 FUNC_6(&VAR_1, VAR_8);
 VAR_7 = FUNC_9(VAR_2, VAR_3, VAR_4);

 switch (VAR_5) {
 case 1:
  FUNC_3((u8)VAR_6, VAR_7);
  FUNC_0(VAR_7);
  break;

 case 2:
  FUNC_5((u16)VAR_6, VAR_7);
  FUNC_2(VAR_7);
  break;

 case 4:
  FUNC_4(VAR_6, VAR_7);
  FUNC_1(VAR_7);
  break;
 }

 FUNC_8();
 FUNC_7(&VAR_1, VAR_8);

 return VAR_0;
}
