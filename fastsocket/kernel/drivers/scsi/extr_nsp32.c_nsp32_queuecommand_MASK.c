
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {char* ptr; scalar_t__ buffers_residual; int * buffer; int this_residual; scalar_t__ Message; int Status; } ;
struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__* device; TYPE_2__ SCp; int cmd_len; int * cmnd; } ;
struct TYPE_14__ {int sync_flag; int ackwidth; int syncreg; int limit_entry; } ;
typedef TYPE_4__ nsp32_target ;
struct TYPE_15__ {int msgin03; scalar_t__ save_datp; struct scsi_cmnd* SCpnt; } ;
typedef TYPE_5__ nsp32_lunt ;
struct TYPE_16__ {size_t cur_id; size_t cur_lun; TYPE_4__* cur_target; TYPE_4__* target; TYPE_5__* cur_lunt; TYPE_5__** lunt; scalar_t__ msgin_len; scalar_t__ msgout_len; struct scsi_cmnd* CurrentSC; } ;
typedef TYPE_6__ nsp32_hw_data ;
struct TYPE_13__ {size_t id; size_t lun; TYPE_1__* host; } ;
struct TYPE_11__ {size_t this_id; scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,unsigned char,unsigned char) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_4__*,unsigned char*,unsigned char*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 size_t FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*,int ) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (struct scsi_cmnd*) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static int FUNC_16(struct scsi_cmnd *VAR_16, void (*VAR_17)(struct scsi_cmnd *))
{
 nsp32_hw_data *VAR_18 = (nsp32_hw_data *)VAR_16->device->host->hostdata;
 nsp32_target *VAR_19;
 nsp32_lunt *VAR_20;
 int VAR_21;

 FUNC_2(VAR_8,
    "enter. target: 0x%x LUN: 0x%x cmnd: 0x%x cmndlen: 0x%x "
    "use_sg: 0x%x reqbuf: 0x%lx reqlen: 0x%x",
    VAR_16->device->id, VAR_16->device->lun, VAR_16->cmnd[0], VAR_16->cmd_len,
    FUNC_13(VAR_16), FUNC_14(VAR_16), FUNC_11(VAR_16));

 if (VAR_18->CurrentSC != ((void*)0)) {
  FUNC_3(VAR_6, "Currentsc != NULL. Cancel this command request");
  VAR_18->CurrentSC = ((void*)0);
  VAR_16->result = VAR_4 << 16;
  VAR_17(VAR_16);
  return 0;
 }


 if (FUNC_10(VAR_16) == VAR_16->device->host->this_id) {
  FUNC_2(VAR_8, "terget==host???");
  VAR_16->result = VAR_2 << 16;
  VAR_17(VAR_16);
  return 0;
 }


 if (VAR_16->device->lun >= VAR_7) {
  FUNC_2(VAR_8, "no more lun");
  VAR_16->result = VAR_2 << 16;
  VAR_17(VAR_16);
  return 0;
 }

 FUNC_15(VAR_16);

 VAR_16->scsi_done = VAR_17;
 VAR_18->CurrentSC = VAR_16;
 VAR_16->SCp.Status = VAR_1;
 VAR_16->SCp.Message = 0;
 FUNC_12(VAR_16, FUNC_11(VAR_16));

 VAR_16->SCp.ptr = (char *)FUNC_14(VAR_16);
 VAR_16->SCp.this_residual = FUNC_11(VAR_16);
 VAR_16->SCp.buffer = ((void*)0);
 VAR_16->SCp.buffers_residual = 0;


 VAR_18->msgout_len = 0;
 VAR_18->msgin_len = 0;
 VAR_20 = &(VAR_18->lunt[VAR_16->device->id][VAR_16->device->lun]);
 VAR_20->SCpnt = VAR_16;
 VAR_20->save_datp = 0;
 VAR_20->msgin03 = VAR_5;
 VAR_18->cur_lunt = VAR_20;
 VAR_18->cur_id = VAR_16->device->id;
 VAR_18->cur_lun = VAR_16->device->lun;

 VAR_21 = FUNC_9(VAR_16);
 if (VAR_21 == VAR_5) {
  FUNC_3(VAR_6, "SGT fail");
  VAR_16->result = VAR_3 << 16;
  FUNC_4(VAR_16);
  return 0;
 }


 FUNC_0(VAR_16);






 VAR_19 = &VAR_18->target[FUNC_10(VAR_16)];
 VAR_18->cur_target = VAR_19;

 if (!(VAR_19->sync_flag & (VAR_10 | VAR_11 | VAR_12))) {
  unsigned char VAR_22, VAR_23;

  if (VAR_15 != VAR_0) {
   FUNC_8(VAR_18, VAR_19, &VAR_22, &VAR_23);
   FUNC_1(VAR_16, VAR_22, VAR_23);
   VAR_19->sync_flag |= VAR_11;
  } else {
   FUNC_7(VAR_18, VAR_19);
   VAR_19->sync_flag |= VAR_10;
  }

  FUNC_2(VAR_8,
     "SDTR: entry: %d start_period: 0x%x offset: 0x%x\n",
     VAR_19->limit_entry, VAR_22, VAR_23);
 } else if (VAR_19->sync_flag & VAR_11) {





  FUNC_7(VAR_18, VAR_19);
  VAR_19->sync_flag &= ~VAR_11;
  VAR_19->sync_flag |= VAR_10;

  FUNC_2(VAR_8,
     "SDTR_INITIATOR: fall back to async");
 } else if (VAR_19->sync_flag & VAR_12) {





  FUNC_7(VAR_18, VAR_19);
  VAR_19->sync_flag &= ~VAR_12;
  VAR_19->sync_flag |= VAR_10;

  FUNC_2(VAR_8,
     "Unknown SDTR from target is reached, fall back to async.");
 }

 FUNC_2(VAR_9,
    "target: %d sync_flag: 0x%x syncreg: 0x%x ackwidth: 0x%x",
    VAR_16->device->id, VAR_19->sync_flag, VAR_19->syncreg,
    VAR_19->ackwidth);


 if (VAR_14 == 0) {
  VAR_21 = FUNC_5(VAR_16);
 } else {
  VAR_21 = FUNC_6(VAR_16);
 }

 if (VAR_21 != VAR_13) {
  FUNC_2(VAR_8, "selection fail");
  FUNC_4(VAR_16);
 }

 return 0;
}
