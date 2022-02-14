
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_13__ {int sb_index; int cache_line_log; int sge_buf_sz; int max_sge_pkt; int tpa_agg_sz; int buf_sz; int rcq_np_addr; int rcq_addr; int sge_addr; int rxq_addr; int drop_flags; int mtu; int flags; int hc_rate; int vf_sb; } ;
struct TYPE_21__ {int traffic_type; int sb_index; int txq_addr; int flags; int hc_rate; int vf_sb; } ;
struct vfpf_setup_q_tlv {scalar_t__ vf_qid; int param_valid; TYPE_10__ rxq; TYPE_7__ txq; } ;
struct TYPE_22__ {unsigned long flags; int sb_cq_index; int hc_rate; } ;
struct TYPE_20__ {unsigned long flags; int sb_cq_index; int hc_rate; } ;
struct bnx2x_queue_init_params {TYPE_8__ rx; TYPE_6__ tx; } ;
struct TYPE_17__ {struct bnx2x_queue_init_params init; } ;
struct TYPE_18__ {TYPE_3__ params; } ;
struct TYPE_23__ {int mtu; } ;
struct bnx2x_rxq_setup_params {int sb_cq_index; int cache_line_log; int sge_buf_sz; int max_sges_pkt; int tpa_agg_sz; int buf_sz; int rcq_np_map; int rcq_map; int sge_map; int dscr_map; int drop_flags; } ;
struct bnx2x_txq_setup_params {int traffic_type; int sb_cq_index; int dscr_map; } ;
struct bnx2x_queue_setup_params {unsigned long flags; TYPE_9__ gen_params; struct bnx2x_rxq_setup_params rxq_params; struct bnx2x_txq_setup_params txq_params; } ;
struct TYPE_14__ {TYPE_4__ qstate; struct bnx2x_queue_setup_params prep_qsetup; } ;
struct TYPE_19__ {TYPE_11__ qctor; } ;
struct bnx2x_virtf {int op_rc; TYPE_5__ op_params; } ;
struct bnx2x_vfop_cmd {int block; int (* done ) (struct bnx2x*,struct bnx2x_virtf*) ;} ;
struct bnx2x_vf_queue {int index; int sb_idx; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_15__ {struct vfpf_setup_q_tlv setup_q; } ;
struct TYPE_16__ {TYPE_1__ req; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_3 (struct bnx2x*,int ,unsigned long*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_queue_init_params*,struct bnx2x_queue_setup_params*,int ,int ) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_queue_init_params*,struct bnx2x_queue_setup_params*,int ,int ) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_queue*,TYPE_11__*,unsigned long) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop_cmd*,int ) ;
 int FUNC_8 (TYPE_11__*,int ,int) ;
 scalar_t__ FUNC_9 (struct bnx2x_virtf*) ;
 struct bnx2x_vf_queue* FUNC_10 (struct bnx2x_virtf*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_6, struct bnx2x_virtf *VAR_7,
     struct bnx2x_vf_mbx *VAR_8)
{
 struct vfpf_setup_q_tlv *VAR_9 = &VAR_8->msg->req.setup_q;
 struct bnx2x_vfop_cmd VAR_10 = {
  .done = FUNC_2,
  .block = 0,
 };


 if (VAR_9->vf_qid >= FUNC_9(VAR_7)) {
  FUNC_0("vf_qid %d invalid, max queue count is %d\n",
     VAR_9->vf_qid, FUNC_9(VAR_7));
  VAR_7->op_rc = -VAR_3;
  goto response;
 }




 if (VAR_9->param_valid & (VAR_4|VAR_5)) {
  struct bnx2x_vf_queue *VAR_11 = FUNC_10(VAR_7, VAR_9->vf_qid);
  unsigned long VAR_12 = 0;

  struct bnx2x_queue_init_params *VAR_13;
  struct bnx2x_queue_setup_params *VAR_14;


  FUNC_8(&VAR_7->op_params.qctor, 0 , sizeof(VAR_7->op_params.qctor));
  VAR_14 = &VAR_7->op_params.qctor.prep_qsetup;
  VAR_13 = &VAR_7->op_params.qctor.qstate.params.init;


  FUNC_1(VAR_0, &VAR_14->flags);

  if (VAR_9->param_valid & VAR_5) {
   struct bnx2x_txq_setup_params *VAR_15 =
    &VAR_14->txq_params;

   FUNC_1(VAR_2, &VAR_12);


   VAR_11->sb_idx = VAR_9->txq.vf_sb;


   VAR_13->tx.hc_rate = VAR_9->txq.hc_rate;
   VAR_13->tx.sb_cq_index = VAR_9->txq.sb_index;

   FUNC_3(VAR_6, VAR_9->txq.flags,
       &VAR_13->tx.flags);


   FUNC_3(VAR_6, VAR_9->txq.flags,
       &VAR_14->flags);




   VAR_15->dscr_map = VAR_9->txq.txq_addr;
   VAR_15->sb_cq_index = VAR_9->txq.sb_index;
   VAR_15->traffic_type = VAR_9->txq.traffic_type;

   FUNC_5(VAR_6, VAR_7, VAR_13, VAR_14,
       VAR_11->index, VAR_11->sb_idx);
  }

  if (VAR_9->param_valid & VAR_4) {
   struct bnx2x_rxq_setup_params *VAR_16 =
       &VAR_14->rxq_params;

   FUNC_1(VAR_1, &VAR_12);




   VAR_11->sb_idx = VAR_9->rxq.vf_sb;


   VAR_13->rx.hc_rate = VAR_9->rxq.hc_rate;
   VAR_13->rx.sb_cq_index = VAR_9->rxq.sb_index;
   FUNC_3(VAR_6, VAR_9->rxq.flags,
       &VAR_13->rx.flags);


   FUNC_3(VAR_6, VAR_9->rxq.flags,
       &VAR_14->flags);


   VAR_14->gen_params.mtu = VAR_9->rxq.mtu;


   VAR_16->drop_flags = VAR_9->rxq.drop_flags;
   VAR_16->dscr_map = VAR_9->rxq.rxq_addr;
   VAR_16->sge_map = VAR_9->rxq.sge_addr;
   VAR_16->rcq_map = VAR_9->rxq.rcq_addr;
   VAR_16->rcq_np_map = VAR_9->rxq.rcq_np_addr;
   VAR_16->buf_sz = VAR_9->rxq.buf_sz;
   VAR_16->tpa_agg_sz = VAR_9->rxq.tpa_agg_sz;
   VAR_16->max_sges_pkt = VAR_9->rxq.max_sge_pkt;
   VAR_16->sge_buf_sz = VAR_9->rxq.sge_buf_sz;
   VAR_16->cache_line_log =
    VAR_9->rxq.cache_line_log;
   VAR_16->sb_cq_index = VAR_9->rxq.sb_index;

   FUNC_4(VAR_6, VAR_7, VAR_13, VAR_14,
       VAR_11->index, VAR_11->sb_idx);
  }

  FUNC_6(VAR_6, VAR_7, VAR_11, &VAR_7->op_params.qctor, VAR_12);

  VAR_7->op_rc = FUNC_7(VAR_6, VAR_7, &VAR_10, VAR_11->index);
  if (VAR_7->op_rc)
   goto response;
  return;
 }
response:
 FUNC_2(VAR_6, VAR_7);
}
