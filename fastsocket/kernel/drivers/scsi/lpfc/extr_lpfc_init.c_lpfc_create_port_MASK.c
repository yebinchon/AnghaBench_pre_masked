
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned long data; int function; } ;
struct lpfc_vport {int listentry; TYPE_4__ delayed_disc_tmo; TYPE_4__ els_tmofunc; TYPE_4__ fc_fdmitmo; TYPE_4__ fc_disctmo; int work_port_lock; int rcv_buffer_list; int fc_nodes; int port_type; int cfg_max_luns; scalar_t__ fc_rscn_flush; int fc_flag; int load_flag; struct lpfc_hba* phba; } ;
struct TYPE_5__ {scalar_t__ sge_supp_len; } ;
struct TYPE_6__ {TYPE_1__ pc_sli4_params; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; int port_list; TYPE_3__* pcidev; scalar_t__ cfg_hba_queue_depth; int cfg_sg_seg_cnt; TYPE_2__ sli4_hba; } ;
struct device {int dummy; } ;
struct Scsi_Host {int unique_id; int this_id; int max_cmd_len; int transportt; scalar_t__ can_queue; int sg_tablesize; scalar_t__ dma_boundary; int max_lun; int max_id; scalar_t__ hostdata; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct lpfc_vport*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct Scsi_Host*,struct device*,struct device*) ;
 struct Scsi_Host* FUNC_5 (int *,int) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct lpfc_vport *
FUNC_10(struct lpfc_hba *VAR_14, int VAR_15, struct device *VAR_16)
{
 struct lpfc_vport *VAR_17;
 struct Scsi_Host *VAR_18;
 int VAR_19 = 0;

 if (VAR_16 != &VAR_14->pcidev->dev)
  VAR_18 = FUNC_5(&VAR_12,
     sizeof(struct lpfc_vport));
 else
  VAR_18 = FUNC_5(&VAR_10,
     sizeof(struct lpfc_vport));
 if (!VAR_18)
  goto out;

 VAR_17 = (struct lpfc_vport *) VAR_18->hostdata;
 VAR_17->phba = VAR_14;
 VAR_17->load_flag |= VAR_0;
 VAR_17->fc_flag |= VAR_1;
 VAR_17->fc_rscn_flush = 0;

 FUNC_3(VAR_17);
 VAR_18->unique_id = VAR_15;
 VAR_18->max_id = VAR_2;
 VAR_18->max_lun = VAR_17->cfg_max_luns;
 VAR_18->this_id = -1;
 VAR_18->max_cmd_len = 16;
 if (VAR_14->sli_rev == VAR_5) {
  VAR_18->dma_boundary =
   VAR_14->sli4_hba.pc_sli4_params.sge_supp_len-1;
  VAR_18->sg_tablesize = VAR_14->cfg_sg_seg_cnt;
 }






 VAR_18->can_queue = VAR_14->cfg_hba_queue_depth - 10;
 if (VAR_16 != &VAR_14->pcidev->dev) {
  VAR_18->transportt = VAR_13;
  VAR_17->port_type = VAR_3;
 } else {
  VAR_18->transportt = VAR_11;
  VAR_17->port_type = VAR_4;
 }


 FUNC_0(&VAR_17->fc_nodes);
 FUNC_0(&VAR_17->rcv_buffer_list);
 FUNC_7(&VAR_17->work_port_lock);

 FUNC_1(&VAR_17->fc_disctmo);
 VAR_17->fc_disctmo.function = VAR_7;
 VAR_17->fc_disctmo.data = (unsigned long)VAR_17;

 FUNC_1(&VAR_17->fc_fdmitmo);
 VAR_17->fc_fdmitmo.function = VAR_9;
 VAR_17->fc_fdmitmo.data = (unsigned long)VAR_17;

 FUNC_1(&VAR_17->els_tmofunc);
 VAR_17->els_tmofunc.function = VAR_8;
 VAR_17->els_tmofunc.data = (unsigned long)VAR_17;

 FUNC_1(&VAR_17->delayed_disc_tmo);
 VAR_17->delayed_disc_tmo.function = VAR_6;
 VAR_17->delayed_disc_tmo.data = (unsigned long)VAR_17;

 VAR_19 = FUNC_4(VAR_18, VAR_16, &VAR_14->pcidev->dev);
 if (VAR_19)
  goto out_put_shost;

 FUNC_8(&VAR_14->hbalock);
 FUNC_2(&VAR_17->listentry, &VAR_14->port_list);
 FUNC_9(&VAR_14->hbalock);
 return VAR_17;

out_put_shost:
 FUNC_6(VAR_18);
out:
 return ((void*)0);
}
