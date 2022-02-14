
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int,int,unsigned int*) ;
 int FUNC_1 (scalar_t__,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_1, unsigned int VAR_2,
   int VAR_3, int VAR_4, u32 VAR_5)
{
 unsigned int VAR_6;

 if (VAR_1->number != 0) return -VAR_0;
 switch (VAR_4) {
 case 1:
  FUNC_0(VAR_1->number, VAR_2, VAR_3&~3, &VAR_6);
  VAR_6 = (VAR_6 & ~(0xff << (8*(VAR_3&3)))) |
      ((0xff&VAR_5) << (8*(VAR_3&3)));
  return FUNC_1(VAR_1->number, VAR_2, VAR_3&~3, VAR_6);
 case 2:
  if (VAR_3&1) return -VAR_0;
  FUNC_0(VAR_1->number, VAR_2, VAR_3&~3, &VAR_6);
  VAR_6 = (VAR_6 & ~(0xffff << (8*(VAR_3&3)))) |
      ((0xffff&VAR_5) << (8*(VAR_3&3)));
  return FUNC_1(VAR_1->number, VAR_2, VAR_3&~3, VAR_6);
 case 4:
  if (VAR_3&3) return -VAR_0;
  return FUNC_1(VAR_1->number, VAR_2, VAR_3, VAR_5);
 }
 return -VAR_0;
}
