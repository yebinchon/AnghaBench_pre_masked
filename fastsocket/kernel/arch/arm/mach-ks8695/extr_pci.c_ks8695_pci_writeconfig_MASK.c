
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (int ,unsigned int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,unsigned int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_4,
   unsigned int VAR_5, int VAR_6, int VAR_7, u32 VAR_8)
{
 unsigned long VAR_9;

 if (VAR_3) {
  FUNC_3("write: %d,%08x,%02x,%d: %08x\n",
   VAR_4->number, VAR_5, VAR_6, VAR_7, VAR_8);
 }

 FUNC_2(VAR_4->number, VAR_5, VAR_6);

 switch (VAR_7) {
  case 4:
   FUNC_1(VAR_8, VAR_1 + VAR_0);
   break;
  case 2:
   VAR_9 = FUNC_0(VAR_1 + VAR_0);
   VAR_9 &= ~(0xffff << ((VAR_6 & 2) * 8));
   VAR_9 |= VAR_8 << ((VAR_6 & 2) * 8);

   FUNC_1(VAR_9, VAR_1 + VAR_0);
   break;
  case 1:
   VAR_9 = FUNC_0(VAR_1 + VAR_0);
   VAR_9 &= ~(0xff << ((VAR_6 & 3) * 8));
   VAR_9 |= VAR_8 << ((VAR_6 & 3) * 8);

   FUNC_1(VAR_9, VAR_1 + VAR_0);
   break;
 }

 return VAR_2;
}
