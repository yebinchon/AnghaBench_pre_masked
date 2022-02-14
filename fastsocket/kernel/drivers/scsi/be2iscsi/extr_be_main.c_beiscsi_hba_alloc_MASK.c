
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dma_mask; int dev; } ;
struct beiscsi_hba {int interface_handle; struct Scsi_Host* shost; TYPE_1__* pcidev; } ;
struct Scsi_Host {int transportt; int max_lun; int max_cmd_len; scalar_t__ max_channel; int max_id; int dma_boundary; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct beiscsi_hba* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct beiscsi_hba*,int ,int) ;
 TYPE_1__* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct pci_dev*,struct beiscsi_hba*) ;

__attribute__((used)) static struct beiscsi_hba *FUNC_9(struct pci_dev *VAR_5)
{
 struct beiscsi_hba *VAR_6;
 struct Scsi_Host *VAR_7;

 VAR_7 = FUNC_2(&VAR_4, sizeof(*VAR_6), 0);
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev,
   "beiscsi_hba_alloc - iscsi_host_alloc failed\n");
  return ((void*)0);
 }
 VAR_7->dma_boundary = VAR_5->dma_mask;
 VAR_7->max_id = VAR_0;
 VAR_7->max_channel = 0;
 VAR_7->max_cmd_len = VAR_1;
 VAR_7->max_lun = VAR_2;
 VAR_7->transportt = VAR_3;
 VAR_6 = FUNC_4(VAR_7);
 FUNC_5(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->shost = VAR_7;
 VAR_6->pcidev = FUNC_6(VAR_5);
 FUNC_8(VAR_5, VAR_6);
 VAR_6->interface_handle = 0xFFFFFFFF;

 if (FUNC_1(VAR_7, &VAR_6->pcidev->dev))
  goto free_devices;

 return VAR_6;

free_devices:
 FUNC_7(VAR_6->pcidev);
 FUNC_3(VAR_6->shost);
 return ((void*)0);
}
