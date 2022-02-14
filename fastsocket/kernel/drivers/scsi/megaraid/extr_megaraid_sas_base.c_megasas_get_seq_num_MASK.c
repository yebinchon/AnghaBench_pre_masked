
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct megasas_instance {int pdev; } ;
struct megasas_evt_log_info {int dummy; } ;
struct TYPE_8__ {TYPE_3__* sge32; } ;
struct TYPE_6__ {struct megasas_evt_log_info* b; } ;
struct megasas_dcmd_frame {int cmd_status; int sge_count; int data_xfer_len; TYPE_4__ sgl; int opcode; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; TYPE_2__ mbox; } ;
struct megasas_cmd {TYPE_1__* frame; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int length; int phys_addr; } ;
struct TYPE_5__ {struct megasas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct megasas_cmd* FUNC_0 (struct megasas_instance*) ;
 int FUNC_1 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_2 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_3 (struct megasas_evt_log_info*,struct megasas_evt_log_info*,int) ;
 int FUNC_4 (struct megasas_evt_log_info*,int ,int) ;
 struct megasas_evt_log_info* FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int,struct megasas_evt_log_info*,int ) ;

__attribute__((used)) static int
FUNC_7(struct megasas_instance *VAR_5,
      struct megasas_evt_log_info *VAR_6)
{
 struct megasas_cmd *VAR_7;
 struct megasas_dcmd_frame *VAR_8;
 struct megasas_evt_log_info *VAR_9;
 dma_addr_t VAR_10 = 0;

 VAR_7 = FUNC_0(VAR_5);

 if (!VAR_7) {
  return -VAR_0;
 }

 VAR_8 = &VAR_7->frame->dcmd;
 VAR_9 = FUNC_5(VAR_5->pdev,
           sizeof(struct megasas_evt_log_info),
           &VAR_10);

 if (!VAR_9) {
  FUNC_2(VAR_5, VAR_7);
  return -VAR_0;
 }

 FUNC_4(VAR_9, 0, sizeof(*VAR_9));
 FUNC_4(VAR_8->mbox.b, 0, VAR_3);

 VAR_8->cmd = VAR_1;
 VAR_8->cmd_status = 0x0;
 VAR_8->sge_count = 1;
 VAR_8->flags = VAR_2;
 VAR_8->timeout = 0;
 VAR_8->pad_0 = 0;
 VAR_8->data_xfer_len = sizeof(struct megasas_evt_log_info);
 VAR_8->opcode = VAR_4;
 VAR_8->sgl.sge32[0].phys_addr = VAR_10;
 VAR_8->sgl.sge32[0].length = sizeof(struct megasas_evt_log_info);

 FUNC_1(VAR_5, VAR_7);




 FUNC_3(VAR_6, VAR_9, sizeof(struct megasas_evt_log_info));

 FUNC_6(VAR_5->pdev, sizeof(struct megasas_evt_log_info),
       VAR_9, VAR_10);

 FUNC_2(VAR_5, VAR_7);

 return 0;
}
