
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int shost; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pm8001_hba_info*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_6(struct pm8001_hba_info *VAR_4)
{
 struct pci_dev *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->pdev;
intx:

 VAR_6 = FUNC_5(VAR_5->irq, VAR_3, VAR_1,
  VAR_0, FUNC_1(VAR_4->shost));
 return VAR_6;
}
