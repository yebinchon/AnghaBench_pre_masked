
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bnx2x_virtf {int cfg_flags; int leading_rss; int abs_vfid; int sp_cl_id; } ;
struct TYPE_12__ {void* fw_sb_id; int tss_leading_cl_id; } ;
struct bnx2x_rxq_setup_params {int max_tpa_queues; int rss_engine_id; void* fw_sb_id; int cl_qzone_id; } ;
struct TYPE_11__ {int stat_id; int spcl_id; } ;
struct bnx2x_queue_setup_params {unsigned long flags; TYPE_6__ txq_params; struct bnx2x_rxq_setup_params rxq_params; TYPE_5__ gen_params; } ;
struct TYPE_10__ {unsigned long flags; void* fw_sb_id; } ;
struct TYPE_9__ {unsigned long flags; void* fw_sb_id; } ;
struct bnx2x_queue_init_params {int * cxts; TYPE_4__ tx; TYPE_3__ rx; } ;
struct TYPE_7__ {struct bnx2x_queue_init_params init; } ;
struct TYPE_8__ {TYPE_1__ params; } ;
struct bnx2x_vfop_qctor_params {struct bnx2x_queue_setup_params prep_qsetup; TYPE_2__ qstate; } ;
struct bnx2x_vf_queue {int sb_idx; int cxt; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
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
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int FUNC_2 (int ,unsigned long*) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;
 void* FUNC_4 (struct bnx2x_virtf*,int ) ;
 scalar_t__ FUNC_5 (struct bnx2x_vf_queue*) ;
 int FUNC_6 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;
 int FUNC_7 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;

void FUNC_8(struct bnx2x *VAR_14,
      struct bnx2x_virtf *VAR_15,
      struct bnx2x_vf_queue *VAR_16,
      struct bnx2x_vfop_qctor_params *VAR_17,
      unsigned long VAR_18)
{
 struct bnx2x_queue_init_params *VAR_19 = &VAR_17->qstate.params.init;
 struct bnx2x_queue_setup_params *VAR_20 = &VAR_17->prep_qsetup;




 if (FUNC_3(VAR_1, &VAR_19->rx.flags))
  FUNC_2(VAR_2, &VAR_19->rx.flags);

 if (FUNC_3(VAR_1, &VAR_19->tx.flags))
  FUNC_2(VAR_2, &VAR_19->tx.flags);


 VAR_19->rx.fw_sb_id = FUNC_4(VAR_15, VAR_16->sb_idx);
 VAR_19->tx.fw_sb_id = FUNC_4(VAR_15, VAR_16->sb_idx);


 VAR_19->cxts[0] = VAR_16->cxt;




 VAR_20->gen_params.spcl_id = VAR_15->sp_cl_id;
 VAR_20->gen_params.stat_id = FUNC_7(VAR_15, VAR_16);






 if (VAR_15->cfg_flags & VAR_13)
  FUNC_0("No support for pause to VFs (abs_vfid: %d)\n",
     VAR_15->abs_vfid);




 if (FUNC_3(VAR_5, &VAR_20->flags))
  FUNC_2(VAR_9, &VAR_20->flags);




 FUNC_2(VAR_8, &VAR_20->flags);
 FUNC_2(VAR_7, &VAR_20->flags);
 FUNC_2(VAR_0, &VAR_20->flags);

 if (FUNC_5(VAR_16)) {
  FUNC_2(VAR_3, &VAR_20->flags);
  FUNC_2(VAR_4, &VAR_20->flags);
 }


 if (FUNC_3(VAR_10, &VAR_18)) {
  struct bnx2x_rxq_setup_params *VAR_21 = &VAR_20->rxq_params;

  VAR_21->cl_qzone_id = FUNC_6(VAR_15, VAR_16);
  VAR_21->fw_sb_id = FUNC_4(VAR_15, VAR_16->sb_idx);
  VAR_21->rss_engine_id = FUNC_1(VAR_15->abs_vfid);

  if (FUNC_3(VAR_6, &VAR_20->flags))
   VAR_21->max_tpa_queues = VAR_12;
 }


 if (FUNC_3(VAR_11, &VAR_18)) {
  VAR_20->txq_params.tss_leading_cl_id = VAR_15->leading_rss;
  VAR_20->txq_params.fw_sb_id = FUNC_4(VAR_15, VAR_16->sb_idx);
 }
}
