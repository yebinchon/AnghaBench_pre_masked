
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct ipath_qp {TYPE_2__ ibqp; int s_lock; } ;
struct TYPE_3__ {TYPE_2__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 int VAR_0 ;
 int FUNC_0 (struct ipath_qp*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ib_event*,int ) ;

void FUNC_4(struct ipath_qp *VAR_1, enum ib_wc_status VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_1->s_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_1->s_lock, VAR_3);

 if (VAR_4) {
  struct ib_event VAR_5;

  VAR_5.device = VAR_1->ibqp.device;
  VAR_5.element.qp = &VAR_1->ibqp;
  VAR_5.event = VAR_0;
  VAR_1->ibqp.event_handler(&VAR_5, VAR_1->ibqp.qp_context);
 }
}
