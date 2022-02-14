
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int phy_flags; int pci_fn; } ;




 int VAR_0 ;
 int FUNC_0 (struct tg3*) ;

__attribute__((used)) static bool FUNC_1(struct tg3 *VAR_1)
{
 switch (FUNC_0(VAR_1)) {
 case 129:
 case 128:
  if ((VAR_1->phy_flags & VAR_0) &&
      !VAR_1->pci_fn)
   return 1;
  return 0;
 }

 return 0;
}
