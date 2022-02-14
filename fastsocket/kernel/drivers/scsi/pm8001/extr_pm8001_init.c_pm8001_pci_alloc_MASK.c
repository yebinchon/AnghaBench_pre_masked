
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {size_t chip_id; int logging_level; int tasklet; int iomb_size; int name; scalar_t__ id; struct Scsi_Host* shost; struct sas_ha_struct* sas; int irq; int * chip; int * dev; struct pci_dev* pdev; } ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct Scsi_Host {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 size_t VAR_3 ;
 int FUNC_1 (struct pm8001_hba_info*,struct pci_device_id const*) ;
 int * VAR_4 ;
 int FUNC_2 (struct pm8001_hba_info*) ;
 int VAR_5 ;
 int FUNC_3 (struct pm8001_hba_info*) ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,char*,scalar_t__) ;
 int FUNC_5 (int *,int ,unsigned long) ;

__attribute__((used)) static struct pm8001_hba_info *FUNC_6(struct pci_dev *VAR_7,
     const struct pci_device_id *VAR_8,
    struct Scsi_Host *VAR_9)

{
 struct pm8001_hba_info *VAR_10;
 struct sas_ha_struct *VAR_11 = FUNC_0(VAR_9);


 VAR_10 = VAR_11->lldd_ha;
 if (!VAR_10)
  return ((void*)0);

 VAR_10->pdev = VAR_7;
 VAR_10->dev = &VAR_7->dev;
 VAR_10->chip_id = VAR_8->driver_data;
 VAR_10->chip = &VAR_4[VAR_10->chip_id];
 VAR_10->irq = VAR_7->irq;
 VAR_10->sas = VAR_11;
 VAR_10->shost = VAR_9;
 VAR_10->id = VAR_5++;
 VAR_10->logging_level = 0x01;
 FUNC_4(VAR_10->name, "%s%d", VAR_0, VAR_10->id);

 if (VAR_10->chip_id != VAR_3)
  VAR_10->iomb_size = VAR_2;
 else
  VAR_10->iomb_size = VAR_1;
 FUNC_3(VAR_10);
 if (!FUNC_1(VAR_10, VAR_8))
  return VAR_10;
 FUNC_2(VAR_10);
 return ((void*)0);
}
