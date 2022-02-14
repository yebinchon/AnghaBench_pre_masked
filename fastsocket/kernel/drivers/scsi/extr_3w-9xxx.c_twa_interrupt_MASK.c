
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_18__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
typedef int irqreturn_t ;
struct TYPE_25__ {scalar_t__ status; TYPE_1__* sg_list; } ;
struct TYPE_26__ {TYPE_2__ newcommand; } ;
struct TYPE_29__ {TYPE_3__ command; } ;
struct TYPE_28__ {scalar_t__* state; scalar_t__ pending_request_count; int* pending_queue; size_t pending_head; int chrdev_request_id; TYPE_18__* host; struct scsi_cmnd** srb; int posted_request_count; int ioctl_wqueue; TYPE_6__** command_packet_virt; int flags; } ;
struct TYPE_27__ {int response_id; void* value; } ;
struct TYPE_24__ {scalar_t__ length; } ;
struct TYPE_23__ {int host_lock; } ;
typedef TYPE_4__ TW_Response_Queue ;
typedef TYPE_5__ TW_Device_Extension ;
typedef TYPE_6__ TW_Command_Full ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_18__*,int ,int,char*) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_9 (int ,int *) ;
 void* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (TYPE_5__*,int) ;
 int FUNC_20 (TYPE_5__*,int) ;
 scalar_t__ FUNC_21 (int) ;
 scalar_t__ FUNC_22 (TYPE_5__*,int) ;
 int FUNC_23 (TYPE_5__*,int,int,int) ;
 int FUNC_24 (TYPE_5__*,int) ;
 int FUNC_25 (TYPE_5__*,int*) ;
 scalar_t__ FUNC_26 (TYPE_5__*,int,int) ;
 int FUNC_27 (TYPE_5__*,int) ;
 int FUNC_28 (TYPE_5__*,int) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_30(int VAR_16, void *VAR_17)
{
 int VAR_18, VAR_19 = 0;
 u32 VAR_20;
 TW_Response_Queue VAR_21;
 TW_Command_Full *VAR_22;
 TW_Device_Extension *VAR_23 = (TW_Device_Extension *)VAR_17;
 int VAR_24 = 0;


 FUNC_14(VAR_23->host->host_lock);


 VAR_20 = FUNC_10(FUNC_8(VAR_23));


 if (!(VAR_20 & VAR_12))
  goto twa_interrupt_bail;

 VAR_24 = 1;


 if (FUNC_18(VAR_4, &VAR_23->flags))
  goto twa_interrupt_bail;


 if (FUNC_21(VAR_20)) {
  if (FUNC_22(VAR_23, VAR_20)) {
   FUNC_1(VAR_23);
   goto twa_interrupt_bail;
  }
 }


 if (VAR_20 & VAR_9)
  FUNC_3(VAR_23);


 if (VAR_20 & VAR_7) {
  FUNC_2(VAR_23);
  if (!(FUNC_17(VAR_3, &VAR_23->flags))) {
   FUNC_25(VAR_23, &VAR_18);

   VAR_19 = FUNC_20(VAR_23, VAR_18);
   if (VAR_19) {
    VAR_23->state[VAR_18] = VAR_13;
    FUNC_24(VAR_23, VAR_18);
    FUNC_9(VAR_3, &VAR_23->flags);
   }
  }
 }


 if (VAR_20 & VAR_8) {
  FUNC_4(VAR_23);

  while (VAR_23->pending_request_count > 0) {
   VAR_18 = VAR_23->pending_queue[VAR_23->pending_head];
   if (VAR_23->state[VAR_18] != VAR_14) {
    FUNC_5(VAR_23->host, VAR_2, 0x19, "Found request id that wasn't pending");
    FUNC_1(VAR_23);
    goto twa_interrupt_bail;
   }
   if (FUNC_26(VAR_23, VAR_18, 1)==0) {
    VAR_23->pending_head = (VAR_23->pending_head + 1) % VAR_6;
    VAR_23->pending_request_count--;
   } else {

    break;
   }
  }
 }


 if (VAR_20 & VAR_10) {


  while ((VAR_20 & VAR_11) == 0) {

   VAR_21.value = FUNC_10(FUNC_7(VAR_23));
   VAR_18 = FUNC_6(VAR_21.response_id);
   VAR_22 = VAR_23->command_packet_virt[VAR_18];
   VAR_19 = 0;

   if (VAR_22->command.newcommand.status != 0) {
    if (VAR_23->srb[VAR_18] != ((void*)0)) {
     VAR_19 = FUNC_23(VAR_23, VAR_18, 1, 1);
    } else {

     if (VAR_18 != VAR_23->chrdev_request_id) {
      VAR_19 = FUNC_23(VAR_23, VAR_18, 0, 1);
     }
    }
   }


   if (VAR_23->state[VAR_18] != VAR_15) {
    if (VAR_23->srb[VAR_18] != ((void*)0)) {
     FUNC_5(VAR_23->host, VAR_2, 0x1a, "Received a request id that wasn't posted");
     FUNC_1(VAR_23);
     goto twa_interrupt_bail;
    }
   }


   if (VAR_23->srb[VAR_18] == ((void*)0)) {
    if (VAR_18 != VAR_23->chrdev_request_id) {
     if (FUNC_19(VAR_23, VAR_18))
      FUNC_5(VAR_23->host, VAR_2, 0x1b, "Error completing AEN during attention interrupt");
    } else {
     VAR_23->chrdev_request_id = VAR_5;
     FUNC_29(&VAR_23->ioctl_wqueue);
    }
   } else {
    struct scsi_cmnd *VAR_25;

    VAR_25 = VAR_23->srb[VAR_18];

    FUNC_27(VAR_23, VAR_18);

    if (VAR_19 == 0) {
     VAR_25->result = (VAR_1 << 16);
    }


    if (VAR_19 == 1) {

     VAR_25->result = (VAR_1 << 16) | (VAR_0 << 1);
    }


    if ((FUNC_13(VAR_25) <= 1) && (VAR_22->command.newcommand.status == 0)) {
     if (VAR_22->command.newcommand.sg_list[0].length < FUNC_11(VAR_23->srb[VAR_18]))
      FUNC_12(VAR_25, FUNC_11(VAR_25) - VAR_22->command.newcommand.sg_list[0].length);
    }


    VAR_23->state[VAR_18] = VAR_13;
    FUNC_24(VAR_23, VAR_18);
    VAR_23->posted_request_count--;
    VAR_23->srb[VAR_18]->scsi_done(VAR_23->srb[VAR_18]);
    FUNC_28(VAR_23, VAR_18);
   }


   VAR_20 = FUNC_10(FUNC_8(VAR_23));
   if (FUNC_21(VAR_20)) {
    if (FUNC_22(VAR_23, VAR_20)) {
     FUNC_1(VAR_23);
     goto twa_interrupt_bail;
    }
   }
  }
 }

twa_interrupt_bail:
 FUNC_15(VAR_23->host->host_lock);
 return FUNC_0(VAR_24);
}
