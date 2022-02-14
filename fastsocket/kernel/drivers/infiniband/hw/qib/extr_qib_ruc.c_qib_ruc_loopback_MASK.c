
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_26__ {int swap; scalar_t__ compare_add; int rkey; int remote_addr; } ;
struct TYPE_25__ {int rkey; int remote_addr; } ;
struct TYPE_27__ {TYPE_4__ atomic; TYPE_3__ rdma; } ;
struct TYPE_24__ {int imm_data; } ;
struct TYPE_17__ {int num_sge; int opcode; int send_flags; TYPE_5__ wr; TYPE_2__ ex; } ;
struct qib_swqe {int length; TYPE_10__ wr; struct qib_sge* sg_list; } ;
struct qib_sge {scalar_t__ length; scalar_t__ sge_length; scalar_t__ n; scalar_t__ m; TYPE_14__* mr; scalar_t__ vaddr; } ;
struct TYPE_19__ {scalar_t__ qp_type; int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; int recv_cq; } ;
struct TYPE_22__ {scalar_t__ expires; int function; } ;
struct TYPE_31__ {int sl; int dlid; } ;
struct TYPE_20__ {int num_sge; int total_len; struct qib_sge sge; struct qib_sge* sg_list; } ;
struct TYPE_28__ {int num_sge; struct qib_sge* sg_list; struct qib_sge sge; } ;
struct qib_qp {int s_flags; size_t state; scalar_t__ s_last; scalar_t__ s_head; scalar_t__ s_cur; scalar_t__ s_size; int s_len; int qp_access_flags; scalar_t__ s_rnr_retry; scalar_t__ s_rnr_retry_cnt; size_t r_min_rnr_timer; int wait; int refcount; int s_lock; TYPE_12__ ibqp; TYPE_16__ s_timer; TYPE_9__ remote_ah_attr; int remote_qpn; int r_wr_id; int r_aflags; TYPE_13__ r_sge; TYPE_6__ s_sge; int port_num; } ;
struct qib_ibport {int n_rnr_naks; int n_loop_pkts; int n_pkt_drops; } ;
struct TYPE_23__ {int imm_data; } ;
struct ib_wc {int byte_len; int port_num; void* status; int sl; int slid; int src_qp; TYPE_12__* qp; int wr_id; int opcode; TYPE_1__ ex; void* wc_flags; } ;
struct TYPE_18__ {TYPE_12__* qp; } ;
struct ib_event {int event; TYPE_11__ element; int device; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
typedef int atomic64_t ;
struct TYPE_30__ {TYPE_7__* segs; } ;
struct TYPE_29__ {scalar_t__ length; scalar_t__ vaddr; } ;
struct TYPE_21__ {scalar_t__ mapsz; TYPE_8__** map; scalar_t__ lkey; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;







 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (TYPE_16__*) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,scalar_t__,int ) ;
 struct qib_swqe* FUNC_5 (struct qib_qp*,scalar_t__) ;
 int * VAR_28 ;
 int* VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_6 (struct ib_wc*,int ,int) ;
 int FUNC_7 (TYPE_13__*,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int ,struct ib_wc*,int) ;
 int FUNC_9 (struct qib_qp*,int) ;
 int FUNC_10 (struct qib_qp*,int) ;
 struct qib_qp* FUNC_11 (struct qib_ibport*,int ) ;
 int FUNC_12 (TYPE_14__*) ;
 int FUNC_13 (TYPE_13__*) ;
 int FUNC_14 (struct qib_qp*,void*) ;
 int VAR_31 ;
 int FUNC_15 (struct qib_qp*,struct qib_sge*,int,int ,int ,int) ;
 int FUNC_16 (struct qib_qp*,struct qib_swqe*,int) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (struct ib_event*,int ) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ) ;
 struct qib_ibport* FUNC_22 (int ,int ) ;
 int FUNC_23 (int) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static void FUNC_26(struct qib_qp *VAR_32)
{
 struct qib_ibport *VAR_33 = FUNC_22(VAR_32->ibqp.device, VAR_32->port_num);
 struct qib_qp *VAR_34;
 struct qib_swqe *VAR_35;
 struct qib_sge *VAR_36;
 unsigned long VAR_37;
 struct ib_wc VAR_38;
 u64 VAR_39;
 atomic64_t *VAR_40;
 enum ib_wc_status VAR_41;
 int VAR_42;
 int VAR_43;





 VAR_34 = FUNC_11(VAR_33, VAR_32->remote_qpn);

 FUNC_17(&VAR_32->s_lock, VAR_37);


 if ((VAR_32->s_flags & (VAR_26 | VAR_25)) ||
     !(VAR_29[VAR_32->state] & VAR_21))
  goto unlock;

 VAR_32->s_flags |= VAR_26;

again:
 if (VAR_32->s_last == VAR_32->s_head)
  goto clr_busy;
 VAR_35 = FUNC_5(VAR_32, VAR_32->s_last);


 if (!(VAR_29[VAR_32->state] & VAR_20)) {
  if (!(VAR_29[VAR_32->state] & VAR_19))
   goto clr_busy;

  VAR_41 = VAR_18;
  goto flush_send;
 }






 if (VAR_32->s_last == VAR_32->s_cur) {
  if (++VAR_32->s_cur >= VAR_32->s_size)
   VAR_32->s_cur = 0;
 }
 FUNC_18(&VAR_32->s_lock, VAR_37);

 if (!VAR_34 || !(VAR_29[VAR_34->state] & VAR_22) ||
     VAR_34->ibqp.qp_type != VAR_32->ibqp.qp_type) {
  VAR_33->n_pkt_drops++;




  if (VAR_32->ibqp.qp_type == VAR_4)
   VAR_41 = VAR_14;
  else
   VAR_41 = VAR_16;
  goto serr;
 }

 FUNC_6(&VAR_38, 0, sizeof VAR_38);
 VAR_41 = VAR_16;

 VAR_42 = 1;
 VAR_32->s_sge.sge = VAR_35->sg_list[0];
 VAR_32->s_sge.sg_list = VAR_35->sg_list + 1;
 VAR_32->s_sge.num_sge = VAR_35->wr.num_sge;
 VAR_32->s_len = VAR_35->length;
 switch (VAR_35->wr.opcode) {
 case 128:
  VAR_38.wc_flags = VAR_17;
  VAR_38.ex.imm_data = VAR_35->wr.ex.imm_data;

 case 129:
  VAR_43 = FUNC_10(VAR_34, 0);
  if (VAR_43 < 0)
   goto op_err;
  if (!VAR_43)
   goto rnr_nak;
  break;

 case 130:
  if (FUNC_23(!(VAR_34->qp_access_flags & VAR_2)))
   goto inv_err;
  VAR_38.wc_flags = VAR_17;
  VAR_38.ex.imm_data = VAR_35->wr.ex.imm_data;
  VAR_43 = FUNC_10(VAR_34, 1);
  if (VAR_43 < 0)
   goto op_err;
  if (!VAR_43)
   goto rnr_nak;

 case 131:
  if (FUNC_23(!(VAR_34->qp_access_flags & VAR_2)))
   goto inv_err;
  if (VAR_35->length == 0)
   break;
  if (FUNC_23(!FUNC_15(VAR_34, &VAR_34->r_sge.sge, VAR_35->length,
       VAR_35->wr.wr.rdma.remote_addr,
       VAR_35->wr.wr.rdma.rkey,
       VAR_2)))
   goto acc_err;
  VAR_34->r_sge.sg_list = ((void*)0);
  VAR_34->r_sge.num_sge = 1;
  VAR_34->r_sge.total_len = VAR_35->length;
  break;

 case 132:
  if (FUNC_23(!(VAR_34->qp_access_flags & VAR_1)))
   goto inv_err;
  if (FUNC_23(!FUNC_15(VAR_34, &VAR_32->s_sge.sge, VAR_35->length,
       VAR_35->wr.wr.rdma.remote_addr,
       VAR_35->wr.wr.rdma.rkey,
       VAR_1)))
   goto acc_err;
  VAR_42 = 0;
  VAR_32->s_sge.sg_list = ((void*)0);
  VAR_32->s_sge.num_sge = 1;
  VAR_34->r_sge.sge = VAR_35->sg_list[0];
  VAR_34->r_sge.sg_list = VAR_35->sg_list + 1;
  VAR_34->r_sge.num_sge = VAR_35->wr.num_sge;
  VAR_34->r_sge.total_len = VAR_35->length;
  break;

 case 134:
 case 133:
  if (FUNC_23(!(VAR_34->qp_access_flags & VAR_0)))
   goto inv_err;
  if (FUNC_23(!FUNC_15(VAR_34, &VAR_34->r_sge.sge, sizeof(u64),
       VAR_35->wr.wr.atomic.remote_addr,
       VAR_35->wr.wr.atomic.rkey,
       VAR_0)))
   goto acc_err;

  VAR_40 = (atomic64_t *) VAR_34->r_sge.sge.vaddr;
  VAR_39 = VAR_35->wr.wr.atomic.compare_add;
  *(u64 *) VAR_32->s_sge.sge.vaddr =
   (VAR_35->wr.opcode == 133) ?
   (u64) FUNC_2(VAR_39, VAR_40) - VAR_39 :
   (u64) FUNC_4((u64 *) VAR_34->r_sge.sge.vaddr,
          VAR_39, VAR_35->wr.wr.atomic.swap);
  FUNC_12(VAR_34->r_sge.sge.mr);
  VAR_34->r_sge.num_sge = 0;
  goto send_comp;

 default:
  VAR_41 = VAR_8;
  goto serr;
 }

 VAR_36 = &VAR_32->s_sge.sge;
 while (VAR_32->s_len) {
  u32 VAR_44 = VAR_32->s_len;

  if (VAR_44 > VAR_36->length)
   VAR_44 = VAR_36->length;
  if (VAR_44 > VAR_36->sge_length)
   VAR_44 = VAR_36->sge_length;
  FUNC_0(VAR_44 == 0);
  FUNC_7(&VAR_34->r_sge, VAR_36->vaddr, VAR_44, VAR_42);
  VAR_36->vaddr += VAR_44;
  VAR_36->length -= VAR_44;
  VAR_36->sge_length -= VAR_44;
  if (VAR_36->sge_length == 0) {
   if (!VAR_42)
    FUNC_12(VAR_36->mr);
   if (--VAR_32->s_sge.num_sge)
    *VAR_36 = *VAR_32->s_sge.sg_list++;
  } else if (VAR_36->length == 0 && VAR_36->mr->lkey) {
   if (++VAR_36->n >= VAR_24) {
    if (++VAR_36->m >= VAR_36->mr->mapsz)
     break;
    VAR_36->n = 0;
   }
   VAR_36->vaddr =
    VAR_36->mr->map[VAR_36->m]->segs[VAR_36->n].vaddr;
   VAR_36->length =
    VAR_36->mr->map[VAR_36->m]->segs[VAR_36->n].length;
  }
  VAR_32->s_len -= VAR_44;
 }
 if (VAR_42)
  FUNC_13(&VAR_34->r_sge);

 if (!FUNC_20(VAR_23, &VAR_34->r_aflags))
  goto send_comp;

 if (VAR_35->wr.opcode == 130)
  VAR_38.opcode = VAR_10;
 else
  VAR_38.opcode = VAR_9;
 VAR_38.wr_id = VAR_34->r_wr_id;
 VAR_38.status = VAR_16;
 VAR_38.byte_len = VAR_35->length;
 VAR_38.qp = &VAR_34->ibqp;
 VAR_38.src_qp = VAR_34->remote_qpn;
 VAR_38.slid = VAR_34->remote_ah_attr.dlid;
 VAR_38.sl = VAR_34->remote_ah_attr.sl;
 VAR_38.port_num = 1;

 FUNC_8(FUNC_21(VAR_34->ibqp.recv_cq), &VAR_38,
         VAR_35->wr.send_flags & VAR_6);

send_comp:
 FUNC_17(&VAR_32->s_lock, VAR_37);
 VAR_33->n_loop_pkts++;
flush_send:
 VAR_32->s_rnr_retry = VAR_32->s_rnr_retry_cnt;
 FUNC_16(VAR_32, VAR_35, VAR_41);
 goto again;

rnr_nak:

 if (VAR_34->ibqp.qp_type == VAR_5)
  goto send_comp;
 VAR_33->n_rnr_naks++;




 if (VAR_32->s_rnr_retry == 0) {
  VAR_41 = VAR_15;
  goto serr;
 }
 if (VAR_32->s_rnr_retry_cnt < 7)
  VAR_32->s_rnr_retry--;
 FUNC_17(&VAR_32->s_lock, VAR_37);
 if (!(VAR_29[VAR_32->state] & VAR_22))
  goto clr_busy;
 VAR_32->s_flags |= VAR_27;
 VAR_32->s_timer.function = VAR_31;
 VAR_32->s_timer.expires = VAR_30 +
  FUNC_24(VAR_28[VAR_34->r_min_rnr_timer]);
 FUNC_1(&VAR_32->s_timer);
 goto clr_busy;

op_err:
 VAR_41 = VAR_13;
 VAR_38.status = VAR_8;
 goto err;

inv_err:
 VAR_41 = VAR_12;
 VAR_38.status = VAR_8;
 goto err;

acc_err:
 VAR_41 = VAR_11;
 VAR_38.status = VAR_7;
err:

 FUNC_14(VAR_34, VAR_38.status);

serr:
 FUNC_17(&VAR_32->s_lock, VAR_37);
 FUNC_16(VAR_32, VAR_35, VAR_41);
 if (VAR_32->ibqp.qp_type == VAR_4) {
  int VAR_45 = FUNC_9(VAR_32, VAR_18);

  VAR_32->s_flags &= ~VAR_26;
  FUNC_18(&VAR_32->s_lock, VAR_37);
  if (VAR_45) {
   struct ib_event VAR_46;

   VAR_46.device = VAR_32->ibqp.device;
   VAR_46.element.qp = &VAR_32->ibqp;
   VAR_46.event = VAR_3;
   VAR_32->ibqp.event_handler(&VAR_46, VAR_32->ibqp.qp_context);
  }
  goto done;
 }
clr_busy:
 VAR_32->s_flags &= ~VAR_26;
unlock:
 FUNC_18(&VAR_32->s_lock, VAR_37);
done:
 if (VAR_34 && FUNC_3(&VAR_34->refcount))
  FUNC_25(&VAR_34->wait);
}
