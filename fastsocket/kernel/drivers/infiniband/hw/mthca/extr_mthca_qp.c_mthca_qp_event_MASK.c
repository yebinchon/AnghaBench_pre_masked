
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct mthca_qp {int wait; int refcount; TYPE_3__ ibqp; int alt_port; int port; } ;
struct TYPE_8__ {int lock; int qp; } ;
struct TYPE_5__ {int num_qps; } ;
struct mthca_dev {TYPE_4__ qp_table; int ib_dev; TYPE_1__ limits; } ;
struct TYPE_6__ {TYPE_3__* qp; } ;
struct ib_event {int event; TYPE_2__ element; int * device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int VAR_0 ;
 struct mthca_qp* FUNC_0 (int *,int) ;
 int FUNC_1 (struct mthca_dev*,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_event*,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mthca_dev *VAR_1, u32 VAR_2,
      enum ib_event_type VAR_3)
{
 struct mthca_qp *VAR_4;
 struct ib_event VAR_5;

 FUNC_2(&VAR_1->qp_table.lock);
 VAR_4 = FUNC_0(&VAR_1->qp_table.qp, VAR_2 & (VAR_1->limits.num_qps - 1));
 if (VAR_4)
  ++VAR_4->refcount;
 FUNC_3(&VAR_1->qp_table.lock);

 if (!VAR_4) {
  FUNC_1(VAR_1, "Async event %d for bogus QP %08x\n",
      VAR_3, VAR_2);
  return;
 }

 if (VAR_3 == VAR_0)
  VAR_4->port = VAR_4->alt_port;

 VAR_5.device = &VAR_1->ib_dev;
 VAR_5.event = VAR_3;
 VAR_5.element.qp = &VAR_4->ibqp;
 if (VAR_4->ibqp.event_handler)
  VAR_4->ibqp.event_handler(&VAR_5, VAR_4->ibqp.qp_context);

 FUNC_2(&VAR_1->qp_table.lock);
 if (!--VAR_4->refcount)
  FUNC_5(&VAR_4->wait);
 FUNC_3(&VAR_1->qp_table.lock);
}
