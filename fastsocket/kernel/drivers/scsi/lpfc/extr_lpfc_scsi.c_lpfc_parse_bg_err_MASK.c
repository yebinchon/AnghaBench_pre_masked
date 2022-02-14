
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct sli3_bg_fields {scalar_t__ bgstat; scalar_t__ bghm; } ;
struct scsi_dif_tuple {int dummy; } ;
struct scsi_cmnd {int* cmnd; int result; int* sense_buffer; int request; TYPE_3__* device; } ;
struct lpfc_scsi_buf {struct scsi_cmnd* pCmd; } ;
struct TYPE_4__ {struct sli3_bg_fields sli3_bg; } ;
struct TYPE_5__ {TYPE_1__ unsli3; } ;
struct lpfc_iocbq {TYPE_2__ iocb; } ;
struct lpfc_hba {int bg_apptag_err_cnt; int bg_reftag_err_cnt; int bg_guard_err_cnt; } ;
struct TYPE_6__ {scalar_t__ sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;






 int FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;
 int FUNC_9 (struct lpfc_hba*,struct scsi_cmnd*) ;
 int FUNC_10 (struct lpfc_hba*,struct scsi_cmnd*) ;
 int FUNC_11 (struct lpfc_hba*,int ,int,char*,int,...) ;
 scalar_t__ FUNC_12 (struct lpfc_hba*,struct scsi_cmnd*) ;
 int FUNC_13 (scalar_t__,int*) ;
 int FUNC_14 (int,int*,int ,int,int) ;
 scalar_t__ FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int
FUNC_19(struct lpfc_hba *VAR_12, struct lpfc_scsi_buf *VAR_13,
   struct lpfc_iocbq *VAR_14)
{
 struct scsi_cmnd *VAR_15 = VAR_13->pCmd;
 struct sli3_bg_fields *VAR_16 = &VAR_14->iocb.unsli3.sli3_bg;
 int VAR_17 = 0;
 uint32_t VAR_18 = VAR_16->bghm;
 uint32_t VAR_19 = VAR_16->bgstat;
 uint64_t VAR_20 = 0;

 FUNC_17(&VAR_11);
 if (!VAR_10) {
  FUNC_11(VAR_12, VAR_4, VAR_6, "9070 BLKGRD: Saving"
   " Data for %u blocks to debugfs\n",
    (VAR_15->cmnd[7] << 8 | VAR_15->cmnd[8]));
  FUNC_9(VAR_12, VAR_15);


  if (FUNC_12(VAR_12, VAR_15) ==
    VAR_8) {
   FUNC_11(VAR_12, VAR_4, VAR_6, "9071 BLKGRD: "
    "Saving DIF for %u blocks to debugfs\n",
    (VAR_15->cmnd[7] << 8 | VAR_15->cmnd[8]));
   FUNC_10(VAR_12, VAR_15);
  }

  VAR_10 = 1;
 }
 FUNC_18(&VAR_11);

 if (FUNC_5(VAR_19)) {
  VAR_15->result = FUNC_0(VAR_1, 0);
  FUNC_11(VAR_12, VAR_5, VAR_7 | VAR_6,
    "9072 BLKGRD: Invalid BG Profile in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_15->cmnd[0],
    (unsigned long long)FUNC_15(VAR_15),
    FUNC_1(VAR_15->request), VAR_19, VAR_18);
  VAR_17 = (-1);
  goto out;
 }

 if (FUNC_7(VAR_19)) {
  VAR_15->result = FUNC_0(VAR_1, 0);
  FUNC_11(VAR_12, VAR_5, VAR_7 | VAR_6,
    "9073 BLKGRD: Invalid BG PDIF Block in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_15->cmnd[0],
    (unsigned long long)FUNC_15(VAR_15),
    FUNC_1(VAR_15->request), VAR_19, VAR_18);
  VAR_17 = (-1);
  goto out;
 }

 if (FUNC_3(VAR_19)) {
  VAR_17 = 1;

  FUNC_14(1, VAR_15->sense_buffer, VAR_3,
    0x10, 0x1);
  VAR_15->result = VAR_2 << 24
   | FUNC_0(VAR_0, VAR_9);
  VAR_12->bg_guard_err_cnt++;
  FUNC_11(VAR_12, VAR_5, VAR_7 | VAR_6,
    "9055 BLKGRD: Guard Tag error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_15->cmnd[0],
    (unsigned long long)FUNC_15(VAR_15),
    FUNC_1(VAR_15->request), VAR_19, VAR_18);
 }

 if (FUNC_6(VAR_19)) {
  VAR_17 = 1;

  FUNC_14(1, VAR_15->sense_buffer, VAR_3,
    0x10, 0x3);
  VAR_15->result = VAR_2 << 24
   | FUNC_0(VAR_0, VAR_9);

  VAR_12->bg_reftag_err_cnt++;
  FUNC_11(VAR_12, VAR_5, VAR_7 | VAR_6,
    "9056 BLKGRD: Ref Tag error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_15->cmnd[0],
    (unsigned long long)FUNC_15(VAR_15),
    FUNC_1(VAR_15->request), VAR_19, VAR_18);
 }

 if (FUNC_2(VAR_19)) {
  VAR_17 = 1;

  FUNC_14(1, VAR_15->sense_buffer, VAR_3,
    0x10, 0x2);
  VAR_15->result = VAR_2 << 24
   | FUNC_0(VAR_0, VAR_9);

  VAR_12->bg_apptag_err_cnt++;
  FUNC_11(VAR_12, VAR_5, VAR_7 | VAR_6,
    "9061 BLKGRD: App Tag error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_15->cmnd[0],
    (unsigned long long)FUNC_15(VAR_15),
    FUNC_1(VAR_15->request), VAR_19, VAR_18);
 }

 if (FUNC_4(VAR_19)) {






  VAR_15->sense_buffer[7] = 0xc;
  VAR_15->sense_buffer[8] = 0;
  VAR_15->sense_buffer[9] = 0xa;
  VAR_15->sense_buffer[10] = 0x80;


  switch (FUNC_16(VAR_15)) {
  case 133:
  case 128:
   VAR_18 /= VAR_15->device->sector_size;
   break;
  case 131:
  case 130:
  case 132:
  case 129:
   VAR_18 /= (VAR_15->device->sector_size +
    sizeof(struct scsi_dif_tuple));
   break;
  }

  VAR_20 = FUNC_15(VAR_15);
  VAR_20 += VAR_18;


  FUNC_13(VAR_20, &VAR_15->sense_buffer[12]);
 }

 if (!VAR_17) {

  FUNC_11(VAR_12, VAR_5, VAR_7 | VAR_6,
    "9057 BLKGRD: Unknown error in cmd"
    " 0x%x lba 0x%llx blk cnt 0x%x "
    "bgstat=x%x bghm=x%x\n", VAR_15->cmnd[0],
    (unsigned long long)FUNC_15(VAR_15),
    FUNC_1(VAR_15->request), VAR_19, VAR_18);


  FUNC_8(VAR_12, VAR_13);
 }
out:
 return VAR_17;
}
