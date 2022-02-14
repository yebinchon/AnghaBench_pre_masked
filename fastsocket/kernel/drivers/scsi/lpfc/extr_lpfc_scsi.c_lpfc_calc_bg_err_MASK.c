
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_dif_tuple {scalar_t__ app_tag; int ref_tag; scalar_t__ guard_tag; } ;
struct scsi_cmnd {int result; int sense_buffer; TYPE_1__* device; } ;
struct scatterlist {int length; } ;
struct lpfc_scsi_buf {int prot_seg_cnt; struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {int bg_apptag_err_cnt; int bg_reftag_err_cnt; int bg_guard_err_cnt; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct lpfc_hba*,int ,int,char*,unsigned long,scalar_t__,scalar_t__) ;
 int FUNC_7 (int,int ,int ,int,int) ;
 scalar_t__ FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (int ) ;
 struct scatterlist* FUNC_11 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_12 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_13 (struct scatterlist*) ;
 scalar_t__ FUNC_14 (struct scatterlist*) ;

void
FUNC_15(struct lpfc_hba *VAR_13, struct lpfc_scsi_buf *VAR_14)
{
 struct scatterlist *VAR_15;
 struct scatterlist *VAR_16;
 struct scsi_cmnd *VAR_17 = VAR_14->pCmd;
 struct scsi_dif_tuple *VAR_18 = ((void*)0);
 uint8_t *VAR_19 = ((void*)0);
 uint16_t VAR_20, VAR_21;
 uint16_t VAR_22, VAR_23;
 uint32_t VAR_24, VAR_25;
 int VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32, VAR_33;
 uint16_t VAR_34;
 unsigned VAR_35;

 VAR_28 = VAR_1;
 VAR_34 = 0;
 VAR_20 = 0;


 VAR_26 = FUNC_9(VAR_17);
 if ((VAR_26 == VAR_11) ||
     (VAR_26 == VAR_12) ||
     (VAR_26 == VAR_10))
  goto out;


 VAR_31 = 1;
 VAR_32 = 0;
 VAR_33 = 0;


 VAR_15 = FUNC_11(VAR_17);
 VAR_27 = VAR_14->prot_seg_cnt;

 if (VAR_15 && VAR_27) {





  VAR_16 = FUNC_12(VAR_17);
  VAR_35 = FUNC_4(VAR_17);
  VAR_19 = (uint8_t *)FUNC_14(VAR_16);
  VAR_30 = VAR_16->length;
  if ((VAR_30 & (VAR_35 - 1)) == 0)
   VAR_33 = 1;
  VAR_21 = FUNC_10(VAR_17->device->host);

  VAR_18 = (struct scsi_dif_tuple *)FUNC_14(VAR_15);
  VAR_24 = (uint32_t)FUNC_8(VAR_17);
  VAR_22 = VAR_18->app_tag;
  VAR_29 = VAR_15->length;
  while (VAR_18 && VAR_27) {
   while (VAR_29) {





    if ((VAR_18->ref_tag == 0xffffffff) ||
        (VAR_18->app_tag == 0xffff)) {
     VAR_24++;
     goto skipit;
    }


    if (VAR_33) {
     VAR_20 = VAR_18->guard_tag;
     if (FUNC_5(VAR_17))
      VAR_34 = FUNC_3(VAR_19,
           VAR_35);
     else
      VAR_34 = FUNC_2(VAR_19,
          VAR_35);
     if ((VAR_20 != VAR_34)) {
      VAR_28 = VAR_1;
      goto out;
     }
    }


    VAR_25 = FUNC_1(VAR_18->ref_tag);
    if (VAR_31 && (VAR_25 != VAR_24)) {
     VAR_28 = VAR_2;
     goto out;
    }
    VAR_24++;


    VAR_23 = VAR_18->app_tag;
    if (VAR_32 && (VAR_23 != VAR_22)) {
     VAR_28 = VAR_0;
     goto out;
    }
skipit:
    VAR_29 -= sizeof(struct scsi_dif_tuple);
    if (VAR_29 < 0)
     VAR_29 = 0;
    VAR_18++;

    VAR_19 += VAR_35;
    VAR_30 -= VAR_35;






    if (VAR_33 && (VAR_30 == 0)) {
     VAR_33 = 0;
     VAR_16 = FUNC_13(VAR_16);
     if (!VAR_16)
      goto out;

     VAR_19 = (uint8_t *)FUNC_14(VAR_16);
     VAR_30 = VAR_16->length;
     if ((VAR_30 & (VAR_35 - 1)) == 0)
      VAR_33 = 1;
    }
   }


   VAR_15 = FUNC_13(VAR_15);
   if (VAR_15) {
    VAR_18 = (struct scsi_dif_tuple *)FUNC_14(VAR_15);
    VAR_29 = VAR_15->length;
   } else {
    VAR_18 = ((void*)0);
   }
   VAR_27--;
  }
 }
out:
 if (VAR_28 == VAR_1) {
  FUNC_7(1, VAR_17->sense_buffer, VAR_5,
     0x10, 0x1);
  VAR_17->result = VAR_4 << 24
   | FUNC_0(VAR_3, VAR_9);
  VAR_13->bg_guard_err_cnt++;
  FUNC_6(VAR_13, VAR_6, VAR_8 | VAR_7,
    "9069 BLKGRD: LBA %lx grd_tag error %x != %x\n",
    (unsigned long)FUNC_8(VAR_17),
    VAR_34, VAR_20);

 } else if (VAR_28 == VAR_2) {
  FUNC_7(1, VAR_17->sense_buffer, VAR_5,
     0x10, 0x3);
  VAR_17->result = VAR_4 << 24
   | FUNC_0(VAR_3, VAR_9);

  VAR_13->bg_reftag_err_cnt++;
  FUNC_6(VAR_13, VAR_6, VAR_8 | VAR_7,
    "9066 BLKGRD: LBA %lx ref_tag error %x != %x\n",
    (unsigned long)FUNC_8(VAR_17),
    VAR_25, VAR_24);

 } else if (VAR_28 == VAR_0) {
  FUNC_7(1, VAR_17->sense_buffer, VAR_5,
     0x10, 0x2);
  VAR_17->result = VAR_4 << 24
   | FUNC_0(VAR_3, VAR_9);

  VAR_13->bg_apptag_err_cnt++;
  FUNC_6(VAR_13, VAR_6, VAR_8 | VAR_7,
    "9041 BLKGRD: LBA %lx app_tag error %x != %x\n",
    (unsigned long)FUNC_8(VAR_17),
    VAR_23, VAR_22);
 }
}
