
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ,unsigned int,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_4,
   unsigned int VAR_5, int VAR_6, int VAR_7, u32 *VAR_8)
{
 FUNC_1(VAR_4->number, VAR_5, VAR_6);

 *VAR_8 = FUNC_0(VAR_1 + VAR_0);

 switch (VAR_7) {
  case 4:
   break;
  case 2:
   *VAR_8 = *VAR_8 >> ((VAR_6 & 2) * 8);
   *VAR_8 &= 0xffff;
   break;
  case 1:
   *VAR_8 = *VAR_8 >> ((VAR_6 & 3) * 8);
   *VAR_8 &= 0xff;
   break;
 }

 if (VAR_3) {
  FUNC_2("read: %d,%08x,%02x,%d: %08x (%08x)\n",
   VAR_4->number, VAR_5, VAR_6, VAR_7, *VAR_8,
   FUNC_0(VAR_1 + VAR_0));
 }

 return VAR_2;
}
