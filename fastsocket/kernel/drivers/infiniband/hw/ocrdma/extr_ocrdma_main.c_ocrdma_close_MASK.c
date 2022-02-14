
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_qp {int ibqp; } ;
struct ocrdma_dev {int ibdev; int dev_lock; struct ocrdma_qp** qp_tbl; } ;
struct ib_qp_attr {int qp_state; } ;
struct TYPE_2__ {int port_num; int * qp; } ;
struct ib_event {int * device; TYPE_1__ element; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct ib_qp_attr*,int) ;
 int FUNC_1 (struct ib_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_5)
{
 int VAR_6;
 struct ocrdma_qp *VAR_7, **VAR_8;
 struct ib_event VAR_9;
 struct ib_qp_attr VAR_10;
 int VAR_11 = VAR_3;

 VAR_10.qp_state = VAR_2;
 FUNC_2(&VAR_5->dev_lock);
 if (VAR_5->qp_tbl) {
  VAR_8 = VAR_5->qp_tbl;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   VAR_7 = VAR_8[VAR_6];
   if (VAR_7) {

    FUNC_0(&VAR_7->ibqp, &VAR_10, VAR_11);

    VAR_9.event = VAR_1;
    VAR_9.element.qp = &VAR_7->ibqp;
    VAR_9.device = &VAR_5->ibdev;
    FUNC_1(&VAR_9);
   }
  }
 }
 FUNC_3(&VAR_5->dev_lock);

 VAR_9.event = VAR_0;
 VAR_9.element.port_num = 1;
 VAR_9.device = &VAR_5->ibdev;
 FUNC_1(&VAR_9);
 return 0;
}
