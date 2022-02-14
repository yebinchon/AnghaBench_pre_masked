
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_cmnd {int sc_data_direction; int cmd_len; int cmnd; } ;
struct sbp2_lu {TYPE_3__* hi; int speed_code; int max_payload_size; } ;
struct sbp2_command_orb {int next_ORB_lo; int data_descriptor_hi; int data_descriptor_lo; int cdb; int misc; int next_ORB_hi; } ;
struct sbp2_command_info {int command_orb_dma; struct sbp2_command_orb command_orb; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {TYPE_2__* host; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct device*,int ,int,int) ;
 int FUNC_7 (struct device*,int ,int,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct sbp2_command_orb*,TYPE_3__*,struct sbp2_command_info*,int ,int ,scalar_t__,int) ;
 int FUNC_11 (struct sbp2_command_orb*,int) ;
 unsigned int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_15(struct sbp2_lu *VAR_6,
       struct sbp2_command_info *VAR_7,
       struct scsi_cmnd *VAR_8)
{
 struct device *VAR_9 = VAR_6->hi->host->device.parent;
 struct sbp2_command_orb *VAR_10 = &VAR_7->command_orb;
 unsigned int VAR_11 = FUNC_12(VAR_8);
 enum dma_data_direction VAR_12 = VAR_8->sc_data_direction;
 u32 VAR_13;
 int VAR_14;

 FUNC_6(VAR_9, VAR_7->command_orb_dma,
    sizeof(struct sbp2_command_orb), VAR_2);
 VAR_10->next_ORB_hi = FUNC_3(1);
 VAR_10->next_ORB_lo = 0x0;
 VAR_10->misc = FUNC_1(VAR_6->max_payload_size);
 VAR_10->misc |= FUNC_4(VAR_6->speed_code);
 VAR_10->misc |= FUNC_2(1);

 if (VAR_12 == VAR_1)
  VAR_13 = VAR_3;
 else if (VAR_12 == VAR_2 && VAR_11)
  VAR_13 = VAR_5;
 else if (VAR_12 == VAR_0 && VAR_11)
  VAR_13 = VAR_4;
 else {
  FUNC_5("Falling back to DMA_NONE");
  VAR_13 = VAR_3;
 }


 if (VAR_13 == VAR_3) {
  VAR_10->data_descriptor_hi = 0x0;
  VAR_10->data_descriptor_lo = 0x0;
  VAR_10->misc |= FUNC_0(1);
  VAR_14 = 0;
 } else {
  VAR_14 = FUNC_10(VAR_10, VAR_6->hi, VAR_7,
            FUNC_13(VAR_8),
            FUNC_14(VAR_8),
            VAR_13, VAR_12);
 }
 FUNC_11(VAR_10, sizeof(*VAR_10));

 FUNC_9(VAR_10->cdb, 0, sizeof(VAR_10->cdb));
 FUNC_8(VAR_10->cdb, VAR_8->cmnd, VAR_8->cmd_len);

 FUNC_7(VAR_9, VAR_7->command_orb_dma,
   sizeof(struct sbp2_command_orb), VAR_2);
 return VAR_14;
}
