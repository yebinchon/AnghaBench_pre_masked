
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ipr_sata_port {struct ipr_ioa_cfg* ioa_cfg; struct ipr_resource_entry* res; } ;
struct ipr_resource_entry {int res_handle; } ;
struct ipr_ioarcb_ata_regs {int flags; } ;
struct TYPE_14__ {int cdb; int flags_hi; int request_type; } ;
struct TYPE_11__ {struct ipr_ioarcb_ata_regs regs; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_13__ {TYPE_4__ add_data; } ;
struct ipr_ioarcb {TYPE_6__ cmd_pkt; int res_handle; void* add_cmd_parms_len; TYPE_5__ u; void* add_cmd_parms_offset; } ;
struct ipr_ioa_cfg {scalar_t__ sis64; } ;
struct TYPE_9__ {struct ipr_ioarcb_ata_regs regs; } ;
struct TYPE_10__ {TYPE_1__ ata_ioadl; } ;
struct ipr_cmnd {TYPE_7__* hrrq; int dma_use_sg; struct ipr_ioarcb ioarcb; int done; struct ata_queued_cmd* qc; int queue; TYPE_2__ i; } ;
struct TYPE_16__ {int protocol; } ;
struct ata_queued_cmd {TYPE_8__ tf; int cdb; int n_elem; struct ipr_cmnd* lldd_task; struct ata_port* ap; } ;
struct ata_port {struct ipr_sata_port* private_data; } ;
struct TYPE_15__ {int _lock; int hrrq_pending_q; int hrrq_free_q; scalar_t__ ioa_is_dead; int allow_cmds; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ipr_resource_entry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ipr_cmnd*,struct ata_queued_cmd*) ;
 int FUNC_4 (struct ipr_cmnd*,struct ata_queued_cmd*) ;
 int FUNC_5 (struct ipr_ioarcb_ata_regs*,TYPE_8__*) ;
 int FUNC_6 (struct ipr_cmnd*,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct ata_queued_cmd*) ;
 int VAR_11 ;
 int FUNC_8 (struct ipr_cmnd*) ;
 int FUNC_9 (struct ipr_cmnd*,int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (struct ipr_ioarcb_ata_regs*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static unsigned int FUNC_16(struct ata_queued_cmd *VAR_12)
{
 struct ata_port *VAR_13 = VAR_12->ap;
 struct ipr_sata_port *VAR_14 = VAR_13->private_data;
 struct ipr_resource_entry *VAR_15 = VAR_14->res;
 struct ipr_ioa_cfg *VAR_16 = VAR_14->ioa_cfg;
 struct ipr_cmnd *VAR_17;
 struct ipr_ioarcb *VAR_18;
 struct ipr_ioarcb_ata_regs *VAR_19;

 if (VAR_12->lldd_task == ((void*)0))
  FUNC_7(VAR_12);

 VAR_17 = VAR_12->lldd_task;
 if (VAR_17 == ((void*)0))
  return VAR_1;

 VAR_12->lldd_task = ((void*)0);
 FUNC_13(&VAR_17->hrrq->_lock);
 if (FUNC_15(!VAR_17->hrrq->allow_cmds ||
   VAR_17->hrrq->ioa_is_dead)) {
  FUNC_10(&VAR_17->queue, &VAR_17->hrrq->hrrq_free_q);
  FUNC_14(&VAR_17->hrrq->_lock);
  return VAR_1;
 }

 FUNC_6(VAR_17, VAR_10);
 VAR_18 = &VAR_17->ioarcb;

 if (VAR_16->sis64) {
  VAR_19 = &VAR_17->i.ata_ioadl.regs;
  VAR_18->add_cmd_parms_offset = FUNC_2(sizeof(*VAR_18));
 } else
  VAR_19 = &VAR_18->u.add_data.u.regs;

 FUNC_12(VAR_19, 0, sizeof(*VAR_19));
 VAR_18->add_cmd_parms_len = FUNC_2(sizeof(*VAR_19));

 FUNC_10(&VAR_17->queue, &VAR_17->hrrq->hrrq_pending_q);
 VAR_17->qc = VAR_12;
 VAR_17->done = VAR_11;
 VAR_17->ioarcb.res_handle = VAR_15->res_handle;
 VAR_18->cmd_pkt.request_type = VAR_8;
 VAR_18->cmd_pkt.flags_hi |= VAR_5;
 VAR_18->cmd_pkt.flags_hi |= VAR_6;
 VAR_17->dma_use_sg = VAR_12->n_elem;

 if (VAR_16->sis64)
  FUNC_4(VAR_17, VAR_12);
 else
  FUNC_3(VAR_17, VAR_12);

 VAR_19->flags |= VAR_3;
 FUNC_5(VAR_19, &VAR_12->tf);
 FUNC_11(VAR_18->cmd_pkt.cdb, VAR_12->cdb, VAR_7);
 FUNC_9(VAR_17, VAR_9, FUNC_0(VAR_15));

 switch (VAR_12->tf.protocol) {
 case 129:
 case 128:
  break;

 case 130:
  VAR_19->flags |= VAR_4;
  break;

 case 131:
 case 132:
  VAR_19->flags |= VAR_2;
  break;

 case 133:
  VAR_19->flags |= VAR_2;
  VAR_19->flags |= VAR_4;
  break;

 default:
  FUNC_1(1);
  FUNC_14(&VAR_17->hrrq->_lock);
  return VAR_0;
 }

 FUNC_8(VAR_17);
 FUNC_14(&VAR_17->hrrq->_lock);

 return 0;
}
