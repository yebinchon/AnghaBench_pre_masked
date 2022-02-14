
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpfc_hba {int lpfc_scsi_cmd_iocb_cmpl; int lpfc_rampdown_queue_depth; int lpfc_get_scsi_buf; int lpfc_release_scsi_buf; int lpfc_bg_scsi_prep_dma_buf; int lpfc_scsi_prep_dma_buf; int lpfc_new_scsi_buf; int lpfc_scsi_prep_cmnd; int lpfc_scsi_unprep_dma_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

int
FUNC_1(struct lpfc_hba *VAR_17, uint8_t VAR_18)
{

 VAR_17->lpfc_scsi_unprep_dma_buf = VAR_16;
 VAR_17->lpfc_scsi_prep_cmnd = VAR_13;

 switch (VAR_18) {
 case 129:
  VAR_17->lpfc_new_scsi_buf = VAR_7;
  VAR_17->lpfc_scsi_prep_dma_buf = VAR_14;
  VAR_17->lpfc_bg_scsi_prep_dma_buf = VAR_3;
  VAR_17->lpfc_release_scsi_buf = VAR_10;
  VAR_17->lpfc_get_scsi_buf = VAR_5;
  break;
 case 128:
  VAR_17->lpfc_new_scsi_buf = VAR_8;
  VAR_17->lpfc_scsi_prep_dma_buf = VAR_15;
  VAR_17->lpfc_bg_scsi_prep_dma_buf = VAR_4;
  VAR_17->lpfc_release_scsi_buf = VAR_11;
  VAR_17->lpfc_get_scsi_buf = VAR_6;
  break;
 default:
  FUNC_0(VAR_17, VAR_1, VAR_2,
    "1418 Invalid HBA PCI-device group: 0x%x\n",
    VAR_18);
  return -VAR_0;
  break;
 }
 VAR_17->lpfc_rampdown_queue_depth = VAR_9;
 VAR_17->lpfc_scsi_cmd_iocb_cmpl = VAR_12;
 return 0;
}
