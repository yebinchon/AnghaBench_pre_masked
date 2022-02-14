
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int is_busmaster; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2, bool VAR_3)
{
 u16 VAR_4, VAR_5;

 FUNC_1(VAR_2, VAR_0, &VAR_4);
 if (VAR_3)
  VAR_5 = VAR_4 | VAR_1;
 else
  VAR_5 = VAR_4 & ~VAR_1;
 if (VAR_5 != VAR_4) {
  FUNC_0(&VAR_2->dev, "%s bus mastering\n",
   VAR_3 ? "enabling" : "disabling");
  FUNC_2(VAR_2, VAR_0, VAR_5);
 }
 VAR_2->is_busmaster = VAR_3;
}
