
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; int qp_type; } ;
struct TYPE_7__ {int sgid_index; } ;
struct TYPE_9__ {scalar_t__ dlid; int ah_flags; int static_rate; TYPE_2__ grh; } ;
struct ipath_qp {int state; int s_draining; scalar_t__ s_pkey_index; scalar_t__ path_mtu; int s_rnr_retry; int s_rnr_retry_cnt; int r_min_rnr_timer; scalar_t__ r_max_rd_atomic; int s_lock; TYPE_3__ ibqp; int s_max_rd_atomic; int qkey; int timeout; int s_retry_cnt; int s_retry; int s_dmult; TYPE_4__ remote_ah_attr; int qp_access_flags; int r_psn; scalar_t__ s_next_psn; scalar_t__ s_last_psn; scalar_t__ s_psn; int remote_qpn; int s_cur; int s_last; int s_dma_busy; int wait_dma; int s_task; int s_flags; int piowait; int timerwait; } ;
struct ipath_ibdev {int pending_lock; int dd; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; scalar_t__ pkey_index; int min_rnr_timer; scalar_t__ port_num; scalar_t__ path_mtu; scalar_t__ path_mig_state; scalar_t__ max_dest_rd_atomic; int rnr_retry; int max_rd_atomic; int qkey; int timeout; int retry_cnt; TYPE_4__ ah_attr; int qp_access_flags; int rq_psn; scalar_t__ sq_psn; int dest_qp_num; } ;
struct ib_qp {int qp_type; TYPE_5__* device; } ;
struct TYPE_6__ {TYPE_3__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_10__ {scalar_t__ phys_port_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;




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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ipath_qp*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_29 ;
 int FUNC_6 (struct ipath_qp*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ib_event*,int ) ;
 int FUNC_14 (int *) ;
 struct ipath_ibdev* FUNC_15 (TYPE_5__*) ;
 struct ipath_qp* FUNC_16 (struct ib_qp*) ;
 int FUNC_17 (int ,int) ;

int FUNC_18(struct ib_qp *VAR_30, struct ib_qp_attr *VAR_31,
      int VAR_32, struct ib_udata *VAR_33)
{
 struct ipath_ibdev *VAR_34 = FUNC_15(VAR_30->device);
 struct ipath_qp *VAR_35 = FUNC_16(VAR_30);
 enum ib_qp_state VAR_36, VAR_37;
 int VAR_38 = 0;
 int VAR_39;

 FUNC_10(&VAR_35->s_lock);

 VAR_36 = VAR_32 & VAR_9 ?
  VAR_31->cur_qp_state : VAR_35->state;
 VAR_37 = VAR_32 & VAR_23 ? VAR_31->qp_state : VAR_36;

 if (!FUNC_1(VAR_36, VAR_37, VAR_30->qp_type,
    VAR_32))
  goto inval;

 if (VAR_32 & VAR_8) {
  if (VAR_31->ah_attr.dlid == 0 ||
      VAR_31->ah_attr.dlid >= VAR_27)
   goto inval;

  if ((VAR_31->ah_attr.ah_flags & VAR_1) &&
      (VAR_31->ah_attr.grh.sgid_index > 1))
   goto inval;
 }

 if (VAR_32 & VAR_16)
  if (VAR_31->pkey_index >= FUNC_4(VAR_34->dd))
   goto inval;

 if (VAR_32 & VAR_13)
  if (VAR_31->min_rnr_timer > 31)
   goto inval;

 if (VAR_32 & VAR_17)
  if (VAR_31->port_num == 0 ||
      VAR_31->port_num > VAR_30->device->phys_port_cnt)
   goto inval;





 if ((VAR_32 & VAR_15) &&
  (FUNC_2(VAR_31->path_mtu) == -1 ||
  (VAR_31->path_mtu > VAR_5 && !VAR_29)))
  goto inval;

 if (VAR_32 & VAR_14)
  if (VAR_31->path_mig_state != VAR_3 &&
      VAR_31->path_mig_state != VAR_4)
   goto inval;

 if (VAR_32 & VAR_11)
  if (VAR_31->max_dest_rd_atomic > VAR_26)
   goto inval;

 switch (VAR_37) {
 case 130:
  if (VAR_35->state != 130) {
   VAR_35->state = 130;
   FUNC_9(&VAR_34->pending_lock);
   if (!FUNC_8(&VAR_35->timerwait))
    FUNC_7(&VAR_35->timerwait);
   if (!FUNC_8(&VAR_35->piowait))
    FUNC_7(&VAR_35->piowait);
   FUNC_11(&VAR_34->pending_lock);
   VAR_35->s_flags &= ~VAR_28;
   FUNC_12(&VAR_35->s_lock);

   FUNC_14(&VAR_35->s_task);
   FUNC_17(VAR_35->wait_dma, !FUNC_0(&VAR_35->s_dma_busy));
   FUNC_10(&VAR_35->s_lock);
  }
  FUNC_6(VAR_35, VAR_30->qp_type);
  break;

 case 129:
  VAR_35->s_draining = VAR_35->s_last != VAR_35->s_cur;
  VAR_35->state = VAR_37;
  break;

 case 128:
  if (VAR_35->ibqp.qp_type == VAR_6)
   goto inval;
  VAR_35->state = VAR_37;
  break;

 case 131:
  VAR_38 = FUNC_3(VAR_35, VAR_25);
  break;

 default:
  VAR_35->state = VAR_37;
  break;
 }

 if (VAR_32 & VAR_16)
  VAR_35->s_pkey_index = VAR_31->pkey_index;

 if (VAR_32 & VAR_10)
  VAR_35->remote_qpn = VAR_31->dest_qp_num;

 if (VAR_32 & VAR_22) {
  VAR_35->s_psn = VAR_35->s_next_psn = VAR_31->sq_psn;
  VAR_35->s_last_psn = VAR_35->s_next_psn - 1;
 }

 if (VAR_32 & VAR_21)
  VAR_35->r_psn = VAR_31->rq_psn;

 if (VAR_32 & VAR_7)
  VAR_35->qp_access_flags = VAR_31->qp_access_flags;

 if (VAR_32 & VAR_8) {
  VAR_35->remote_ah_attr = VAR_31->ah_attr;
  VAR_35->s_dmult = FUNC_5(VAR_31->ah_attr.static_rate);
 }

 if (VAR_32 & VAR_15)
  VAR_35->path_mtu = VAR_31->path_mtu;

 if (VAR_32 & VAR_19)
  VAR_35->s_retry = VAR_35->s_retry_cnt = VAR_31->retry_cnt;

 if (VAR_32 & VAR_20) {
  VAR_35->s_rnr_retry = VAR_31->rnr_retry;
  if (VAR_35->s_rnr_retry > 7)
   VAR_35->s_rnr_retry = 7;
  VAR_35->s_rnr_retry_cnt = VAR_35->s_rnr_retry;
 }

 if (VAR_32 & VAR_13)
  VAR_35->r_min_rnr_timer = VAR_31->min_rnr_timer;

 if (VAR_32 & VAR_24)
  VAR_35->timeout = VAR_31->timeout;

 if (VAR_32 & VAR_18)
  VAR_35->qkey = VAR_31->qkey;

 if (VAR_32 & VAR_11)
  VAR_35->r_max_rd_atomic = VAR_31->max_dest_rd_atomic;

 if (VAR_32 & VAR_12)
  VAR_35->s_max_rd_atomic = VAR_31->max_rd_atomic;

 FUNC_12(&VAR_35->s_lock);

 if (VAR_38) {
  struct ib_event VAR_40;

  VAR_40.device = VAR_35->ibqp.device;
  VAR_40.element.qp = &VAR_35->ibqp;
  VAR_40.event = VAR_2;
  VAR_35->ibqp.event_handler(&VAR_40, VAR_35->ibqp.qp_context);
 }
 VAR_39 = 0;
 goto bail;

inval:
 FUNC_12(&VAR_35->s_lock);
 VAR_39 = -VAR_0;

bail:
 return VAR_39;
}
