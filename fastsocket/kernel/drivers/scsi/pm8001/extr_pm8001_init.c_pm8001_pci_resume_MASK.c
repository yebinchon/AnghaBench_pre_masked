
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {scalar_t__ chip_id; int number_of_intr; int shost; int tasklet; int name; } ;
struct pci_dev {int current_state; } ;
struct TYPE_2__ {int (* chip_init ) (struct pm8001_hba_info*) ;int (* interrupt_enable ) (struct pm8001_hba_info*,int) ;int (* interrupt_disable ) (struct pm8001_hba_info*,int) ;int (* chip_soft_rst ) (struct pm8001_hba_info*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;
 struct sas_ha_struct* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct pm8001_hba_info*) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct pm8001_hba_info*) ;
 int FUNC_14 (struct pm8001_hba_info*) ;
 int FUNC_15 (struct pm8001_hba_info*,int) ;
 int FUNC_16 (struct pm8001_hba_info*,int) ;
 int FUNC_17 (struct pm8001_hba_info*,int) ;
 int FUNC_18 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_19(struct pci_dev *VAR_4)
{
 struct sas_ha_struct *VAR_5 = FUNC_4(VAR_4);
 struct pm8001_hba_info *VAR_6;
 int VAR_7;
 u8 VAR_8 = 0;
 u32 VAR_9;
 VAR_6 = VAR_5->lldd_ha;
 VAR_9 = VAR_4->current_state;

 FUNC_9("pdev=0x%p, slot=%s, resuming from previous "
  "operating state [D%d]\n", VAR_4, VAR_6->name, VAR_9);

 FUNC_8(VAR_4, VAR_0);
 FUNC_3(VAR_4, VAR_0, 0);
 FUNC_6(VAR_4);
 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7) {
  FUNC_9("slot=%s Enable device failed during resume\n",
         VAR_6->name);
  goto err_out_enable;
 }

 FUNC_7(VAR_4);
 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  goto err_out_disable;


 if (VAR_6->chip_id == VAR_2) {
  VAR_1->chip_soft_rst(VAR_6);
  FUNC_0(VAR_6,
   FUNC_9("chip soft reset successful\n"));
 }
 VAR_7 = VAR_1->chip_init(VAR_6);
 if (VAR_7)
  goto err_out_disable;


 VAR_1->interrupt_disable(VAR_6, 0xFF);

 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7)
  goto err_out_disable;






 VAR_1->interrupt_enable(VAR_6, 0);
 if (VAR_6->chip_id != VAR_2) {
  for (VAR_8 = 1; VAR_8 < VAR_6->number_of_intr; VAR_8++)
   VAR_1->interrupt_enable(VAR_6, VAR_8);
 }
 FUNC_12(VAR_6->shost);
 return 0;

err_out_disable:
 FUNC_11(VAR_6->shost);
 FUNC_1(VAR_4);
err_out_enable:
 return VAR_7;
}
