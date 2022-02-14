
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_bus {scalar_t__ number; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_5, int VAR_6)
{
 u32 VAR_7;

 if (!(VAR_4 & (VAR_2 | VAR_3)))
  return 0;

 if (VAR_5->number == 0) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 == VAR_0)
   return (VAR_4 & VAR_1) != 0;
  else if (VAR_4 & VAR_3)
   return 0;
  else
   return 1;
 } else
  return 1;
}
