
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_2, unsigned int VAR_3,
       u8 VAR_4, int VAR_5, int *VAR_6)
{
 u8 VAR_7;

 while ((*VAR_6)--) {
  FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_4);
  if (VAR_4 < 0x40)
   break;
  VAR_4 &= ~3;
  FUNC_0(VAR_2, VAR_3, VAR_4 + VAR_0,
      &VAR_7);
  if (VAR_7 == 0xff)
   break;
  if (VAR_7 == VAR_5)
   return VAR_4;
  VAR_4 += VAR_1;
 }
 return 0;
}
