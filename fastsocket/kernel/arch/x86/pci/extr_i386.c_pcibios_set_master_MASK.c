
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int VAR_2 ;

void FUNC_3(struct pci_dev *VAR_3)
{
 u8 VAR_4;
 FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (VAR_4 < 16)
  VAR_4 = (64 <= VAR_2) ? 64 : VAR_2;
 else if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;
 else
  return;
 FUNC_0(VAR_0, &VAR_3->dev, "setting latency timer to %d\n", VAR_4);
 FUNC_2(VAR_3, VAR_1, VAR_4);
}
