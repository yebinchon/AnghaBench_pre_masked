
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int (* transport ) (struct scsi_cmnd*,struct us_data*) ;scalar_t__ protocol; int fflags; scalar_t__ subclass; int dflags; int (* transport_reset ) (struct us_data*) ;int dev_mutex; struct scsi_cmnd* srb; } ;
struct scsi_eh_save {int dummy; } ;
struct scsi_cmnd {int result; scalar_t__ sc_data_direction; int* cmnd; int cmd_len; int* sense_buffer; scalar_t__ underflow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,...) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,struct scsi_eh_save*,int *,int ,int) ;
 int FUNC_7 (struct scsi_cmnd*,struct scsi_eh_save*) ;
 scalar_t__ FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct scsi_cmnd*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct scsi_cmnd*,struct us_data*) ;
 int FUNC_14 (struct scsi_cmnd*,struct us_data*) ;
 int FUNC_15 (struct us_data*) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct us_data*) ;
 int FUNC_19 (struct us_data*) ;
 int FUNC_20 (struct us_data*) ;
 int FUNC_21 (int,int,int) ;

void FUNC_22(struct scsi_cmnd *VAR_29, struct us_data *VAR_30)
{
 int VAR_31;
 int VAR_32;


 FUNC_10(VAR_29, 0);
 VAR_32 = VAR_30->transport(VAR_29, VAR_30);




 if (FUNC_16(VAR_19, &VAR_30->dflags)) {
  FUNC_0("-- command was aborted\n");
  VAR_29->result = VAR_2 << 16;
  goto Handle_Errors;
 }


 if (VAR_32 == VAR_13) {
  FUNC_0("-- transport indicates error, resetting\n");
  VAR_29->result = VAR_3 << 16;
  goto Handle_Errors;
 }


 if (VAR_32 == VAR_16) {
  VAR_29->result = VAR_11;
  FUNC_2(VAR_30, VAR_29);
  return;
 }

 VAR_29->result = VAR_12;






 VAR_31 = 0;







 if ((VAR_30->protocol == VAR_23 || VAR_30->protocol == VAR_24) &&
   VAR_29->sc_data_direction != VAR_4) {
  FUNC_0("-- CB transport device requiring auto-sense\n");
  VAR_31 = 1;
 }






 if (VAR_32 == VAR_14) {
  FUNC_0("-- transport indicates command failure\n");
  VAR_31 = 1;
 }







 if (FUNC_17((VAR_29->cmnd[0] == VAR_1 || VAR_29->cmnd[0] == VAR_0) &&
     VAR_32 == VAR_15 &&
     !(VAR_30->fflags & VAR_21) &&
     !(VAR_30->fflags & VAR_20) &&
     !(VAR_29->cmnd[2] & 0x20))) {
  FUNC_0("-- SAT supported, increasing auto-sense\n");
  VAR_30->fflags |= VAR_21;
 }





 if ((FUNC_8(VAR_29) > 0) &&
     !((VAR_29->cmnd[0] == VAR_10) ||
       (VAR_29->cmnd[0] == VAR_6) ||
       (VAR_29->cmnd[0] == VAR_8) ||
       (VAR_29->cmnd[0] == VAR_7) ||
       (VAR_29->cmnd[0] == VAR_9))) {
  FUNC_0("-- unexpectedly short transfer\n");
 }


 if (VAR_31) {
  int VAR_33;
  struct scsi_eh_save VAR_34;
  int VAR_35 = VAR_28;


  if (VAR_30->fflags & VAR_21)
   VAR_35 = ~0;
Retry_Sense:
  FUNC_0("Issuing auto-REQUEST_SENSE\n");

  FUNC_6(VAR_29, &VAR_34, ((void*)0), 0, VAR_35);


  if (VAR_30->subclass == VAR_26 || VAR_30->subclass == VAR_27 ||
    VAR_30->subclass == VAR_25)
   VAR_29->cmd_len = 6;
  else
   VAR_29->cmd_len = 12;


  FUNC_10(VAR_29, 0);
  VAR_33 = VAR_30->transport(VAR_30->srb, VAR_30);


  FUNC_7(VAR_29, &VAR_34);

  if (FUNC_16(VAR_19, &VAR_30->dflags)) {
   FUNC_0("-- auto-sense aborted\n");
   VAR_29->result = VAR_2 << 16;


   if (VAR_35 != VAR_28) {
    VAR_30->fflags &= ~VAR_21;
    VAR_30->fflags |= VAR_20;
   }
   goto Handle_Errors;
  }






  if (VAR_33 == VAR_14 &&
    VAR_35 != VAR_28) {
   FUNC_0("-- auto-sense failure, retry small sense\n");
   VAR_35 = VAR_28;
   VAR_30->fflags &= ~VAR_21;
   VAR_30->fflags |= VAR_20;
   goto Retry_Sense;
  }


  if (VAR_33 != VAR_15) {
   FUNC_0("-- auto-sense failure\n");





   VAR_29->result = VAR_3 << 16;
   if (!(VAR_30->fflags & VAR_22))
    goto Handle_Errors;
   return;
  }





  if (VAR_29->sense_buffer[7] > (VAR_28 - 8) &&
      !(VAR_30->fflags & VAR_21) &&
      !(VAR_30->fflags & VAR_20) &&
      (VAR_29->sense_buffer[0] & 0x7C) == 0x70) {
   FUNC_0("-- SANE_SENSE support enabled\n");
   VAR_30->fflags |= VAR_21;




   FUNC_0("-- Sense data truncated to %i from %i\n",
             VAR_28,
             VAR_29->sense_buffer[7] + 8);
   VAR_29->sense_buffer[7] = (VAR_28 - 8);
  }

  FUNC_0("-- Result from auto-sense is %d\n", VAR_33);
  FUNC_0("-- code: 0x%x, key: 0x%x, ASC: 0x%x, ASCQ: 0x%x\n",
     VAR_29->sense_buffer[0],
     VAR_29->sense_buffer[2] & 0xf,
     VAR_29->sense_buffer[12],
     VAR_29->sense_buffer[13]);
  VAR_29->result = VAR_11;





  if (
    (VAR_29->sense_buffer[2] & 0xaf) == 0 &&

    VAR_29->sense_buffer[12] == 0 &&
    VAR_29->sense_buffer[13] == 0) {





   if (VAR_32 == VAR_15) {
    VAR_29->result = VAR_12;
    VAR_29->sense_buffer[0] = 0x0;





   } else {
    VAR_29->result = VAR_3 << 16;
    VAR_29->sense_buffer[2] = VAR_5;
   }
  }
 }


 if ((VAR_29->result == VAR_12 || VAR_29->sense_buffer[2] == 0) &&
   FUNC_5(VAR_29) - FUNC_8(VAR_29) < VAR_29->underflow)
  VAR_29->result = VAR_3 << 16;

 FUNC_2(VAR_30, VAR_29);
 return;




  Handle_Errors:



 FUNC_9(FUNC_18(VAR_30));
 FUNC_12(VAR_18, &VAR_30->dflags);
 FUNC_1(VAR_17, &VAR_30->dflags);
 FUNC_11(FUNC_18(VAR_30));



 FUNC_4(&VAR_30->dev_mutex);
 VAR_32 = FUNC_19(VAR_30);
 FUNC_3(&VAR_30->dev_mutex);

 if (VAR_32 < 0) {
  FUNC_9(FUNC_18(VAR_30));
  FUNC_20(VAR_30);
  FUNC_11(FUNC_18(VAR_30));
  VAR_30->transport_reset(VAR_30);
 }
 FUNC_1(VAR_18, &VAR_30->dflags);
 FUNC_2(VAR_30, VAR_29);
}
