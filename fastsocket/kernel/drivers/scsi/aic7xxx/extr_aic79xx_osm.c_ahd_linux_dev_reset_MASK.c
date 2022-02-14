
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct scsi_cmnd {size_t cmd_len; int* cmnd; TYPE_6__* device; } ;
struct scb {int flags; TYPE_4__* hscb; TYPE_2__* platform_data; scalar_t__ sg_count; struct scsi_cmnd* io_ctx; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {TYPE_5__* platform_data; int pending_scbs; int our_id; } ;
struct ahd_linux_device {int active; int commands_issued; int openings; } ;
struct TYPE_9__ {int ppr_options; } ;
struct ahd_initiator_tinfo {TYPE_3__ curr; } ;
struct TYPE_12__ {int lun; int id; TYPE_1__* host; } ;
struct TYPE_11__ {int * eh_done; } ;
struct TYPE_10__ {int control; int task_management; scalar_t__ cdb_len; int lun; int scsiid; } ;
struct TYPE_8__ {scalar_t__ xfer_len; struct ahd_linux_device* dev; } ;
struct TYPE_7__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,struct scsi_cmnd*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct scb*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ahd_initiator_tinfo* FUNC_3 (struct ahd_softc*,char,int ,int ,struct ahd_tmode_tstate**) ;
 struct scb* FUNC_4 (struct ahd_softc*,int ) ;
 int FUNC_5 (struct ahd_softc*,unsigned long*) ;
 char* FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*,struct scb*) ;
 int FUNC_8 (struct scb*,int ) ;
 int FUNC_9 (struct scb*,int ) ;
 int FUNC_10 (struct ahd_softc*,unsigned long*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,struct scsi_cmnd*,char*) ;
 struct ahd_linux_device* FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (int *,int) ;

__attribute__((used)) static int
FUNC_15(struct scsi_cmnd *VAR_15)
{
 struct ahd_softc *VAR_16;
 struct ahd_linux_device *VAR_17;
 struct scb *VAR_18;
 u_int VAR_19;
 int VAR_20 = VAR_12;
 int VAR_21;
 int VAR_22;
 struct ahd_initiator_tinfo *VAR_23;
 struct ahd_tmode_tstate *VAR_24;
 unsigned long VAR_25;
 FUNC_1(VAR_13);

 VAR_18 = ((void*)0);
 VAR_21 = VAR_2;
 VAR_22 = VAR_2;
 VAR_16 = *(struct ahd_softc **)VAR_15->device->host->hostdata;

 FUNC_12(VAR_4, VAR_15,
      "Attempting to queue a TARGET RESET message:");

 FUNC_11("CDB:");
 for (VAR_19 = 0; VAR_19 < VAR_15->cmd_len; VAR_19++)
  FUNC_11(" 0x%x", VAR_15->cmnd[VAR_19]);
 FUNC_11("\n");




 VAR_17 = FUNC_13(VAR_15->device);

 if (VAR_17 == ((void*)0)) {




  FUNC_12(VAR_4, VAR_15, "Is not an active device\n");
  return VAR_12;
 }




 VAR_18 = FUNC_4(VAR_16, VAR_0);
 if (!VAR_18) {
  FUNC_12(VAR_4, VAR_15, "No SCB available\n");
  return VAR_1;
 }

 VAR_23 = FUNC_3(VAR_16, 'A', VAR_16->our_id,
        VAR_15->device->id, &VAR_24);
 VAR_18->io_ctx = VAR_15;
 VAR_18->platform_data->dev = VAR_17;
 VAR_18->sg_count = 0;
 FUNC_8(VAR_18, 0);
 FUNC_9(VAR_18, 0);
 VAR_18->platform_data->xfer_len = 0;
 VAR_18->hscb->control = 0;
 VAR_18->hscb->scsiid = FUNC_0(VAR_16,VAR_15);
 VAR_18->hscb->lun = VAR_15->device->lun;
 VAR_18->hscb->cdb_len = 0;
 VAR_18->hscb->task_management = VAR_11;
 VAR_18->flags |= VAR_8|VAR_10|VAR_7;
 if ((VAR_23->curr.ppr_options & VAR_6) != 0) {
  VAR_18->flags |= VAR_9;
 } else {
  VAR_18->hscb->control |= VAR_5;
 }
 VAR_17->openings--;
 VAR_17->active++;
 VAR_17->commands_issued++;

 FUNC_5(VAR_16, &VAR_25);

 FUNC_2(&VAR_16->pending_scbs, VAR_18, VAR_14);
 FUNC_7(VAR_16, VAR_18);

 VAR_16->platform_data->eh_done = &VAR_13;
 FUNC_10(VAR_16, &VAR_25);

 FUNC_11("%s: Device reset code sleeping\n", FUNC_6(VAR_16));
 if (!FUNC_14(&VAR_13, 5 * VAR_3)) {
  FUNC_5(VAR_16, &VAR_25);
  VAR_16->platform_data->eh_done = ((void*)0);
  FUNC_10(VAR_16, &VAR_25);
  FUNC_11("%s: Device reset timer expired (active %d)\n",
         FUNC_6(VAR_16), VAR_17->active);
  VAR_20 = VAR_1;
 }
 FUNC_11("%s: Device reset returning 0x%x\n", FUNC_6(VAR_16), VAR_20);

 return (VAR_20);
}
