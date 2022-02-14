
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_22__ {int swap; scalar_t__ compare_add; int rkey; int remote_addr; } ;
struct TYPE_21__ {int rkey; int remote_addr; } ;
struct TYPE_23__ {TYPE_4__ atomic; TYPE_3__ rdma; } ;
struct TYPE_20__ {int imm_data; } ;
struct TYPE_15__ {int opcode; int send_flags; TYPE_5__ wr; scalar_t__ num_sge; TYPE_2__ ex; } ;
struct ipath_swqe {int length; TYPE_10__ wr; struct ipath_sge* sg_list; } ;
struct ipath_sge {scalar_t__ length; scalar_t__ sge_length; scalar_t__ n; scalar_t__ m; TYPE_8__* mr; scalar_t__ vaddr; } ;
struct TYPE_17__ {scalar_t__ qp_type; int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; int recv_cq; } ;
struct TYPE_27__ {int sl; int dlid; } ;
struct TYPE_18__ {struct ipath_sge* sg_list; scalar_t__ num_sge; struct ipath_sge sge; } ;
struct ipath_qp {int s_flags; size_t state; scalar_t__ s_last; scalar_t__ s_head; scalar_t__ s_cur; scalar_t__ s_size; int s_len; int qp_access_flags; scalar_t__ s_rnr_retry; scalar_t__ s_rnr_retry_cnt; size_t r_min_rnr_timer; int wait; int refcount; int s_lock; TYPE_12__ ibqp; int s_rnr_timeout; TYPE_9__ remote_ah_attr; int remote_qpn; int r_wr_id; int r_aflags; TYPE_13__ s_sge; TYPE_13__ r_sge; } ;
struct ipath_ibdev {int n_rnr_naks; int n_pkt_drops; int qp_table; } ;
struct TYPE_19__ {int imm_data; } ;
struct ib_wc {int byte_len; int port_num; void* status; int sl; int slid; int src_qp; TYPE_12__* qp; int wr_id; int opcode; TYPE_1__ ex; void* wc_flags; } ;
struct TYPE_16__ {TYPE_12__* qp; } ;
struct ib_event {int event; TYPE_11__ element; int device; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
typedef int atomic64_t ;
struct TYPE_26__ {scalar_t__ mapsz; TYPE_7__** map; } ;
struct TYPE_25__ {TYPE_6__* segs; } ;
struct TYPE_24__ {scalar_t__ length; scalar_t__ vaddr; } ;


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
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;







 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__,int ) ;
 struct ipath_swqe* FUNC_4 (struct ipath_qp*,scalar_t__) ;
 int * VAR_27 ;
 int* VAR_28 ;
 int FUNC_5 (TYPE_13__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,struct ib_wc*,int) ;
 int FUNC_7 (struct ipath_qp*,int) ;
 int FUNC_8 (struct ipath_qp*,int) ;
 int FUNC_9 (struct ipath_qp*) ;
 struct ipath_qp* FUNC_10 (int *,int ) ;
 int FUNC_11 (struct ipath_qp*,void*) ;
 int FUNC_12 (struct ipath_qp*,TYPE_13__*,int,int ,int ,int) ;
 int FUNC_13 (struct ipath_qp*,struct ipath_swqe*,int) ;
 int FUNC_14 (struct ib_wc*,int ,int) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct ib_event*,int ) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int ) ;
 struct ipath_ibdev* FUNC_20 (int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static void FUNC_23(struct ipath_qp *VAR_29)
{
 struct ipath_ibdev *VAR_30 = FUNC_20(VAR_29->ibqp.device);
 struct ipath_qp *VAR_31;
 struct ipath_swqe *VAR_32;
 struct ipath_sge *VAR_33;
 unsigned long VAR_34;
 struct ib_wc VAR_35;
 u64 VAR_36;
 atomic64_t *VAR_37;
 enum ib_wc_status VAR_38;





 VAR_31 = FUNC_10(&VAR_30->qp_table, VAR_29->remote_qpn);

 FUNC_15(&VAR_29->s_lock, VAR_34);


 if ((VAR_29->s_flags & (VAR_25 | VAR_24)) ||
     !(VAR_28[VAR_29->state] & VAR_20))
  goto unlock;

 VAR_29->s_flags |= VAR_25;

again:
 if (VAR_29->s_last == VAR_29->s_head)
  goto clr_busy;
 VAR_32 = FUNC_4(VAR_29, VAR_29->s_last);


 if (!(VAR_28[VAR_29->state] & VAR_19)) {
  if (!(VAR_28[VAR_29->state] & VAR_18))
   goto clr_busy;

  VAR_38 = VAR_17;
  goto flush_send;
 }






 if (VAR_29->s_last == VAR_29->s_cur) {
  if (++VAR_29->s_cur >= VAR_29->s_size)
   VAR_29->s_cur = 0;
 }
 FUNC_16(&VAR_29->s_lock, VAR_34);

 if (!VAR_31 || !(VAR_28[VAR_31->state] & VAR_21)) {
  VAR_30->n_pkt_drops++;




  if (VAR_29->ibqp.qp_type == VAR_4)
   VAR_38 = VAR_13;
  else
   VAR_38 = VAR_15;
  goto serr;
 }

 FUNC_14(&VAR_35, 0, sizeof VAR_35);
 VAR_38 = VAR_15;

 VAR_29->s_sge.sge = VAR_32->sg_list[0];
 VAR_29->s_sge.sg_list = VAR_32->sg_list + 1;
 VAR_29->s_sge.num_sge = VAR_32->wr.num_sge;
 VAR_29->s_len = VAR_32->length;
 switch (VAR_32->wr.opcode) {
 case 128:
  VAR_35.wc_flags = VAR_16;
  VAR_35.ex.imm_data = VAR_32->wr.ex.imm_data;

 case 129:
  if (!FUNC_8(VAR_31, 0))
   goto rnr_nak;
  break;

 case 130:
  if (FUNC_21(!(VAR_31->qp_access_flags & VAR_2)))
   goto inv_err;
  VAR_35.wc_flags = VAR_16;
  VAR_35.ex.imm_data = VAR_32->wr.ex.imm_data;
  if (!FUNC_8(VAR_31, 1))
   goto rnr_nak;

 case 131:
  if (FUNC_21(!(VAR_31->qp_access_flags & VAR_2)))
   goto inv_err;
  if (VAR_32->length == 0)
   break;
  if (FUNC_21(!FUNC_12(VAR_31, &VAR_31->r_sge, VAR_32->length,
         VAR_32->wr.wr.rdma.remote_addr,
         VAR_32->wr.wr.rdma.rkey,
         VAR_2)))
   goto acc_err;
  break;

 case 132:
  if (FUNC_21(!(VAR_31->qp_access_flags & VAR_1)))
   goto inv_err;
  if (FUNC_21(!FUNC_12(VAR_31, &VAR_29->s_sge, VAR_32->length,
         VAR_32->wr.wr.rdma.remote_addr,
         VAR_32->wr.wr.rdma.rkey,
         VAR_1)))
   goto acc_err;
  VAR_31->r_sge.sge = VAR_32->sg_list[0];
  VAR_31->r_sge.sg_list = VAR_32->sg_list + 1;
  VAR_31->r_sge.num_sge = VAR_32->wr.num_sge;
  break;

 case 134:
 case 133:
  if (FUNC_21(!(VAR_31->qp_access_flags & VAR_0)))
   goto inv_err;
  if (FUNC_21(!FUNC_12(VAR_31, &VAR_31->r_sge, sizeof(u64),
         VAR_32->wr.wr.atomic.remote_addr,
         VAR_32->wr.wr.atomic.rkey,
         VAR_0)))
   goto acc_err;

  VAR_37 = (atomic64_t *) VAR_31->r_sge.sge.vaddr;
  VAR_36 = VAR_32->wr.wr.atomic.compare_add;
  *(u64 *) VAR_29->s_sge.sge.vaddr =
   (VAR_32->wr.opcode == 133) ?
   (u64) FUNC_1(VAR_36, VAR_37) - VAR_36 :
   (u64) FUNC_3((u64 *) VAR_31->r_sge.sge.vaddr,
          VAR_36, VAR_32->wr.wr.atomic.swap);
  goto send_comp;

 default:
  VAR_38 = VAR_8;
  goto serr;
 }

 VAR_33 = &VAR_29->s_sge.sge;
 while (VAR_29->s_len) {
  u32 VAR_39 = VAR_29->s_len;

  if (VAR_39 > VAR_33->length)
   VAR_39 = VAR_33->length;
  if (VAR_39 > VAR_33->sge_length)
   VAR_39 = VAR_33->sge_length;
  FUNC_0(VAR_39 == 0);
  FUNC_5(&VAR_31->r_sge, VAR_33->vaddr, VAR_39);
  VAR_33->vaddr += VAR_39;
  VAR_33->length -= VAR_39;
  VAR_33->sge_length -= VAR_39;
  if (VAR_33->sge_length == 0) {
   if (--VAR_29->s_sge.num_sge)
    *VAR_33 = *VAR_29->s_sge.sg_list++;
  } else if (VAR_33->length == 0 && VAR_33->mr != ((void*)0)) {
   if (++VAR_33->n >= VAR_23) {
    if (++VAR_33->m >= VAR_33->mr->mapsz)
     break;
    VAR_33->n = 0;
   }
   VAR_33->vaddr =
    VAR_33->mr->map[VAR_33->m]->segs[VAR_33->n].vaddr;
   VAR_33->length =
    VAR_33->mr->map[VAR_33->m]->segs[VAR_33->n].length;
  }
  VAR_29->s_len -= VAR_39;
 }

 if (!FUNC_18(VAR_22, &VAR_31->r_aflags))
  goto send_comp;

 if (VAR_32->wr.opcode == 130)
  VAR_35.opcode = VAR_10;
 else
  VAR_35.opcode = VAR_9;
 VAR_35.wr_id = VAR_31->r_wr_id;
 VAR_35.status = VAR_15;
 VAR_35.byte_len = VAR_32->length;
 VAR_35.qp = &VAR_31->ibqp;
 VAR_35.src_qp = VAR_31->remote_qpn;
 VAR_35.slid = VAR_31->remote_ah_attr.dlid;
 VAR_35.sl = VAR_31->remote_ah_attr.sl;
 VAR_35.port_num = 1;

 FUNC_6(FUNC_19(VAR_31->ibqp.recv_cq), &VAR_35,
         VAR_32->wr.send_flags & VAR_6);

send_comp:
 FUNC_15(&VAR_29->s_lock, VAR_34);
flush_send:
 VAR_29->s_rnr_retry = VAR_29->s_rnr_retry_cnt;
 FUNC_13(VAR_29, VAR_32, VAR_38);
 goto again;

rnr_nak:

 if (VAR_31->ibqp.qp_type == VAR_5)
  goto send_comp;




 if (VAR_29->s_rnr_retry == 0) {
  VAR_38 = VAR_14;
  goto serr;
 }
 if (VAR_29->s_rnr_retry_cnt < 7)
  VAR_29->s_rnr_retry--;
 FUNC_15(&VAR_29->s_lock, VAR_34);
 if (!(VAR_28[VAR_29->state] & VAR_21))
  goto clr_busy;
 VAR_29->s_flags |= VAR_26;
 VAR_30->n_rnr_naks++;
 VAR_29->s_rnr_timeout = VAR_27[VAR_31->r_min_rnr_timer];
 FUNC_9(VAR_29);
 goto clr_busy;

inv_err:
 VAR_38 = VAR_12;
 VAR_35.status = VAR_8;
 goto err;

acc_err:
 VAR_38 = VAR_11;
 VAR_35.status = VAR_7;
err:

 FUNC_11(VAR_31, VAR_35.status);

serr:
 FUNC_15(&VAR_29->s_lock, VAR_34);
 FUNC_13(VAR_29, VAR_32, VAR_38);
 if (VAR_29->ibqp.qp_type == VAR_4) {
  int VAR_40 = FUNC_7(VAR_29, VAR_17);

  VAR_29->s_flags &= ~VAR_25;
  FUNC_16(&VAR_29->s_lock, VAR_34);
  if (VAR_40) {
   struct ib_event VAR_41;

   VAR_41.device = VAR_29->ibqp.device;
   VAR_41.element.qp = &VAR_29->ibqp;
   VAR_41.event = VAR_3;
   VAR_29->ibqp.event_handler(&VAR_41, VAR_29->ibqp.qp_context);
  }
  goto done;
 }
clr_busy:
 VAR_29->s_flags &= ~VAR_25;
unlock:
 FUNC_16(&VAR_29->s_lock, VAR_34);
done:
 if (VAR_31 && FUNC_2(&VAR_31->refcount))
  FUNC_22(&VAR_31->wait);
}
