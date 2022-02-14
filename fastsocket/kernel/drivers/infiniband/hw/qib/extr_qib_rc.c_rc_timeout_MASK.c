
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct qib_qp {int s_flags; int r_lock; int s_lock; scalar_t__ s_last_psn; int s_timer; int port_num; TYPE_1__ ibqp; } ;
struct qib_ibport {int n_rc_timeouts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_qp*,scalar_t__,int) ;
 int FUNC_2 (struct qib_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 struct qib_ibport* FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_1)
{
 struct qib_qp *VAR_2 = (struct qib_qp *)VAR_1;
 struct qib_ibport *VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_2->r_lock, VAR_4);
 FUNC_3(&VAR_2->s_lock);
 if (VAR_2->s_flags & VAR_0) {
  VAR_3 = FUNC_7(VAR_2->ibqp.device, VAR_2->port_num);
  VAR_3->n_rc_timeouts++;
  VAR_2->s_flags &= ~VAR_0;
  FUNC_0(&VAR_2->s_timer);
  FUNC_1(VAR_2, VAR_2->s_last_psn + 1, 1);
  FUNC_2(VAR_2);
 }
 FUNC_5(&VAR_2->s_lock);
 FUNC_6(&VAR_2->r_lock, VAR_4);
}
