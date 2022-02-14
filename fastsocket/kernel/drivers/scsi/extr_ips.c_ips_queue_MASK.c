
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; int * cmnd; } ;
struct TYPE_19__ {scalar_t__ op_code; int adapter_flag; } ;
struct TYPE_20__ {TYPE_3__ reset; } ;
struct TYPE_21__ {TYPE_4__ cmd; } ;
struct TYPE_23__ {TYPE_5__ CoppCP; } ;
typedef TYPE_7__ ips_passthru_t ;
struct TYPE_15__ {scalar_t__ count; } ;
struct TYPE_16__ {scalar_t__ count; } ;
struct TYPE_22__ {scalar_t__ count; } ;
struct TYPE_24__ {scalar_t__* ha_id; int ioctl_reset; TYPE_11__ scb_waitlist; TYPE_12__ copp_waitlist; TYPE_6__ scb_activelist; int host_num; int active; } ;
typedef TYPE_8__ ips_ha_t ;
struct TYPE_25__ {int * next; struct scsi_cmnd* scsi_cmd; } ;
typedef TYPE_9__ ips_copp_wait_item_t ;
struct TYPE_18__ {int lun; int id; int channel; TYPE_1__* host; } ;
struct TYPE_17__ {scalar_t__ hostdata; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (TYPE_12__*,TYPE_9__*) ;
 int FUNC_6 (TYPE_11__*,struct scsi_cmnd*) ;
 TYPE_9__* FUNC_7 (int,int ) ;
 size_t FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (struct scsi_cmnd*) ;
 void FUNC_11 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_10, void (*VAR_11) (struct scsi_cmnd *))
{
 ips_ha_t *VAR_12;
 ips_passthru_t *VAR_13;

 FUNC_1("ips_queue", 1);

 VAR_12 = (ips_ha_t *) VAR_10->device->host->hostdata;

 if (!VAR_12)
  return (1);

 if (!VAR_12->active)
  return (VAR_1);

 if (FUNC_3(VAR_10)) {
  if (VAR_12->copp_waitlist.count == VAR_7) {
   VAR_10->result = VAR_0 << 16;
   VAR_11(VAR_10);

   return (0);
  }
 } else if (VAR_12->scb_waitlist.count == VAR_8) {
  VAR_10->result = VAR_0 << 16;
  VAR_11(VAR_10);

  return (0);
 }

 VAR_10->scsi_done = VAR_11;

 FUNC_0(2, "(%s%d): ips_queue: cmd 0x%X (%d %d %d)",
    VAR_9,
    VAR_12->host_num,
    VAR_10->cmnd[0],
    VAR_10->device->channel, VAR_10->device->id, VAR_10->device->lun);


 if ((FUNC_8(VAR_10) > 0)
     && (FUNC_9(VAR_10) == VAR_12->ha_id[FUNC_8(VAR_10)])) {
  VAR_10->result = VAR_2 << 16;
  VAR_11(VAR_10);

  return (0);
 }

 if (FUNC_3(VAR_10)) {

  ips_copp_wait_item_t *VAR_14;




  VAR_13 = (ips_passthru_t *) FUNC_10(VAR_10);
  if ((VAR_13->CoppCP.cmd.reset.op_code == VAR_5) &&
      (VAR_13->CoppCP.cmd.reset.adapter_flag == 1)) {
   if (VAR_12->scb_activelist.count != 0) {
    VAR_10->result = VAR_0 << 16;
    VAR_11(VAR_10);
    return (0);
   }
   VAR_12->ioctl_reset = 1;
   FUNC_2(VAR_10);
   VAR_10->result = VAR_3 << 16;
   VAR_10->scsi_done(VAR_10);
   return (0);
  }


  VAR_14 = FUNC_7(sizeof (ips_copp_wait_item_t), VAR_4);

  if (!VAR_14) {
   VAR_10->result = VAR_1 << 16;
   VAR_11(VAR_10);

   return (0);
  }

  VAR_14->scsi_cmd = VAR_10;
  VAR_14->next = ((void*)0);

  FUNC_5(&VAR_12->copp_waitlist, VAR_14);
 } else {
  FUNC_6(&VAR_12->scb_waitlist, VAR_10);
 }

 FUNC_4(VAR_12, VAR_6);

 return (0);
}
