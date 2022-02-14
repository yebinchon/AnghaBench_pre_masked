
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {size_t opcode; int send_flags; int wr_id; } ;
struct ipath_swqe {int lpsn; int psn; TYPE_4__ wr; int length; TYPE_3__* sg_list; } ;
struct TYPE_6__ {int send_cq; int device; } ;
struct TYPE_5__ {int sl; int dlid; } ;
struct ipath_qp {scalar_t__ s_last; int s_flags; scalar_t__ s_cur; scalar_t__ s_size; scalar_t__ s_tail; int s_state; int s_psn; scalar_t__ state; int s_rnr_retry; int s_rnr_retry_cnt; int s_rnr_timeout; int s_retry_cnt; int s_retry; int timerwait; scalar_t__ s_draining; TYPE_2__ ibqp; TYPE_1__ remote_ah_attr; int remote_qpn; scalar_t__ s_num_rd_atomic; } ;
struct ipath_ibdev {size_t pending_index; int n_rc_resends; int n_other_naks; int n_seq_naks; int n_rnr_naks; int pending_lock; int * pending; int n_rc_acks; } ;
struct ib_wc {int sl; int slid; int src_qp; TYPE_2__* qp; int byte_len; int opcode; int status; int wr_id; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_7__ {scalar_t__ vaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct ipath_swqe* FUNC_1 (struct ipath_qp*,scalar_t__) ;
 int * VAR_21 ;
 int * VAR_22 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,struct ib_wc*,int ) ;
 int FUNC_4 (struct ipath_qp*,int ) ;
 int FUNC_5 (struct ipath_qp*,int) ;
 int FUNC_6 (struct ipath_qp*) ;
 int FUNC_7 (struct ipath_qp*,int) ;
 int FUNC_8 (struct ipath_qp*) ;
 int FUNC_9 (struct ipath_qp*,struct ipath_swqe*,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (struct ib_wc*,int ,int) ;
 int FUNC_14 (struct ipath_qp*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 struct ipath_ibdev* FUNC_18 (int ) ;
 int FUNC_19 (struct ipath_qp*,int) ;

__attribute__((used)) static int FUNC_20(struct ipath_qp *VAR_23, u32 VAR_24, u32 VAR_25, int VAR_26,
       u64 VAR_27)
{
 struct ipath_ibdev *VAR_28 = FUNC_18(VAR_23->ibqp.device);
 struct ib_wc VAR_29;
 enum ib_wc_status VAR_30;
 struct ipath_swqe *VAR_31;
 int VAR_32 = 0;
 u32 VAR_33;
 int VAR_34;







 FUNC_15(&VAR_28->pending_lock);
 if (!FUNC_12(&VAR_23->timerwait))
  FUNC_11(&VAR_23->timerwait);
 FUNC_16(&VAR_28->pending_lock);







 VAR_33 = VAR_25;
 if (VAR_24 >> 29)
  VAR_33--;
 VAR_31 = FUNC_1(VAR_23, VAR_23->s_last);





 while ((VAR_34 = FUNC_2(VAR_33, VAR_31->lpsn)) >= 0) {






  if (VAR_31->wr.opcode == VAR_11 &&
      VAR_26 == FUNC_0(VAR_19) &&
      VAR_34 == 0) {
   VAR_32 = 1;
   goto bail;
  }
  if ((VAR_31->wr.opcode == VAR_11 &&
       (VAR_26 != FUNC_0(VAR_18) || VAR_34 != 0)) ||
      ((VAR_31->wr.opcode == VAR_9 ||
        VAR_31->wr.opcode == VAR_10) &&
       (VAR_26 != FUNC_0(VAR_0) || VAR_34 != 0))) {




   FUNC_19(VAR_23, VAR_31->psn - 1);

   FUNC_7(VAR_23, VAR_31->psn);




   goto bail;
  }
  if (VAR_31->wr.opcode == VAR_9 ||
      VAR_31->wr.opcode == VAR_10)
   *(u64 *) VAR_31->sg_list[0].vaddr = VAR_27;
  if (VAR_23->s_num_rd_atomic &&
      (VAR_31->wr.opcode == VAR_11 ||
       VAR_31->wr.opcode == VAR_9 ||
       VAR_31->wr.opcode == VAR_10)) {
   VAR_23->s_num_rd_atomic--;

   if (((VAR_23->s_flags & VAR_15) &&
        !VAR_23->s_num_rd_atomic) ||
       VAR_23->s_flags & VAR_16)
    FUNC_8(VAR_23);
  }

  if (!(VAR_23->s_flags & VAR_17) ||
      (VAR_31->wr.send_flags & VAR_2)) {
   FUNC_13(&VAR_29, 0, sizeof VAR_29);
   VAR_29.wr_id = VAR_31->wr.wr_id;
   VAR_29.status = VAR_7;
   VAR_29.opcode = VAR_22[VAR_31->wr.opcode];
   VAR_29.byte_len = VAR_31->length;
   VAR_29.qp = &VAR_23->ibqp;
   VAR_29.src_qp = VAR_23->remote_qpn;
   VAR_29.slid = VAR_23->remote_ah_attr.dlid;
   VAR_29.sl = VAR_23->remote_ah_attr.sl;
   FUNC_3(FUNC_17(VAR_23->ibqp.send_cq), &VAR_29, 0);
  }
  VAR_23->s_retry = VAR_23->s_retry_cnt;





  if (VAR_23->s_last == VAR_23->s_cur) {
   if (++VAR_23->s_cur >= VAR_23->s_size)
    VAR_23->s_cur = 0;
   VAR_23->s_last = VAR_23->s_cur;
   if (VAR_23->s_last == VAR_23->s_tail)
    break;
   VAR_31 = FUNC_1(VAR_23, VAR_23->s_cur);
   VAR_23->s_state = FUNC_0(VAR_20);
   VAR_23->s_psn = VAR_31->psn;
  } else {
   if (++VAR_23->s_last >= VAR_23->s_size)
    VAR_23->s_last = 0;
   if (VAR_23->state == VAR_1 && VAR_23->s_last == VAR_23->s_cur)
    VAR_23->s_draining = 0;
   if (VAR_23->s_last == VAR_23->s_tail)
    break;
   VAR_31 = FUNC_1(VAR_23, VAR_23->s_last);
  }
 }

 switch (VAR_24 >> 29) {
 case 0:
  VAR_28->n_rc_acks++;

  if (VAR_23->s_last != VAR_23->s_tail) {
   FUNC_15(&VAR_28->pending_lock);
   if (FUNC_12(&VAR_23->timerwait))
    FUNC_10(&VAR_23->timerwait,
     &VAR_28->pending[VAR_28->pending_index]);
   FUNC_16(&VAR_28->pending_lock);





   if (FUNC_2(VAR_23->s_psn, VAR_25) <= 0) {
    FUNC_14(VAR_23, VAR_25 + 1);
    FUNC_8(VAR_23);
   }
  } else if (FUNC_2(VAR_23->s_psn, VAR_25) <= 0) {
   VAR_23->s_state = FUNC_0(VAR_20);
   VAR_23->s_psn = VAR_25 + 1;
  }
  FUNC_5(VAR_23, VAR_24);
  VAR_23->s_rnr_retry = VAR_23->s_rnr_retry_cnt;
  VAR_23->s_retry = VAR_23->s_retry_cnt;
  FUNC_19(VAR_23, VAR_25);
  VAR_32 = 1;
  goto bail;

 case 1:
  VAR_28->n_rnr_naks++;
  if (VAR_23->s_last == VAR_23->s_tail)
   goto bail;
  if (VAR_23->s_rnr_retry == 0) {
   VAR_30 = VAR_6;
   goto class_b;
  }
  if (VAR_23->s_rnr_retry_cnt < 7)
   VAR_23->s_rnr_retry--;


  FUNC_19(VAR_23, VAR_25 - 1);

  if (VAR_31->wr.opcode == VAR_11)
   VAR_28->n_rc_resends++;
  else
   VAR_28->n_rc_resends +=
    (VAR_23->s_psn - VAR_25) & VAR_14;

  FUNC_14(VAR_23, VAR_25);

  VAR_23->s_rnr_timeout =
   VAR_21[(VAR_24 >> VAR_13) &
        VAR_12];
  FUNC_6(VAR_23);
  FUNC_8(VAR_23);
  goto bail;

 case 3:
  if (VAR_23->s_last == VAR_23->s_tail)
   goto bail;

  FUNC_19(VAR_23, VAR_25 - 1);
  switch ((VAR_24 >> VAR_13) &
   VAR_12) {
  case 0:
   VAR_28->n_seq_naks++;






   FUNC_7(VAR_23, VAR_25);
   break;

  case 1:
   VAR_30 = VAR_4;
   VAR_28->n_other_naks++;
   goto class_b;

  case 2:
   VAR_30 = VAR_3;
   VAR_28->n_other_naks++;
   goto class_b;

  case 3:
   VAR_30 = VAR_5;
   VAR_28->n_other_naks++;
  class_b:
   FUNC_9(VAR_23, VAR_31, VAR_30);
   FUNC_4(VAR_23, VAR_8);
   break;

  default:

   goto reserved;
  }
  VAR_23->s_rnr_retry = VAR_23->s_rnr_retry_cnt;
  goto bail;

 default:
 reserved:

  goto bail;
 }

bail:
 return VAR_32;
}
