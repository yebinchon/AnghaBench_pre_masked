
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {scalar_t__ opcode; } ;
struct qib_swqe {int lpsn; TYPE_3__ wr; TYPE_2__* sg_list; } ;
struct TYPE_9__ {scalar_t__ expires; int function; } ;
struct TYPE_6__ {int device; } ;
struct qib_qp {int s_flags; scalar_t__ s_acked; int r_flags; int s_last_psn; scalar_t__ s_tail; int s_psn; int s_state; int s_rnr_retry; int s_rnr_retry_cnt; scalar_t__ s_last; int s_retry_cnt; int s_retry; TYPE_4__ s_timer; scalar_t__ s_num_rd_atomic; int rspwait; int refcount; int port_num; TYPE_1__ ibqp; } ;
struct qib_ibport {int n_rc_resends; int n_other_naks; int n_seq_naks; int n_rnr_naks; int n_rc_acks; } ;
struct qib_ctxtdata {int qp_wait_list; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_7__ {int * vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 struct qib_swqe* FUNC_4 (struct qib_qp*,struct qib_swqe*,struct qib_ibport*) ;
 struct qib_swqe* FUNC_5 (struct qib_qp*,scalar_t__) ;
 int * VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct qib_qp*,int ) ;
 int FUNC_10 (struct qib_qp*,int) ;
 int VAR_25 ;
 int FUNC_11 (struct qib_qp*,int,int ) ;
 int FUNC_12 (struct qib_qp*) ;
 int FUNC_13 (struct qib_qp*,struct qib_swqe*,int) ;
 int FUNC_14 (struct qib_qp*,int) ;
 int FUNC_15 (struct qib_qp*) ;
 struct qib_ibport* FUNC_16 (int ,int ) ;
 int FUNC_17 (struct qib_qp*,int) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct qib_qp *VAR_26, u32 VAR_27, u32 VAR_28, int VAR_29,
       u64 VAR_30, struct qib_ctxtdata *VAR_31)
{
 struct qib_ibport *VAR_32;
 enum ib_wc_status VAR_33;
 struct qib_swqe *VAR_34;
 int VAR_35 = 0;
 u32 VAR_36;
 int VAR_37;


 if (VAR_26->s_flags & (VAR_14 | VAR_18)) {
  VAR_26->s_flags &= ~(VAR_14 | VAR_18);
  FUNC_3(&VAR_26->s_timer);
 }







 VAR_36 = VAR_28;
 if (VAR_27 >> 29)
  VAR_36--;
 VAR_34 = FUNC_5(VAR_26, VAR_26->s_acked);
 VAR_32 = FUNC_16(VAR_26->ibqp.device, VAR_26->port_num);





 while ((VAR_37 = FUNC_8(VAR_36, VAR_34->lpsn)) >= 0) {






  if (VAR_34->wr.opcode == VAR_8 &&
      VAR_29 == FUNC_0(VAR_21) &&
      VAR_37 == 0) {
   VAR_35 = 1;
   goto bail;
  }
  if ((VAR_34->wr.opcode == VAR_8 &&
       (VAR_29 != FUNC_0(VAR_20) || VAR_37 != 0)) ||
      ((VAR_34->wr.opcode == VAR_6 ||
        VAR_34->wr.opcode == VAR_7) &&
       (VAR_29 != FUNC_0(VAR_0) || VAR_37 != 0))) {

   if (!(VAR_26->r_flags & VAR_12)) {
    VAR_26->r_flags |= VAR_12;
    FUNC_11(VAR_26, VAR_26->s_last_psn + 1, 0);
    if (FUNC_7(&VAR_26->rspwait)) {
     VAR_26->r_flags |= VAR_13;
     FUNC_2(&VAR_26->refcount);
     FUNC_6(&VAR_26->rspwait,
            &VAR_31->qp_wait_list);
    }
   }




   goto bail;
  }
  if (VAR_34->wr.opcode == VAR_6 ||
      VAR_34->wr.opcode == VAR_7) {
   u64 *VAR_38 = VAR_34->sg_list[0].vaddr;
   *VAR_38 = VAR_30;
  }
  if (VAR_26->s_num_rd_atomic &&
      (VAR_34->wr.opcode == VAR_8 ||
       VAR_34->wr.opcode == VAR_6 ||
       VAR_34->wr.opcode == VAR_7)) {
   VAR_26->s_num_rd_atomic--;

   if ((VAR_26->s_flags & VAR_16) &&
       !VAR_26->s_num_rd_atomic) {
    VAR_26->s_flags &= ~(VAR_16 |
       VAR_15);
    FUNC_12(VAR_26);
   } else if (VAR_26->s_flags & VAR_17) {
    VAR_26->s_flags &= ~(VAR_17 |
       VAR_15);
    FUNC_12(VAR_26);
   }
  }
  VAR_34 = FUNC_4(VAR_26, VAR_34, VAR_32);
  if (VAR_26->s_acked == VAR_26->s_tail)
   break;
 }

 switch (VAR_27 >> 29) {
 case 0:
  VAR_32->n_rc_acks++;
  if (VAR_26->s_acked != VAR_26->s_tail) {




   FUNC_15(VAR_26);




   if (FUNC_8(VAR_26->s_psn, VAR_28) <= 0)
    FUNC_14(VAR_26, VAR_28 + 1);
  } else if (FUNC_8(VAR_26->s_psn, VAR_28) <= 0) {
   VAR_26->s_state = FUNC_0(VAR_22);
   VAR_26->s_psn = VAR_28 + 1;
  }
  if (VAR_26->s_flags & VAR_15) {
   VAR_26->s_flags &= ~VAR_15;
   FUNC_12(VAR_26);
  }
  FUNC_10(VAR_26, VAR_27);
  VAR_26->s_rnr_retry = VAR_26->s_rnr_retry_cnt;
  VAR_26->s_retry = VAR_26->s_retry_cnt;
  FUNC_17(VAR_26, VAR_28);
  VAR_35 = 1;
  goto bail;

 case 1:
  VAR_32->n_rnr_naks++;
  if (VAR_26->s_acked == VAR_26->s_tail)
   goto bail;
  if (VAR_26->s_flags & VAR_18)
   goto bail;
  if (VAR_26->s_rnr_retry == 0) {
   VAR_33 = VAR_4;
   goto class_b;
  }
  if (VAR_26->s_rnr_retry_cnt < 7)
   VAR_26->s_rnr_retry--;


  FUNC_17(VAR_26, VAR_28 - 1);

  VAR_32->n_rc_resends += (VAR_26->s_psn - VAR_28) & VAR_11;

  FUNC_14(VAR_26, VAR_28);

  VAR_26->s_flags &= ~(VAR_19 | VAR_15);
  VAR_26->s_flags |= VAR_18;
  VAR_26->s_timer.function = VAR_25;
  VAR_26->s_timer.expires = VAR_24 + FUNC_18(
   VAR_23[(VAR_27 >> VAR_10) &
        VAR_9]);
  FUNC_1(&VAR_26->s_timer);
  goto bail;

 case 3:
  if (VAR_26->s_acked == VAR_26->s_tail)
   goto bail;

  FUNC_17(VAR_26, VAR_28 - 1);
  switch ((VAR_27 >> VAR_10) &
   VAR_9) {
  case 0:
   VAR_32->n_seq_naks++;






   FUNC_11(VAR_26, VAR_28, 0);
   FUNC_12(VAR_26);
   break;

  case 1:
   VAR_33 = VAR_2;
   VAR_32->n_other_naks++;
   goto class_b;

  case 2:
   VAR_33 = VAR_1;
   VAR_32->n_other_naks++;
   goto class_b;

  case 3:
   VAR_33 = VAR_3;
   VAR_32->n_other_naks++;
class_b:
   if (VAR_26->s_last == VAR_26->s_acked) {
    FUNC_13(VAR_26, VAR_34, VAR_33);
    FUNC_9(VAR_26, VAR_5);
   }
   break;

  default:

   goto reserved;
  }
  VAR_26->s_retry = VAR_26->s_retry_cnt;
  VAR_26->s_rnr_retry = VAR_26->s_rnr_retry_cnt;
  goto bail;

 default:
reserved:

  goto bail;
 }

bail:
 return VAR_35;
}
