
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ opcode; } ;
struct ipath_swqe {TYPE_2__ wr; } ;
struct TYPE_3__ {int device; } ;
struct ipath_qp {scalar_t__ s_retry; int s_psn; int piowait; int timerwait; TYPE_1__ ibqp; int s_last; } ;
struct ipath_ibdev {scalar_t__ n_rc_resends; int pending_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ipath_swqe* FUNC_0 (struct ipath_qp*,int ) ;
 int FUNC_1 (struct ipath_qp*,int ) ;
 int FUNC_2 (struct ipath_qp*) ;
 int FUNC_3 (struct ipath_qp*,struct ipath_swqe*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ipath_qp*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ipath_ibdev* FUNC_9 (int ) ;

void FUNC_10(struct ipath_qp *VAR_4, u32 VAR_5)
{
 struct ipath_swqe *VAR_6 = FUNC_0(VAR_4, VAR_4->s_last);
 struct ipath_ibdev *VAR_7;

 if (VAR_4->s_retry == 0) {
  FUNC_3(VAR_4, VAR_6, VAR_0);
  FUNC_1(VAR_4, VAR_1);
  goto bail;
 }
 VAR_4->s_retry--;





 VAR_7 = FUNC_9(VAR_4->ibqp.device);
 FUNC_7(&VAR_7->pending_lock);
 if (!FUNC_5(&VAR_4->timerwait))
  FUNC_4(&VAR_4->timerwait);
 if (!FUNC_5(&VAR_4->piowait))
  FUNC_4(&VAR_4->piowait);
 FUNC_8(&VAR_7->pending_lock);

 if (VAR_6->wr.opcode == VAR_2)
  VAR_7->n_rc_resends++;
 else
  VAR_7->n_rc_resends += (VAR_4->s_psn - VAR_5) & VAR_3;

 FUNC_6(VAR_4, VAR_5);
 FUNC_2(VAR_4);

bail:
 return;
}
