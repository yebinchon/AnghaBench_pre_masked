
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* Status; } ;
struct scsi_cmnd {int result; TYPE_1__ SCp; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_8__ {unsigned int BaseAddress; int msgout_len; struct scsi_cmnd* CurrentSC; struct Scsi_Host* Host; } ;
typedef TYPE_2__ nsp32_hw_data ;
typedef int irqreturn_t ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;




 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 unsigned short VAR_19 ;
 unsigned short VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned short VAR_27 ;
 unsigned short VAR_28 ;
 unsigned short VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned short VAR_37 ;
 int VAR_38 ;
 unsigned short VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_1 (struct scsi_cmnd*,unsigned short) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct scsi_cmnd*,unsigned short,unsigned short) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 void* FUNC_7 (unsigned int,int ) ;
 unsigned short FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (unsigned int,int ,int ) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (struct scsi_cmnd*,int ) ;
 int FUNC_18 (unsigned short) ;
 int FUNC_19 (unsigned char) ;
 int FUNC_20 (int ,unsigned long) ;
 int FUNC_21 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_22(int VAR_44, void *VAR_45)
{
 nsp32_hw_data *VAR_46 = VAR_45;
 unsigned int VAR_47 = VAR_46->BaseAddress;
 struct scsi_cmnd *VAR_48 = VAR_46->CurrentSC;
 unsigned short VAR_49, VAR_50, VAR_51;
 unsigned char VAR_52, VAR_53;
 unsigned long VAR_54;
 int VAR_55;
 int VAR_56 = 0;
 struct Scsi_Host *VAR_57 = VAR_46->Host;

 FUNC_20(VAR_57->host_lock, VAR_54);




 VAR_50 = FUNC_8(VAR_47, VAR_23);
 FUNC_2(VAR_31,
    "enter IRQ: %d, IRQstatus: 0x%x", VAR_44, VAR_50);

 if ((VAR_50 & VAR_13) == 0) {
  FUNC_2(VAR_31, "shared interrupt: irq other 0x%x", VAR_50);
  goto out2;
 }
 VAR_56 = 1;
 FUNC_14(VAR_47, VAR_21, VAR_22);

 VAR_52 = FUNC_7(VAR_47, VAR_34);
 VAR_53 = VAR_52 & VAR_2;

 VAR_51 = FUNC_8(VAR_47, VAR_42);
 if ((VAR_50 == 0xffff) && (VAR_51 == 0xffff)) {
  FUNC_4(VAR_25, "card disconnect");
  if (VAR_46->CurrentSC != ((void*)0)) {
   FUNC_4(VAR_25, "clean up current SCSI command");
   VAR_48->result = VAR_7 << 16;
   FUNC_12(VAR_48);
  }
  goto out;
 }


 if (VAR_50 & VAR_20) {
  FUNC_2(VAR_31, "timer stop");
  FUNC_14(VAR_47, VAR_40, VAR_41);
  goto out;
 }


 if (VAR_50 & VAR_19) {
  FUNC_4(VAR_25, "detected someone do bus reset");
  FUNC_3(VAR_46);
  if (VAR_48 != ((void*)0)) {
   VAR_48->result = VAR_8 << 16;
   FUNC_12(VAR_48);
  }
  goto out;
 }

 if (VAR_48 == ((void*)0)) {
  FUNC_4(VAR_26, "SCpnt==NULL this can't be happened");
  FUNC_4(VAR_26, "irq_stat=0x%x trans_stat=0x%x", VAR_50, VAR_51);
  goto out;
 }







 if(VAR_50 & VAR_14) {

  VAR_49 = FUNC_8(VAR_47, VAR_36);
  FUNC_14(VAR_47, VAR_36, 0);


  if (VAR_49 & VAR_37) {
   FUNC_2(VAR_31,
      "selection timeout occurred");

   VAR_48->result = VAR_9 << 16;
   FUNC_12(VAR_48);
   goto out;
  }

  if (VAR_49 & VAR_27) {







   if (!(VAR_49 & VAR_28) &&
        (VAR_46->msgout_len <= 3)) {




    VAR_46->msgout_len = 0;
   };

   FUNC_2(VAR_31, "MsgOut phase processed");
  }

  if ((VAR_49 & VAR_5) &&
      (FUNC_16(VAR_48) > 0) &&
      ((FUNC_8(VAR_47, VAR_10) & VAR_11) != 0)) {
   FUNC_15( "auto+fifo\n");

  }

  if (VAR_49 & (VAR_5 | VAR_6)) {

   FUNC_2(VAR_31,
      "Data in/out phase processed");


   FUNC_2(VAR_31, "BMCNT=0x%lx",
        FUNC_9(VAR_47, VAR_1));
   FUNC_2(VAR_31, "addr=0x%lx",
        FUNC_9(VAR_47, VAR_38));
   FUNC_2(VAR_31, "SACK=0x%lx",
        FUNC_9(VAR_47, VAR_32));
   FUNC_2(VAR_31, "SSACK=0x%lx",
        FUNC_9(VAR_47, VAR_33));

   FUNC_17(VAR_48, 0);
  }




  if (VAR_49 & VAR_28) {
   FUNC_5(VAR_48, VAR_50, VAR_49);
  }




  if (VAR_49 & VAR_29) {
   FUNC_6(VAR_48);
  }




  if (VAR_49 & VAR_3) {
   VAR_55 = FUNC_1(VAR_48, VAR_49);
   if (VAR_55 == VAR_43) {
    goto out;
   }
  }

  if (VAR_49 & VAR_39) {







   VAR_48->result = (int)FUNC_7(VAR_47, VAR_35);
  }

  if (VAR_49 & VAR_12) {

   FUNC_4(VAR_26,
      "AUTO SCSI ILLEGAL PHASE OCCUR!!!!");






   FUNC_10(VAR_46);
   FUNC_13(VAR_46, VAR_30);
   FUNC_11(VAR_46);

  }

  if (VAR_49 & VAR_4) {

   FUNC_2(VAR_31, "Command phase processed");
  }

  if (VAR_49 & VAR_0) {

  }

  FUNC_18(VAR_49);
 }


 if (VAR_50 & VAR_16) {
  FUNC_2(VAR_31, "FIFO IRQ");

  switch(VAR_53) {
  case 130:
   FUNC_2(VAR_31, "fifo/write");



   break;

  case 131:
   FUNC_2(VAR_31, "fifo/read");



   break;

  case 128:
   FUNC_2(VAR_31, "fifo/status");

   VAR_48->SCp.Status = FUNC_7(VAR_47, VAR_35);

   break;
  default:
   FUNC_2(VAR_31, "fifo/other phase");
   FUNC_2(VAR_31, "irq_stat=0x%x trans_stat=0x%x", VAR_50, VAR_51);
   FUNC_19(VAR_53);
   break;
  }

  goto out;
 }


 if (VAR_50 & VAR_18) {
  FUNC_2(VAR_31, "phase change IRQ");

  switch(VAR_53) {
  case 129:
   FUNC_2(VAR_31, "phase chg/msg in");
   FUNC_5(VAR_48, VAR_50, 0);
   break;
  default:
   FUNC_4(VAR_26, "phase chg/other phase?");
   FUNC_4(VAR_26, "irq_stat=0x%x trans_stat=0x%x\n",
      VAR_50, VAR_51);
   FUNC_19(VAR_53);
   break;
  }
  goto out;
 }


 if (VAR_50 & VAR_17) {
  FUNC_2(VAR_31, "PCI IRQ occurred");

 }


 if (VAR_50 & VAR_15) {
  FUNC_4(VAR_24, "Received unexpected BMCNTERR IRQ! ");





 }







 out:

 FUNC_14(VAR_47, VAR_21, 0);

 out2:
 FUNC_21(VAR_57->host_lock, VAR_54);

 FUNC_2(VAR_31, "exit");

 return FUNC_0(VAR_56);
}
