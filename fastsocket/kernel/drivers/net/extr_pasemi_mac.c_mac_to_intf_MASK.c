
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int devfn; } ;
struct pasemi_mac {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct pasemi_mac *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->pdev;
 u32 VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = VAR_6->devfn;

 VAR_7 = FUNC_0(VAR_0);
 VAR_8 = (VAR_7 & VAR_3) >> VAR_4;
 VAR_9 = (VAR_7 & VAR_1) >> VAR_2;
 for (VAR_10 = 0; VAR_10 < (VAR_8+3)/4; VAR_10++) {
  VAR_7 = FUNC_0(VAR_9+4*VAR_10);
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   if (((VAR_7 >> (8*VAR_11)) & 0xff) == VAR_12)
    return VAR_10*4 + VAR_11;
  }
 }
 return -1;
}
