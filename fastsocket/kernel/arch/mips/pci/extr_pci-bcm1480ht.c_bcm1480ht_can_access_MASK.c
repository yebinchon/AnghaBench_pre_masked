
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_3, int VAR_4)
{
 u32 VAR_5;

 if (!(VAR_2 & (VAR_0 | VAR_1)))
  return 0;

 if (VAR_3->number == 0) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_2 & VAR_1)
   return 0;
 }
 return 1;
}
