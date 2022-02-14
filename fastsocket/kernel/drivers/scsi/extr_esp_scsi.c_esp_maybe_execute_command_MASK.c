
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct scsi_device {int id; int lun; struct esp_lun_data* hostdata; } ;
struct scsi_cmnd {int cmd_len; int * cmnd; struct scsi_device* device; } ;
struct esp_target_data {int flags; scalar_t__ nego_goal_period; scalar_t__ nego_goal_offset; scalar_t__ nego_goal_width; int starget; scalar_t__ nego_goal_tags; } ;
struct esp_lun_data {int dummy; } ;
struct esp_cmd_entry {int flags; scalar_t__* tag; int list; struct scsi_cmnd* cmd; } ;
struct esp {int flags; int msg_out_len; scalar_t__ rev; int cmd_bytes_left; int command_block_dma; TYPE_1__* ops; int * command_block; int select_state; scalar_t__* msg_out; int * cmd_bytes_ptr; struct esp_cmd_entry* active_cmd; int active_cmds; struct esp_target_data* target; } ;
struct TYPE_2__ {int (* send_dma_cmd ) (struct esp*,int ,int,int,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_2 (struct esp*,struct scsi_cmnd*) ;
 int VAR_21 ;
 int FUNC_3 (struct esp*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct esp_target_data*) ;
 scalar_t__ FUNC_5 (struct esp_target_data*) ;
 int FUNC_6 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct esp*,int) ;
 int FUNC_9 (struct esp*,int) ;
 struct esp_cmd_entry* FUNC_10 (struct esp*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct esp*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__*,int) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct esp*,int ,int,int,int ,int) ;

__attribute__((used)) static void FUNC_20(struct esp *VAR_22)
{
 struct esp_target_data *VAR_23;
 struct esp_lun_data *VAR_24;
 struct scsi_device *VAR_25;
 struct scsi_cmnd *VAR_26;
 struct esp_cmd_entry *VAR_27;
 int VAR_28, VAR_29, VAR_30;
 u32 VAR_31, VAR_32;
 u8 *VAR_33;

 if (VAR_22->active_cmd ||
     (VAR_22->flags & VAR_12))
  return;

 VAR_27 = FUNC_10(VAR_22);
 if (!VAR_27)
  return;

 if (VAR_27->flags & VAR_5) {
  FUNC_1(VAR_22, VAR_27);
  return;
 }

 VAR_26 = VAR_27->cmd;
 VAR_25 = VAR_26->device;
 VAR_28 = VAR_25->id;
 VAR_29 = VAR_25->lun;
 VAR_23 = &VAR_22->target[VAR_28];
 VAR_24 = VAR_25->hostdata;

 FUNC_11(&VAR_27->list, &VAR_22->active_cmds);

 VAR_22->active_cmd = VAR_27;

 FUNC_3(VAR_22, VAR_26);
 FUNC_6(VAR_22, VAR_27);

 FUNC_2(VAR_22, VAR_26);

 VAR_33 = VAR_22->command_block;

 VAR_22->msg_out_len = 0;
 if (VAR_23->flags & VAR_16) {



  if (VAR_23->flags & VAR_15) {
   VAR_23->flags &= ~VAR_17;
   VAR_23->nego_goal_period = 0;
   VAR_23->nego_goal_offset = 0;
   VAR_23->nego_goal_width = 0;
   VAR_23->nego_goal_tags = 0;
  }


  if (FUNC_18(VAR_23->starget) == VAR_23->nego_goal_width &&
      FUNC_15(VAR_23->starget) == VAR_23->nego_goal_period &&
      FUNC_14(VAR_23->starget) == VAR_23->nego_goal_offset) {
   VAR_23->flags &= ~VAR_16;
   goto build_identify;
  }

  if (VAR_22->rev == VAR_20 && FUNC_5(VAR_23)) {
   VAR_22->msg_out_len =
    FUNC_17(&VAR_22->msg_out[0],
             (VAR_23->nego_goal_width ?
       1 : 0));
   VAR_23->flags |= VAR_19;
  } else if (FUNC_4(VAR_23)) {
   VAR_22->msg_out_len =
    FUNC_16(&VAR_22->msg_out[0],
            VAR_23->nego_goal_period,
            VAR_23->nego_goal_offset);
   VAR_23->flags |= VAR_18;
  } else {
   VAR_23->flags &= ~VAR_16;
  }


  if (VAR_23->flags & (VAR_19 | VAR_18))
   VAR_22->flags |= VAR_11;
 }

build_identify:




 if (VAR_24 && (VAR_23->flags & VAR_17) && VAR_27->tag[0])
  *VAR_33++ = FUNC_0(1, VAR_29);
 else
  *VAR_33++ = FUNC_0(0, VAR_29);

 if (VAR_27->tag[0] && VAR_22->rev == VAR_0) {



  VAR_22->flags |= VAR_11;
 }

 if (!(VAR_22->flags & VAR_11)) {
  VAR_32 = VAR_4 | VAR_8;
  if (VAR_27->tag[0]) {
   *VAR_33++ = VAR_27->tag[0];
   *VAR_33++ = VAR_27->tag[1];

   VAR_32 = VAR_4 | VAR_7;
  }

  for (VAR_30 = 0; VAR_30 < VAR_26->cmd_len; VAR_30++)
   *VAR_33++ = VAR_26->cmnd[VAR_30];

  VAR_22->select_state = VAR_13;
 } else {
  VAR_22->cmd_bytes_left = VAR_26->cmd_len;
  VAR_22->cmd_bytes_ptr = &VAR_26->cmnd[0];

  if (VAR_27->tag[0]) {
   for (VAR_30 = VAR_22->msg_out_len - 1;
        VAR_30 >= 0; VAR_30--)
    VAR_22->msg_out[VAR_30 + 2] = VAR_22->msg_out[VAR_30];
   VAR_22->msg_out[0] = VAR_27->tag[0];
   VAR_22->msg_out[1] = VAR_27->tag[1];
   VAR_22->msg_out_len += 2;
  }

  VAR_32 = VAR_4 | VAR_9;
  VAR_22->select_state = VAR_14;
 }
 VAR_31 = VAR_28;
 if (VAR_22->rev == VAR_20)
  VAR_31 |= VAR_3 | VAR_2;
 FUNC_7(VAR_31, VAR_1);

 FUNC_9(VAR_22, VAR_28);
 FUNC_8(VAR_22, VAR_28);

 VAR_31 = (VAR_33 - VAR_22->command_block);

 if (VAR_21 & VAR_10) {
  FUNC_12("ESP: tgt[%d] lun[%d] scsi_cmd [ ", VAR_28, VAR_29);
  for (VAR_30 = 0; VAR_30 < VAR_26->cmd_len; VAR_30++)
   FUNC_12("%02x ", VAR_26->cmnd[VAR_30]);
  FUNC_12("]\n");
 }

 if (VAR_22->rev == VAR_20)
  FUNC_13(VAR_22, VAR_6);
 VAR_22->ops->send_dma_cmd(VAR_22, VAR_22->command_block_dma,
          VAR_31, 16, 0, VAR_32);
}
