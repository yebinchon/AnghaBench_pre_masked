
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ips_stat_t ;
struct TYPE_16__ {int* sense_info; int transfer_length; } ;
struct TYPE_14__ {int op_code; } ;
struct TYPE_15__ {TYPE_2__ dcdb; } ;
struct TYPE_17__ {int basic_status; scalar_t__ extended_status; TYPE_9__* scsi_cmd; TYPE_4__ dcdb; TYPE_3__ cmd; scalar_t__ bus; int data_len; } ;
typedef TYPE_5__ ips_scb_t ;
struct TYPE_18__ {int host_num; } ;
typedef TYPE_6__ ips_ha_t ;
typedef int inquiryData ;
struct TYPE_21__ {int result; int sense_buffer; int * cmnd; TYPE_1__* device; } ;
struct TYPE_20__ {int* sense_info; int transfer_length; } ;
struct TYPE_19__ {int DeviceType; } ;
struct TYPE_13__ {int lun; int id; int channel; } ;
typedef TYPE_7__ IPS_SCSI_INQ_DATA ;
typedef TYPE_8__ IPS_DCDB_TABLE_TAPE ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int,scalar_t__,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;







 int VAR_8 ;





 int FUNC_1 (char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_9__*,TYPE_7__*,int) ;
 int FUNC_3 (int ,int*,int ) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_12, ips_scb_t * VAR_13, ips_stat_t * VAR_14)
{
 int VAR_15;
 int VAR_16;
 uint32_t VAR_17;
 IPS_DCDB_TABLE_TAPE *VAR_18;
 IPS_SCSI_INQ_DATA VAR_19;

 FUNC_1("ips_map_status", 1);

 if (VAR_13->bus) {
  FUNC_0(2,
     "(%s%d) Physical device error (%d %d %d): %x %x, Sense Key: %x, ASC: %x, ASCQ: %x",
     VAR_11, VAR_12->host_num,
     VAR_13->scsi_cmd->device->channel,
     VAR_13->scsi_cmd->device->id, VAR_13->scsi_cmd->device->lun,
     VAR_13->basic_status, VAR_13->extended_status,
     VAR_13->extended_status ==
     138 ? VAR_13->dcdb.sense_info[2] & 0xf : 0,
     VAR_13->extended_status ==
     138 ? VAR_13->dcdb.sense_info[12] : 0,
     VAR_13->extended_status ==
     138 ? VAR_13->dcdb.sense_info[13] : 0);
 }


 VAR_15 = VAR_0;
 VAR_16 = 0;

 switch (VAR_13->basic_status & VAR_8) {
 case 139:
  VAR_15 = VAR_4;
  break;

 case 131:
 case 132:
 case 130:
 case 129:
 case 140:
  break;

 case 128:
  switch (VAR_13->extended_status) {
  case 133:
   if (VAR_13->bus)
    VAR_15 = VAR_1;

   break;

  case 135:
   if ((VAR_13->cmd.dcdb.op_code == VAR_6) ||
       (VAR_13->cmd.dcdb.op_code ==
        VAR_7)) {
    VAR_18 = (IPS_DCDB_TABLE_TAPE *) & VAR_13->dcdb;
    VAR_17 = VAR_18->transfer_length;
   } else {
    VAR_17 =
        (uint32_t) VAR_13->dcdb.transfer_length;
   }

   if ((VAR_13->bus) && (VAR_17 < VAR_13->data_len)) {

    VAR_15 = VAR_2;


    if (VAR_13->scsi_cmd->cmnd[0] == VAR_5) {
        FUNC_2(VAR_13->scsi_cmd,
                                      &VAR_19, sizeof (VAR_19));
         if ((VAR_19.DeviceType & 0x1f) == VAR_10) {
            VAR_15 = VAR_4;
            break;
        }
    }
   } else
    VAR_15 = VAR_0;

   break;

  case 134:

   if (VAR_13->bus)
    VAR_15 = VAR_2;

   break;

  case 136:
  case 137:
   VAR_15 = VAR_3;
   break;

  case 138:
   if (VAR_13->bus) {
    if ((VAR_13->cmd.dcdb.op_code ==
         VAR_6)
        || (VAR_13->cmd.dcdb.op_code ==
     VAR_7)) {
     VAR_18 =
         (IPS_DCDB_TABLE_TAPE *) & VAR_13->dcdb;
     FUNC_3(VAR_13->scsi_cmd->sense_buffer,
            VAR_18->sense_info,
            VAR_9);
    } else {
     FUNC_3(VAR_13->scsi_cmd->sense_buffer,
            VAR_13->dcdb.sense_info,
            VAR_9);
    }
    VAR_16 = 2;
   }

   VAR_15 = VAR_2;

   break;

  default:
   VAR_15 = VAR_0;
   break;

  }
 }

 VAR_13->scsi_cmd->result = VAR_16 | (VAR_15 << 16);

 return (1);
}
