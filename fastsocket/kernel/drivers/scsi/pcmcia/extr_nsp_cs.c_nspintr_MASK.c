
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int Message; int Status; int phase; int have_data_in; } ;
struct scsi_cmnd {int result; int cmd_len; int* cmnd; TYPE_3__ SCp; TYPE_1__* device; } ;
struct TYPE_14__ {TYPE_4__* host; } ;
typedef TYPE_5__ scsi_info_t ;
struct TYPE_15__ {unsigned int BaseAddress; scalar_t__ TimerCount; scalar_t__ SelectionTimeOut; int MsgLen; int* MsgBuffer; TYPE_2__* Sync; struct scsi_cmnd* CurrentSC; } ;
typedef TYPE_6__ nsp_hw_data ;
typedef int irqreturn_t ;
struct TYPE_13__ {scalar_t__ hostdata; } ;
struct TYPE_11__ {unsigned int SyncNegotiation; int SyncPeriod; int SyncOffset; } ;
struct TYPE_10__ {unsigned char id; unsigned char lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;







 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,unsigned char) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 unsigned char VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 unsigned char VAR_38 ;
 int VAR_39 ;
 void* VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

 int VAR_43 ;

 int VAR_44 ;
 unsigned char VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 unsigned char VAR_50 ;
 unsigned int VAR_51 ;
 unsigned int VAR_52 ;
 unsigned int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (int ,char*,...) ;
 void* FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int,int ,int) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 unsigned char FUNC_13 (unsigned int,int ) ;
 scalar_t__ FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_cmnd*,int) ;
 int FUNC_17 (unsigned int,int ,int) ;
 int FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (TYPE_6__*) ;
 int FUNC_20 (int) ;

