
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_23__ {scalar_t__ op_code; void* sg_addr; int command_id; } ;
struct TYPE_22__ {scalar_t__ op_code; void* dcdb_address; } ;
struct TYPE_18__ {int cmd_attribute; TYPE_5__ basic_io; void* buffer_pointer; TYPE_4__ dcdb; } ;
struct TYPE_20__ {int list; } ;
struct TYPE_25__ {int timeout; long data_busaddr; TYPE_6__* scsi_cmd; TYPE_11__ dcdb; TYPE_11__ cmd; int scb_busaddr; scalar_t__ data_len; int callback; scalar_t__ op_code; scalar_t__ flags; scalar_t__ sg_len; int lun; int target_id; int bus; TYPE_2__ sg_list; } ;
typedef TYPE_7__ ips_scb_t ;
struct TYPE_19__ {int dcdb; int cmd; } ;
struct TYPE_26__ {int TimeOut; scalar_t__ CmdBSize; TYPE_1__ CoppCP; } ;
typedef TYPE_8__ ips_passthru_t ;
struct TYPE_27__ {long ioctl_busaddr; } ;
typedef TYPE_9__ ips_ha_t ;
struct TYPE_24__ {int result; TYPE_3__* device; } ;
struct TYPE_21__ {int lun; int id; int channel; } ;
struct TYPE_17__ {int list; } ;
typedef TYPE_10__ IPS_SG_LIST ;
typedef int IPS_IOCTL_CMD ;
typedef int IPS_DCDB_TABLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_9__*,TYPE_7__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (long) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_11__*,int *,int) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_10, ips_passthru_t * VAR_11, ips_scb_t * VAR_12)
{
 IPS_SG_LIST VAR_13;
 uint32_t VAR_14;

 FUNC_1("ips_usrcmd", 1);

 if ((!VAR_12) || (!VAR_11) || (!VAR_10))
  return (0);


 VAR_13.list = VAR_12->sg_list.list;
 VAR_14 = VAR_12->scb_busaddr;

 FUNC_3(&VAR_12->cmd, &VAR_11->CoppCP.cmd, sizeof (IPS_IOCTL_CMD));
 FUNC_3(&VAR_12->dcdb, &VAR_11->CoppCP.dcdb, sizeof (IPS_DCDB_TABLE));


 VAR_12->sg_list.list = VAR_13.list;
 VAR_12->scb_busaddr = VAR_14;
 VAR_12->bus = VAR_12->scsi_cmd->device->channel;
 VAR_12->target_id = VAR_12->scsi_cmd->device->id;
 VAR_12->lun = VAR_12->scsi_cmd->device->lun;
 VAR_12->sg_len = 0;
 VAR_12->data_len = 0;
 VAR_12->flags = 0;
 VAR_12->op_code = 0;
 VAR_12->callback = VAR_9;
 VAR_12->timeout = VAR_8;
 VAR_12->cmd.basic_io.command_id = FUNC_0(VAR_10, VAR_12);


 if ((VAR_12->cmd.basic_io.op_code == VAR_3) ||
     (VAR_12->cmd.basic_io.op_code == VAR_4) ||
     (VAR_12->cmd.basic_io.op_code == VAR_2))
  return (0);

 if (VAR_11->CmdBSize) {
  VAR_12->data_len = VAR_11->CmdBSize;
  VAR_12->data_busaddr = VAR_10->ioctl_busaddr + sizeof (ips_passthru_t);
 } else {
  VAR_12->data_busaddr = 0L;
 }

 if (VAR_12->cmd.dcdb.op_code == VAR_1)
  VAR_12->cmd.dcdb.dcdb_address = FUNC_2(VAR_12->scb_busaddr +
        (unsigned long) &VAR_12->
        dcdb -
        (unsigned long) VAR_12);

 if (VAR_11->CmdBSize) {
  if (VAR_12->cmd.dcdb.op_code == VAR_1)
   VAR_12->dcdb.buffer_pointer =
       FUNC_2(VAR_12->data_busaddr);
  else
   VAR_12->cmd.basic_io.sg_addr =
       FUNC_2(VAR_12->data_busaddr);
 }


 if (VAR_11->TimeOut) {
  VAR_12->timeout = VAR_11->TimeOut;

  if (VAR_11->TimeOut <= 10)
   VAR_12->dcdb.cmd_attribute |= VAR_5;
  else if (VAR_11->TimeOut <= 60)
   VAR_12->dcdb.cmd_attribute |= VAR_7;
  else
   VAR_12->dcdb.cmd_attribute |= VAR_6;
 }


 VAR_12->scsi_cmd->result = VAR_0 << 16;


 return (1);
}
