
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;

bool FUNC_5(struct pci_dev *VAR_2)
{
 bool VAR_3 = 0;
 u16 VAR_4, VAR_5;

 FUNC_1(VAR_2);

 FUNC_3(VAR_2, VAR_0, &VAR_4);
 FUNC_4(VAR_2, VAR_0,
         VAR_4 ^ VAR_1);
 FUNC_3(VAR_2, VAR_0, &VAR_5);






 if ((VAR_5 ^ VAR_4) & ~VAR_1) {
  FUNC_0(&VAR_2->dev, "Command register changed from "
   "0x%x to 0x%x: driver or hardware bug?\n", VAR_4, VAR_5);
 } else if ((VAR_5 ^ VAR_4) & VAR_1) {
  VAR_3 = 1;
  FUNC_4(VAR_2, VAR_0, VAR_4);
 }

 FUNC_2(VAR_2);
 return VAR_3;
}
