
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {int id; int lun; scalar_t__ scsi_level; } ;
struct scsi_cmnd {int sense_buffer; struct scsi_device* device; } ;
struct esp_cmd_entry {int sense_ptr; int saved_sense_ptr; int sense_dma; struct scsi_cmnd* cmd; } ;
struct esp {int* command_block; scalar_t__ rev; int command_block_dma; TYPE_2__* ops; int select_state; scalar_t__ msg_out_len; struct esp_cmd_entry* active_cmd; TYPE_1__* host; } ;
struct TYPE_4__ {int (* send_dma_cmd ) (struct esp*,int ,int,int,int ,int) ;int (* map_single ) (struct esp*,int ,int ,int ) ;} ;
struct TYPE_3__ {int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct esp*,int) ;
 int FUNC_4 (struct esp*,int) ;
 int FUNC_5 (struct esp*,int ) ;
 int FUNC_6 (struct esp*,int ,int ,int ) ;
 int FUNC_7 (struct esp*,int ,int,int,int ,int) ;

__attribute__((used)) static void FUNC_8(struct esp *VAR_12, struct esp_cmd_entry *VAR_13)
{
 struct scsi_cmnd *VAR_14 = VAR_13->cmd;
 struct scsi_device *VAR_15 = VAR_14->device;
 int VAR_16, VAR_17;
 u8 *VAR_18, VAR_19;

 VAR_16 = VAR_15->id;
 VAR_17 = VAR_15->lun;


 if (!VAR_13->sense_ptr) {
  FUNC_1("esp%d: Doing auto-sense for "
      "tgt[%d] lun[%d]\n",
      VAR_12->host->unique_id, VAR_16, VAR_17);

  VAR_13->sense_ptr = VAR_14->sense_buffer;
  VAR_13->sense_dma = VAR_12->ops->map_single(VAR_12,
            VAR_13->sense_ptr,
            VAR_11,
            VAR_0);
 }
 VAR_13->saved_sense_ptr = VAR_13->sense_ptr;

 VAR_12->active_cmd = VAR_13;

 VAR_18 = VAR_12->command_block;
 VAR_12->msg_out_len = 0;

 *VAR_18++ = FUNC_0(0, VAR_17);
 *VAR_18++ = VAR_9;
 *VAR_18++ = ((VAR_15->scsi_level <= VAR_10) ?
  (VAR_17 << 5) : 0);
 *VAR_18++ = 0;
 *VAR_18++ = 0;
 *VAR_18++ = VAR_11;
 *VAR_18++ = 0;

 VAR_12->select_state = VAR_7;

 VAR_19 = VAR_16;
 if (VAR_12->rev == VAR_8)
  VAR_19 |= VAR_3 | VAR_2;
 FUNC_2(VAR_19, VAR_1);

 FUNC_4(VAR_12, VAR_16);
 FUNC_3(VAR_12, VAR_16);

 VAR_19 = (VAR_18 - VAR_12->command_block);

 if (VAR_12->rev == VAR_8)
  FUNC_5(VAR_12, VAR_5);
 VAR_12->ops->send_dma_cmd(VAR_12, VAR_12->command_block_dma,
          VAR_19, 16, 0, VAR_4 | VAR_6);
}
