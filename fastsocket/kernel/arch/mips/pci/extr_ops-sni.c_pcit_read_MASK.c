
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
        int VAR_5, u32 * VAR_6)
{
 int VAR_7;






 if (VAR_2->number == 0) {
  FUNC_4(0, 0, 0x68);
  FUNC_3(FUNC_1(0xcfc) | 0xc0000000, 0xcfc);
  if ((VAR_7 = FUNC_4(0, VAR_3, 0)))
   return VAR_7;
  FUNC_3(0xffffffff, 0xcfc);
  FUNC_4(0, 0, 0x68);
  if (FUNC_1(0xcfc) & 0x100000)
   return VAR_0;
 }
 if ((VAR_7 = FUNC_4(VAR_2->number, VAR_3, VAR_4)))
  return VAR_7;

 switch (VAR_5) {
 case 1:
  *VAR_6 = FUNC_0(VAR_1 + (VAR_4 & 3));
  break;
 case 2:
  *VAR_6 = FUNC_2(VAR_1 + (VAR_4 & 2));
  break;
 case 4:
  *VAR_6 = FUNC_1(VAR_1);
  break;
 }
 return 0;
}