__attribute__((used)) static irqreturn_t FUNC_21(int VAR_56, void *VAR_57)
{
 unsigned int VAR_58;
 unsigned char VAR_59, VAR_60, VAR_61;
 struct scsi_cmnd *VAR_62;
 unsigned char VAR_63, VAR_64;
 unsigned int *VAR_65;
 int VAR_66, VAR_67;
 nsp_hw_data *VAR_68;





 if ( VAR_57 != ((void*)0) &&
     ((scsi_info_t *)VAR_57)->host != ((void*)0) ) {
  scsi_info_t *VAR_69 = (scsi_info_t *)VAR_57;

  VAR_68 = (nsp_hw_data *)VAR_69->host->hostdata;
 } else {
  FUNC_4(VAR_36, "host data wrong");
  return VAR_29;
 }



 VAR_58 = VAR_68->BaseAddress;





 FUNC_17(VAR_58, VAR_17, VAR_19);
 VAR_59 = FUNC_13(VAR_58, VAR_23);

 if ((VAR_59 == 0xff) || ((VAR_59 & VAR_25) == 0)) {
  FUNC_17(VAR_58, VAR_17, 0);

  return VAR_29;
 }





 VAR_61 = FUNC_5(VAR_58, VAR_47);
 if((VAR_59 & VAR_26) != 0) {
  VAR_60 = FUNC_5(VAR_58, VAR_22);
 } else {
  VAR_60 = 0;
 }







 if (VAR_68->TimerCount != 0) {

  FUNC_6(VAR_58, VAR_54, 0);
  FUNC_6(VAR_58, VAR_54, 0);
  VAR_68->TimerCount = 0;
 }

 if ((VAR_59 & VAR_25) == VAR_27 &&
     VAR_68->SelectionTimeOut == 0) {

  FUNC_17(VAR_58, VAR_17, VAR_21);
  return VAR_28;
 }

 FUNC_17(VAR_58, VAR_17, VAR_21 | VAR_18);

 if ((VAR_59 & VAR_26) &&
     (VAR_60 & VAR_50)) {
  FUNC_9(VAR_31, "bus reset (power off?)");

  FUNC_18(VAR_68);
  FUNC_2(VAR_68);

  if(VAR_68->CurrentSC != ((void*)0)) {
   VAR_62 = VAR_68->CurrentSC;
   VAR_62->result = (VAR_12 << 16) |
             ((VAR_62->SCp.Message & 0xff) << 8) |
             ((VAR_62->SCp.Status & 0xff) << 0);
   FUNC_15(VAR_62);
  }
  return VAR_28;
 }

 if (VAR_68->CurrentSC == ((void*)0)) {
  FUNC_9(VAR_31, "CurrentSC==NULL irq_status=0x%x phase=0x%x irq_phase=0x%x this can't be happen. reset everything", VAR_59, VAR_61, VAR_60);
  FUNC_18(VAR_68);
  FUNC_2(VAR_68);
  return VAR_28;
 }

 VAR_62 = VAR_68->CurrentSC;
 VAR_63 = VAR_62->device->id;
 VAR_64 = VAR_62->device->lun;
 VAR_65 = &(VAR_68->Sync[VAR_63].SyncNegotiation);




 if (VAR_59 & VAR_26) {
  if (VAR_60 & VAR_45) {
   FUNC_4(VAR_36, "reselect");
   FUNC_17(VAR_58, VAR_17, VAR_20);
   if (FUNC_14(VAR_62) != VAR_14) {
    return VAR_28;
   }
  }

  if ((VAR_60 & (VAR_38 | VAR_32)) == 0) {
   return VAR_28;
  }
 }



 switch(VAR_62->SCp.phase) {
 case 128:

  if ((VAR_61 & VAR_3) == 0) {

   if (VAR_68->SelectionTimeOut >= VAR_37) {
    FUNC_4(VAR_36, "selection time out");
    VAR_68->SelectionTimeOut = 0;
    FUNC_6(VAR_58, VAR_46, 0);

    VAR_62->result = VAR_13 << 16;
    FUNC_15(VAR_62);

    return VAR_28;
   }
   VAR_68->SelectionTimeOut += 1;
   FUNC_16(VAR_62, 1000/51);
   return VAR_28;
  }



  VAR_68->SelectionTimeOut = 0;
  VAR_62->SCp.phase = VAR_43;
  FUNC_6(VAR_58, VAR_46, VAR_49);
  FUNC_20(1);
  FUNC_6(VAR_58, VAR_46, VAR_49 | VAR_1 | VAR_0);
  return VAR_28;

  break;

 case 129:


  if ((VAR_61 & VAR_4) != 133) {

   VAR_62->result = VAR_9 << 16;
   FUNC_15(VAR_62);
   return VAR_28;
  }

 default:
  if ((VAR_59 & (VAR_26 | VAR_24)) == 0) {
   return VAR_28;
  }
  break;
 }







 if (((VAR_62->SCp.phase == VAR_41) || (VAR_62->SCp.phase == VAR_42)) &&
     (VAR_60 & VAR_32) != 0 ) {
  FUNC_4(VAR_36, "normal disconnect irq_status=0x%x, phase=0x%x, irq_phase=0x%x", VAR_59, VAR_61, VAR_60);



  if (VAR_62->SCp.Message == VAR_33) {
   VAR_62->result = (VAR_11 << 16) |
     ((VAR_62->SCp.Message & 0xff) << 8) |
     ((VAR_62->SCp.Status & 0xff) << 0);
   FUNC_4(VAR_36, "command complete result=0x%x", VAR_62->result);
   FUNC_15(VAR_62);

   return VAR_28;
  }

  return VAR_28;
 }



 if (VAR_61 == 0) {
  FUNC_9(VAR_30, "unexpected bus free. irq_status=0x%x, phase=0x%x, irq_phase=0x%x", VAR_59, VAR_61, VAR_60);

  *VAR_65 = VAR_51;
  VAR_62->result = VAR_10 << 16;
  FUNC_15(VAR_62);
  return VAR_28;
 }

 switch (VAR_61 & VAR_4) {
 case 136:
  FUNC_4(VAR_36, "BUSPHASE_COMMAND");
  if ((VAR_61 & VAR_5) == 0) {
   FUNC_4(VAR_36, "REQ == 0");
   return VAR_28;
  }

  VAR_62->SCp.phase = VAR_39;

  FUNC_10(VAR_62);


  FUNC_4(VAR_36, "cmd_len=%d", VAR_62->cmd_len);
  FUNC_6(VAR_58, VAR_7, VAR_6);
  for (VAR_66 = 0; VAR_66 < VAR_62->cmd_len; VAR_66++) {
   FUNC_6(VAR_58, VAR_8, VAR_62->cmnd[VAR_66]);
  }
  FUNC_6(VAR_58, VAR_7, VAR_6 | VAR_2);
  break;

 case 134:
  FUNC_4(VAR_36, "BUSPHASE_DATA_OUT");

  VAR_62->SCp.phase = VAR_40;
  VAR_62->SCp.have_data_in = VAR_16;

  FUNC_12(VAR_62);

  break;

 case 135:
  FUNC_4(VAR_36, "BUSPHASE_DATA_IN");

  VAR_62->SCp.phase = VAR_40;
  VAR_62->SCp.have_data_in = VAR_15;

  FUNC_11(VAR_62);

  break;

 case 130:
  FUNC_3(VAR_62);
  FUNC_4(VAR_36, "BUSPHASE_STATUS");

  VAR_62->SCp.phase = VAR_44;

  VAR_62->SCp.Status = FUNC_5(VAR_58, VAR_48);
  FUNC_4(VAR_36, "message=0x%x status=0x%x", VAR_62->SCp.Message, VAR_62->SCp.Status);

  break;

 case 132:
  FUNC_4(VAR_36, "BUSPHASE_MESSAGE_OUT");
  if ((VAR_61 & VAR_5) == 0) {
   goto timer_out;
  }

  VAR_62->SCp.phase = VAR_42;



  VAR_68->MsgLen = VAR_66 = 0;
  VAR_68->MsgBuffer[VAR_66] = FUNC_0(VAR_55, VAR_64); VAR_66++;

  if (*VAR_65 == VAR_52) {
   VAR_68->Sync[VAR_63].SyncPeriod = 0;
   VAR_68->Sync[VAR_63].SyncOffset = 0;


   VAR_68->MsgBuffer[VAR_66] = VAR_34; VAR_66++;
   VAR_68->MsgBuffer[VAR_66] = 3; VAR_66++;
   VAR_68->MsgBuffer[VAR_66] = VAR_35; VAR_66++;
   VAR_68->MsgBuffer[VAR_66] = 0x0c; VAR_66++;
   VAR_68->MsgBuffer[VAR_66] = 15; VAR_66++;

  }
  VAR_68->MsgLen = VAR_66;

  FUNC_1(VAR_62);
  FUNC_19(VAR_68);
  FUNC_8(VAR_62);
  break;

 case 133:
  FUNC_3(VAR_62);
  FUNC_4(VAR_36, "BUSPHASE_MESSAGE_IN");
  if ((VAR_61 & VAR_5) == 0) {
   goto timer_out;
  }

  VAR_62->SCp.phase = VAR_41;
  FUNC_7(VAR_62);


  if (*VAR_65 == VAR_52) {


   if (VAR_68->MsgLen >= 5 &&
       VAR_68->MsgBuffer[0] == VAR_34 &&
       VAR_68->MsgBuffer[1] == 3 &&
       VAR_68->MsgBuffer[2] == VAR_35 ) {
    VAR_68->Sync[VAR_63].SyncPeriod = VAR_68->MsgBuffer[3];
    VAR_68->Sync[VAR_63].SyncOffset = VAR_68->MsgBuffer[4];

    *VAR_65 = VAR_53;
   } else {
    VAR_68->Sync[VAR_63].SyncPeriod = 0;
    VAR_68->Sync[VAR_63].SyncOffset = 0;
    *VAR_65 = VAR_51;
   }
   FUNC_1(VAR_62);
  }



  VAR_67 = -1;
  for (VAR_66 = 0; VAR_66 < VAR_68->MsgLen; VAR_66++) {
   VAR_67 = VAR_68->MsgBuffer[VAR_66];
   if (VAR_68->MsgBuffer[VAR_66] == VAR_34) {
    VAR_66 += (1 + VAR_68->MsgBuffer[VAR_66+1]);
   }
  }
  VAR_62->SCp.Message = VAR_67;

  FUNC_4(VAR_36, "message=0x%x len=%d", VAR_62->SCp.Message, VAR_68->MsgLen);
  FUNC_19(VAR_68);

  break;

 case 131:
 default:
  FUNC_4(VAR_36, "BUSPHASE other");

  break;
 }


 return VAR_28;

timer_out:
 FUNC_16(VAR_62, 1000/102);
 return VAR_28;
}
