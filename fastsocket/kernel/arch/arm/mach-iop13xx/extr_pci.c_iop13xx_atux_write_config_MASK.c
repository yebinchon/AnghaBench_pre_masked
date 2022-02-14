
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 unsigned long FUNC_1 (struct pci_bus*,unsigned int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
  int VAR_6, u32 VAR_7)
{
 unsigned long VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 u32 VAR_9;

 if (VAR_6 != 4) {
  VAR_9 = FUNC_3(VAR_8);
  if (!(FUNC_2(1) == 0))
   return VAR_2;

  VAR_5 = (VAR_5 & 3) * 8;

  if (VAR_6 == 1)
   VAR_9 &= ~(0xff << VAR_5);
  else
   VAR_9 &= ~(0xffff << VAR_5);

  FUNC_0(VAR_9 | VAR_7 << VAR_5, VAR_1);
 } else {
  FUNC_0(VAR_8, VAR_0);
  FUNC_0(VAR_7, VAR_1);
 }

 return VAR_2;
}
