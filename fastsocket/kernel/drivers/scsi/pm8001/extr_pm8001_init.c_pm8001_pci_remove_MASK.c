
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {struct sas_ha_struct* sas_port; struct sas_ha_struct* sas_phy; struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int number_of_intr; int tasklet; int irq; struct sas_ha_struct* outq; TYPE_1__* msix_entries; int shost; int list; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int (* chip_soft_rst ) (struct pm8001_hba_info*) ;int (* interrupt_disable ) (struct pm8001_hba_info*,int) ;} ;
struct TYPE_3__ {int vector; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,struct sas_ha_struct*) ;
 int FUNC_1 (struct sas_ha_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct sas_ha_struct* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int *) ;
 int FUNC_8 (struct pm8001_hba_info*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sas_ha_struct*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct pm8001_hba_info*,int) ;
 int FUNC_13 (struct pm8001_hba_info*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct pci_dev *VAR_1)
{
 struct sas_ha_struct *VAR_2 = FUNC_5(VAR_1);
 struct pm8001_hba_info *VAR_3;
 int VAR_4;
 VAR_3 = VAR_2->lldd_ha;
 FUNC_7(VAR_1, ((void*)0));
 FUNC_10(VAR_2);
 FUNC_9(VAR_3->shost);
 FUNC_2(&VAR_3->list);
 FUNC_11(VAR_3->shost);
 VAR_0->interrupt_disable(VAR_3, 0xFF);
 VAR_0->chip_soft_rst(VAR_3);
 FUNC_0(VAR_3->irq, VAR_2);




 FUNC_8(VAR_3);
 FUNC_1(VAR_2->sas_phy);
 FUNC_1(VAR_2->sas_port);
 FUNC_1(VAR_2);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);
}
