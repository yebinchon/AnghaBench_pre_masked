
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int qp_type; } ;
struct qib_qp {size_t state; int wait; int refcount; int r_lock; int rspwait; int r_flags; int r_psn; int r_ack_psn; int r_nak_state; TYPE_4__ ibqp; } ;
struct qib_ibport {int n_rc_seqnak; int n_pkt_drops; } ;
struct qib_pportdata {int lmc; int lid; struct qib_ibport ibport_data; } ;
struct qib_other_headers {int * bth; } ;
struct qib_message_header {int dummy; } ;
struct TYPE_5__ {scalar_t__ next_hdr; int version_tclass_flow; } ;
struct TYPE_6__ {TYPE_1__ grh; struct qib_other_headers oth; } ;
struct TYPE_7__ {TYPE_2__ l; struct qib_other_headers oth; } ;
struct qib_ib_header {TYPE_3__ u; int * lrh; } ;
struct qib_ctxtdata {int qp_wait_list; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int* VAR_15 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 struct qib_qp* FUNC_8 (struct qib_ibport*,int) ;
 int FUNC_9 (struct qib_ibport*,struct qib_ib_header*,int,struct qib_qp*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static u32 FUNC_14(struct qib_ctxtdata *VAR_16, struct qib_pportdata *VAR_17,
     u32 VAR_18, u32 VAR_19, u32 VAR_20, u32 VAR_21,
     __le32 *VAR_22, struct qib_message_header *VAR_23)
{
 u32 VAR_24 = 0;

 if (VAR_19 & (VAR_12 | VAR_14))
  VAR_24 = 1;
 else if (VAR_19 == VAR_13) {

  struct qib_ib_header *VAR_25 = (struct qib_ib_header *) VAR_23;
  struct qib_other_headers *VAR_26 = ((void*)0);
  struct qib_ibport *VAR_27 = &VAR_17->ibport_data;
  struct qib_qp *VAR_28 = ((void*)0);
  u32 VAR_29 = FUNC_7(VAR_22);
  u16 VAR_30 = FUNC_2(VAR_25->lrh[1]);
  int VAR_31 = FUNC_2(VAR_25->lrh[0]) & 3;
  u32 VAR_32;
  u32 VAR_33;
  u32 VAR_34;
  int VAR_35;


  if (VAR_29 < 24)
   goto drop;

  if (VAR_30 < VAR_7) {
   VAR_30 &= ~((1 << VAR_17->lmc) - 1);
   if (FUNC_12(VAR_30 != VAR_17->lid))
    goto drop;
  }


  if (VAR_31 == VAR_5)
   VAR_26 = &VAR_25->u.oth;
  else if (VAR_31 == VAR_6) {
   u32 VAR_36;

   VAR_26 = &VAR_25->u.l.oth;
   if (VAR_25->u.l.grh.next_hdr != VAR_0)
    goto drop;
   VAR_36 = FUNC_3(VAR_25->u.l.grh.version_tclass_flow);
   if ((VAR_36 >> VAR_2) != VAR_1)
    goto drop;
  } else
   goto drop;


  VAR_33 = FUNC_3(VAR_26->bth[0]);
  VAR_33 >>= 24;
  VAR_34 = FUNC_3(VAR_26->bth[2]);


  VAR_32 = FUNC_3(VAR_26->bth[1]) & VAR_10;
  if (VAR_32 != VAR_8) {
   int VAR_37;
   VAR_28 = FUNC_8(VAR_27, VAR_32);
   if (!VAR_28)
    goto drop;





   FUNC_10(&VAR_28->r_lock);


   if (!(VAR_15[VAR_28->state] &
         VAR_9)) {
    VAR_27->n_pkt_drops++;
    goto unlock;
   }

   switch (VAR_28->ibqp.qp_type) {
   case 131:
    VAR_37 =
     FUNC_9(
      VAR_27, VAR_25,
      VAR_31 == VAR_6,
      VAR_28,
      FUNC_3(VAR_26->bth[0]));
    if (VAR_37)
     goto unlock;


    if (VAR_33 <
        VAR_4) {
     VAR_35 = FUNC_6(VAR_34, VAR_28->r_psn);
     if (!VAR_28->r_nak_state && VAR_35 >= 0) {
      VAR_27->n_rc_seqnak++;
      VAR_28->r_nak_state =
       VAR_3;

      VAR_28->r_ack_psn = VAR_28->r_psn;
      if (FUNC_5(&VAR_28->rspwait)) {
       VAR_28->r_flags |=
        VAR_11;
       FUNC_1(
        &VAR_28->refcount);
       FUNC_4(
        &VAR_28->rspwait,
        &VAR_16->qp_wait_list);
      }
     }
    }
    break;
   case 130:
   case 132:
   case 128:
   case 129:
   default:

    break;
   }

unlock:
   FUNC_11(&VAR_28->r_lock);




   if (FUNC_0(&VAR_28->refcount))
    FUNC_13(&VAR_28->wait);
  }
 }

drop:
 return VAR_24;
}
