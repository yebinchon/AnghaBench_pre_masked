
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ opcode; } ;
struct qib_swqe {TYPE_2__ wr; } ;
struct TYPE_3__ {int device; } ;
struct qib_qp {scalar_t__ s_acked; scalar_t__ s_retry; scalar_t__ s_mig_state; scalar_t__ s_retry_cnt; scalar_t__ s_last; int s_psn; int s_flags; int port_num; TYPE_1__ ibqp; } ;
struct qib_ibport {scalar_t__ n_rc_resends; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct qib_swqe* FUNC_0 (struct qib_qp*,scalar_t__) ;
 int FUNC_1 (struct qib_qp*,int ) ;
 int FUNC_2 (struct qib_qp*) ;
 int FUNC_3 (struct qib_qp*,struct qib_swqe*,int ) ;
 int FUNC_4 (struct qib_qp*,int) ;
 struct qib_ibport* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct qib_qp *VAR_11, u32 VAR_12, int VAR_13)
{
 struct qib_swqe *VAR_14 = FUNC_0(VAR_11, VAR_11->s_acked);
 struct qib_ibport *VAR_15;

 if (VAR_11->s_retry == 0) {
  if (VAR_11->s_mig_state == VAR_0) {
   FUNC_2(VAR_11);
   VAR_11->s_retry = VAR_11->s_retry_cnt;
  } else if (VAR_11->s_last == VAR_11->s_acked) {
   FUNC_3(VAR_11, VAR_14, VAR_1);
   FUNC_1(VAR_11, VAR_2);
   return;
  } else
   return;
 } else
  VAR_11->s_retry--;

 VAR_15 = FUNC_5(VAR_11->ibqp.device, VAR_11->port_num);
 if (VAR_14->wr.opcode == VAR_3)
  VAR_15->n_rc_resends++;
 else
  VAR_15->n_rc_resends += (VAR_11->s_psn - VAR_12) & VAR_4;

 VAR_11->s_flags &= ~(VAR_7 | VAR_9 |
    VAR_10 | VAR_8 |
    VAR_6);
 if (VAR_13)
  VAR_11->s_flags |= VAR_5;
 FUNC_4(VAR_11, VAR_12);
}
