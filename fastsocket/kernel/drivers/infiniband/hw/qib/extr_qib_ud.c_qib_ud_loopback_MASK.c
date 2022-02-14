
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_18__ {scalar_t__ remote_qkey; int pkey_index; int ah; int remote_qpn; } ;
struct TYPE_19__ {TYPE_7__ ud; } ;
struct TYPE_13__ {int imm_data; } ;
struct TYPE_20__ {scalar_t__ opcode; int send_flags; TYPE_8__ wr; scalar_t__ num_sge; TYPE_2__ ex; } ;
struct qib_swqe {scalar_t__ length; TYPE_9__ wr; struct qib_sge* sg_list; } ;
struct qib_sge {scalar_t__ length; scalar_t__ sge_length; scalar_t__ n; scalar_t__ m; TYPE_5__* mr; int * vaddr; } ;
struct qib_sge_state {struct qib_sge* sg_list; scalar_t__ num_sge; struct qib_sge sge; } ;
struct TYPE_17__ {scalar_t__ qp_type; int qp_num; int recv_cq; int device; } ;
struct qib_qp {size_t state; scalar_t__ qkey; int r_flags; scalar_t__ r_len; int wait; int refcount; int r_lock; TYPE_6__ ibqp; int port_num; int r_wr_id; int r_aflags; int r_sge; int s_pkey_index; } ;
struct qib_pportdata {int lid; int lmc; } ;
struct qib_ibport {int n_loop_pkts; int n_pkt_drops; int n_vl15_dropped; } ;
struct TYPE_12__ {int imm_data; } ;
struct ib_wc {scalar_t__ byte_len; int src_qp; int slid; int dlid_path_bits; int port_num; int sl; int pkey_index; TYPE_6__* qp; int opcode; int status; int wr_id; int wc_flags; TYPE_1__ ex; } ;
struct ib_grh {int dummy; } ;
struct ib_ah_attr {int src_path_bits; scalar_t__ dlid; int ah_flags; int sl; int grh; } ;
struct TYPE_16__ {scalar_t__ mapsz; TYPE_4__** map; scalar_t__ lkey; } ;
struct TYPE_15__ {TYPE_3__* segs; } ;
struct TYPE_14__ {scalar_t__ length; int * vaddr; } ;
struct TYPE_11__ {struct ib_ah_attr attr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int* VAR_15 ;
 int FUNC_3 (struct ib_wc*,int ,int) ;
 struct qib_pportdata* FUNC_4 (struct qib_ibport*) ;
 int FUNC_5 (struct qib_ibport*,int ,scalar_t__,int ,int,int,int ,int ) ;
 int FUNC_6 (int *,int *,scalar_t__,int) ;
 int FUNC_7 (int ,struct ib_wc*,int) ;
 scalar_t__ FUNC_8 (struct qib_ibport*,int ) ;
 int FUNC_9 (struct qib_qp*,int ) ;
 struct qib_qp* FUNC_10 (struct qib_ibport*,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct qib_qp*,int ) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int ,int *) ;
 TYPE_10__* FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct qib_ibport* FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static void FUNC_23(struct qib_qp *VAR_16, struct qib_swqe *VAR_17)
{
 struct qib_ibport *VAR_18 = FUNC_20(VAR_16->ibqp.device, VAR_16->port_num);
 struct qib_pportdata *VAR_19;
 struct qib_qp *VAR_20;
 struct ib_ah_attr *VAR_21;
 unsigned long VAR_22;
 struct qib_sge_state VAR_23;
 struct qib_sge *VAR_24;
 struct ib_wc VAR_25;
 u32 VAR_26;

 VAR_20 = FUNC_10(VAR_18, VAR_17->wr.wr.ud.remote_qpn);
 if (!VAR_20) {
  VAR_18->n_pkt_drops++;
  return;
 }
 if (VAR_20->ibqp.qp_type != VAR_16->ibqp.qp_type ||
     !(VAR_15[VAR_20->state] & VAR_11)) {
  VAR_18->n_pkt_drops++;
  goto drop;
 }

 VAR_21 = &FUNC_18(VAR_17->wr.wr.ud.ah)->attr;
 VAR_19 = FUNC_4(VAR_18);

 if (VAR_20->ibqp.qp_num > 1) {
  u16 VAR_27;
  u16 VAR_28;
  u16 VAR_29;

  VAR_27 = FUNC_8(VAR_18, VAR_16->s_pkey_index);
  VAR_28 = FUNC_8(VAR_18, VAR_20->s_pkey_index);
  if (FUNC_21(!FUNC_11(VAR_27, VAR_28))) {
   VAR_29 = VAR_19->lid | (VAR_21->src_path_bits &
       ((1 << VAR_19->lmc) - 1));
   FUNC_5(VAR_18, VAR_1, VAR_27,
          VAR_21->sl,
          VAR_16->ibqp.qp_num, VAR_20->ibqp.qp_num,
          FUNC_2(VAR_29),
          FUNC_2(VAR_21->dlid));
   goto drop;
  }
 }






 if (VAR_20->ibqp.qp_num) {
  u32 VAR_30;

  VAR_30 = (int)VAR_17->wr.wr.ud.remote_qkey < 0 ?
   VAR_16->qkey : VAR_17->wr.wr.ud.remote_qkey;
  if (FUNC_21(VAR_30 != VAR_20->qkey)) {
   u16 VAR_31;

   VAR_31 = VAR_19->lid | (VAR_21->src_path_bits &
       ((1 << VAR_19->lmc) - 1));
   FUNC_5(VAR_18, VAR_2, VAR_30,
          VAR_21->sl,
          VAR_16->ibqp.qp_num, VAR_20->ibqp.qp_num,
          FUNC_2(VAR_31),
          FUNC_2(VAR_21->dlid));
   goto drop;
  }
 }





 VAR_26 = VAR_17->length;
 FUNC_3(&VAR_25, 0, sizeof VAR_25);
 VAR_25.byte_len = VAR_26 + sizeof(struct ib_grh);

 if (VAR_17->wr.opcode == VAR_10) {
  VAR_25.wc_flags = VAR_9;
  VAR_25.ex.imm_data = VAR_17->wr.ex.imm_data;
 }

 FUNC_15(&VAR_20->r_lock, VAR_22);




 if (VAR_20->r_flags & VAR_12)
  VAR_20->r_flags &= ~VAR_12;
 else {
  int VAR_32;

  VAR_32 = FUNC_9(VAR_20, 0);
  if (VAR_32 < 0) {
   FUNC_13(VAR_20, VAR_6);
   goto bail_unlock;
  }
  if (!VAR_32) {
   if (VAR_20->ibqp.qp_num == 0)
    VAR_18->n_vl15_dropped++;
   goto bail_unlock;
  }
 }

 if (FUNC_21(VAR_25.byte_len > VAR_20->r_len)) {
  VAR_20->r_flags |= VAR_12;
  VAR_18->n_pkt_drops++;
  goto bail_unlock;
 }

 if (VAR_21->ah_flags & VAR_0) {
  FUNC_6(&VAR_20->r_sge, &VAR_21->grh,
        sizeof(struct ib_grh), 1);
  VAR_25.wc_flags |= VAR_5;
 } else
  FUNC_14(&VAR_20->r_sge, sizeof(struct ib_grh), 1);
 VAR_23.sg_list = VAR_17->sg_list + 1;
 VAR_23.sge = *VAR_17->sg_list;
 VAR_23.num_sge = VAR_17->wr.num_sge;
 VAR_24 = &VAR_23.sge;
 while (VAR_26) {
  u32 VAR_33 = VAR_24->length;

  if (VAR_33 > VAR_26)
   VAR_33 = VAR_26;
  if (VAR_33 > VAR_24->sge_length)
   VAR_33 = VAR_24->sge_length;
  FUNC_0(VAR_33 == 0);
  FUNC_6(&VAR_20->r_sge, VAR_24->vaddr, VAR_33, 1);
  VAR_24->vaddr += VAR_33;
  VAR_24->length -= VAR_33;
  VAR_24->sge_length -= VAR_33;
  if (VAR_24->sge_length == 0) {
   if (--VAR_23.num_sge)
    *VAR_24 = *VAR_23.sg_list++;
  } else if (VAR_24->length == 0 && VAR_24->mr->lkey) {
   if (++VAR_24->n >= VAR_14) {
    if (++VAR_24->m >= VAR_24->mr->mapsz)
     break;
    VAR_24->n = 0;
   }
   VAR_24->vaddr =
    VAR_24->mr->map[VAR_24->m]->segs[VAR_24->n].vaddr;
   VAR_24->length =
    VAR_24->mr->map[VAR_24->m]->segs[VAR_24->n].length;
  }
  VAR_26 -= VAR_33;
 }
 FUNC_12(&VAR_20->r_sge);
 if (!FUNC_17(VAR_13, &VAR_20->r_aflags))
  goto bail_unlock;
 VAR_25.wr_id = VAR_20->r_wr_id;
 VAR_25.status = VAR_8;
 VAR_25.opcode = VAR_7;
 VAR_25.qp = &VAR_20->ibqp;
 VAR_25.src_qp = VAR_16->ibqp.qp_num;
 VAR_25.pkey_index = VAR_20->ibqp.qp_type == VAR_3 ?
  VAR_17->wr.wr.ud.pkey_index : 0;
 VAR_25.slid = VAR_19->lid | (VAR_21->src_path_bits & ((1 << VAR_19->lmc) - 1));
 VAR_25.sl = VAR_21->sl;
 VAR_25.dlid_path_bits = VAR_21->dlid & ((1 << VAR_19->lmc) - 1);
 VAR_25.port_num = VAR_20->port_num;

 FUNC_7(FUNC_19(VAR_20->ibqp.recv_cq), &VAR_25,
       VAR_17->wr.send_flags & VAR_4);
 VAR_18->n_loop_pkts++;
bail_unlock:
 FUNC_16(&VAR_20->r_lock, VAR_22);
drop:
 if (FUNC_1(&VAR_20->refcount))
  FUNC_22(&VAR_20->wait);
}
